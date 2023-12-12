#define _CRT_SECURE_NO_WARNINGS
#include "헤더들.h";
#define MAX 10
#define DONTMOVE -1
#define WALL -2
#define CLOSED -3
#define UNDEF -1
#define INF 0

typedef struct {
    int c;
    int r;
    int g;
} Vertex;

typedef struct Queue {
    Vertex v;
    struct Queue* next;
} Queue;

void astar(void);
void addOpenList(Vertex);
int calcHeuristic(Vertex, int, int);
void enqueue(Vertex);
Vertex dequeue(void);
int emptyQueue(void);
void printCharacter(void);
void printWeights(void);

Queue* Q;
Vertex start, end;
int weights[MAX][MAX];
int visited[MAX][MAX];
int predecessor[MAX][MAX];

int as(void) {
    ScreenRelease();
    int obstacleColumn, obstacleRow;
    int obstacleCount = 0;
    int i;
    printf("");
    printf("시작지점의 x,y축을 입력해주세요(1~9)");
    scanf("%d%d", &start.r, &start.c);
    start.c--;
    start.r--;
    printf("목표지점의 x,y축을 입력해주세요(1~9)");
    scanf("%d%d", &end.r, &end.c);
    end.c--;
    end.r--;
    printf("장애물의 개수를 입력해주세요(1~9)");
    scanf("%d", &obstacleCount);

    for (i = 0; i < obstacleCount; i++) {
        printf("장애물의 x,y축을 입력해주세요(1~9)");
        scanf("%d%d", &obstacleRow, &obstacleColumn);
        visited[obstacleColumn - 1][obstacleRow - 1] = WALL;
    }

    astar();
    printCharacter();
    _getch();
    ScreenInit();
    return 0;
}

void printCharacter(void) {
    int i, j, backtrack;

    i = predecessor[end.c][end.r] / MAX;
    j = predecessor[end.c][end.r] % MAX;

    while (predecessor[i][j] != UNDEF) {
        backtrack = predecessor[i][j];
        weights[i][j] = 7;
        i = backtrack / MAX;
        j = backtrack % MAX;
    }

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            if (i == end.c && j == end.r) {
                printf("%5s", "★");
            }
            else if (i == start.c && j == start.r) {
                printf("%5s", "☆");
            }
            else if (weights[i][j] == 7) {
                printf("%5s", "●");
            }
            else if (visited[i][j] == -2) {
                printf("%5s", "▤");
            }
            else {
                printf("%5s", "○");
            }
        }
        printf("\n");
    }
}

void printWeights(void) {
    int i, j;

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("%5d", weights[i][j]);
        }
        printf("\n");
    }
}

int emptyQueue(void) {
    return Q == NULL;
}

Vertex dequeue(void) {
    Queue* front = Q;
    Vertex vertex = { 0, 0, 0 };

    if (front != NULL) {
        Q = front->next;
        vertex.c = front->v.c;
        vertex.r = front->v.r;
        vertex.g = front->v.g;
        free(front);
        return vertex;
    }

    return vertex;
}

void enqueue(Vertex vertex) {
    Queue* front = Q;
    Queue* newQueue = (Queue*)malloc(sizeof(Queue));
    Vertex temp;
    int key;

    newQueue->next = NULL;
    newQueue->v = vertex;

    if (front == NULL) {
        Q = newQueue;
        return;
    }

    while (front->next != NULL) {
        key = weights[vertex.c][vertex.r];

        if (key < weights[front->v.c][front->v.r]) {
            temp = front->v;
            front->v = vertex;
            vertex = temp;
        }

        front = front->next;
    }

    newQueue->v = vertex;
    front->next = newQueue;
}

int calcHeuristic(Vertex vertex, int column, int row) {
    int result = (abs(end.c - column) + abs(end.r - row)) * 10;

    if (abs(vertex.c - column) == abs(vertex.r - row)) {
        return result + 14;
    }
    else {
        return result + 10;
    }
}

void addOpenList(Vertex vertex) {
    Vertex temp;
    int i, j, weight;

    for (i = vertex.c - 1; i <= vertex.c + 1; i++) {
        if (i < 0 || i >= MAX) continue;

        for (j = vertex.r - 1; j <= vertex.r + 1; j++) {
            if (j < 0 || j >= MAX || (i == vertex.c && j == vertex.r) || visited[i][j] <= DONTMOVE) continue;

            weight = calcHeuristic(vertex, i, j);

            if (weight < weights[i][j] || weights[i][j] == INF) {
                weights[i][j] = weight;
                predecessor[i][j] = (vertex.c * MAX) + vertex.r;
                if (end.c == i && end.r == j) {
                    Q = NULL;
                    printWeights();
                    printf("\n\n");
                    
                    Sleep(1500);
                    return;
                }
            }

            temp.c = i;
            temp.r = j;
            enqueue(temp);
        }
    }

    printWeights();
    printf("\n\n");
    Sleep(1500);
}

void astar(void) {
    Vertex current;

    weights[start.c][start.r] = 0;
    predecessor[start.c][start.r] = UNDEF;
    start.g = 0;
    current = start;

    addOpenList(current);

    while (!emptyQueue()) {
        visited[current.c][current.r] = CLOSED;
        current = dequeue();
        addOpenList(current);
    }
}
