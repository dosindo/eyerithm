#include "헤더들.h";

#define MAX 1001

int adj2[MAX][MAX];
int discovered[MAX];

typedef struct Queue {
    int front, rear;
    int data[MAX];
} Queue;

void BFS(int start, int N) {
    int here, there;
    Queue q;
    q.front = -1;
    q.rear = -1;

    discovered[start] = 1;
    q.data[++q.rear] = start;

    printf("BFS 시작 (시작 정점: %d)\n", start);

    while (q.front < q.rear) {
        here = q.data[++q.front];
        printf("정점 %d을 방문했습니다.\n", here);

        for (int i = 1; i <= N; i++) {
            if (adj2[here][i]) {
                there = i;
                if (!discovered[there]) {
                    discovered[there] = 1;
                    q.data[++q.rear] = there;
                }
            }
        }

        // 과정마다 출력
        printf("큐: ");
        for (int i = q.front + 1; i <= q.rear; i++) {
            printf("%d ", q.data[i]);
        }
        printf("\n\n");
    }

    printf("BFS 종료\n");
    printf("방문한 정점 순서: ");
    for (int i = 0; i <= q.rear; i++) {
        printf("%d ", q.data[i]);
    }
    printf("\n");
}

int bfsm() {
    ScreenRelease();
    printf("너비탐색\n시작 노드에서 출발하여 인접한 모든 노드를 먼저 탐색하고, 그 이후에 그 인접한 노드들의 인접한 노드를 차례로 탐색하는 알고리즘\n");
    int N, M, v;
    int x, y;

    printf("정점개수, 간선개수, 시작정점을 띄어쓰기로 구분하여 입력하시오: ");
    scanf_s("%d %d %d", &N, &M, &v);

    for (int i = 1; i <= M; i++) {
        printf("인접한 정점 두 개를 띄어쓰기로 구분하여 입력해주세요: ");
        scanf_s("%d %d", &x, &y);
        adj2[x][y] = 1;
        adj2[y][x] = 1;
    }

    BFS(v, N);
    _getch();
    ScreenInit();
    return 0;
}
