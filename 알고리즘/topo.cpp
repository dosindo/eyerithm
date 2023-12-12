#define _CRT_SECURE_NO_WARNINGS
#include "헤더들.h";

#define MAX_VERTEX 20

int vertex[MAX_VERTEX];
int edge2[MAX_VERTEX][MAX_VERTEX];
int inDegree[MAX_VERTEX];
int result[MAX_VERTEX];
int queue2[MAX_VERTEX];
int front2 = -1, rear2 = -1;

void printQueue() {
    printf("큐 상태: ");
    for (int i = front2 + 1; i <= rear2; i++) {
        printf("%d ", queue2[i]);
    }
    printf("\n");
}

void printInDegree(int v) {
    printf("진입 차수 상태: ");
    for (int i = 0; i < v; i++) {
        printf("%d ", inDegree[i]);
    }
    printf("\n");
}

void addQueue(int v) {
    queue2[++rear2] = v;
    printQueue();
}

int deleteQueue() {
    int deleted = queue2[++front2];
    printQueue();
    return deleted;
}

int isEmpty() {
    if (front2 == rear2) return 1;
    else return 0;
}

void topologySort(int v) {
    int i, j;
    for (i = 0; i < v; i++) {
        if (inDegree[i] == 0) addQueue(i);
    }

    for (i = 0; i < v; i++) {
        if (isEmpty()) {
            printf("위상 정렬 불가능. 사이클 존재\n");
            return;
        }
        j = deleteQueue();
        printf("\n%d\n", j);
        result[i] = j;
        for (int k = 0; k < v; k++) {
            if (edge2[j][k] == 1) {
                inDegree[k]--;
                if (inDegree[k] == 0) addQueue(k);
            }
        }
        printInDegree(v);
        Sleep(500);
    }
    printf("\n최종 결과: ");
    for (i = 0; i < v; i++)
        printf("%d ", result[i]);
    printf("\n");
}

int topo() {

    ScreenRelease();
    system("cls");
    printf("위상정렬\n위상 정렬(Topological Sorting)은 방향 그래프(Directed Graph)의 각 노드들이 방향성을 가진 간선으로 연결되어 있을 때, 노드들을 선형으로 나열하는 작업이다. 이때 나열된 순서는 그래프 내의 모든 간선이 순서를 따르도록 만든다.");
    int v, e;
    printf("정점의 수와 간선의 수를 입력하세요: ");
    scanf("%d %d", &v, &e);
    for (int i = 0; i < e; i++) {
        int src, dest;
        printf("간선의 시작점과 끝점을 입력하세요: ");
        scanf("%d %d", &src, &dest);
        edge2[src][dest] = 1;
        inDegree[dest]++;
    }
    topologySort(v);
    _getch();
    ScreenInit();
    return 0;
}