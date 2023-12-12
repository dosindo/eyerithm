#include"헤더들.h";
#define MAX 1001

int adj[MAX][MAX]; // 인접행렬 만들때 사용
int visited[MAX]; // 방문했는지 check

void init(int N) {
    for (int i = 1; i <= N; i++) {
        visited[i] = 0; // 방문한 곳 0으로 초기화 !
    }
}

// 모든 컴포넌트 방문
void DFSAll(int N);

void DFS(int here, int N) { // 정점과 정점개수
    int there;
    
    visited[here] = 1; // 방문 check
    printf("%d ", here); // 정점 출력

    for (int i = 1; i <= N; i++) {
        if (adj[here][i]) {
            there = i;
            if (!visited[there]) {
                DFS(there, N); // 발견하자마자 바로 함수로 다시 들어가
            }
        }
    }
}

int dfsm() {
    ScreenRelease();
    system("cls");
    printf("깊이탐색\n그리프를 시작 노드에서 출발하여 가능한 한 깊이 들어가면서 더 이상 갈 곳이 없으면 다시 돌아와서 다른 경로로 탐색하는 알고리즘\n");
    int N, M, v; // 정점개수, 간선개수, 시작정점
    int x, y; // 좌표
    printf("정점개수, 간선개수, 시작정점을 띄어쓰기로 구분하여 입력하시오.");
    scanf_s("%d %d %d", &N, &M, &v);

    for (int i = 1; i <= M; i++) { // M(간선개수) 만큼
        printf("인접한 정점 두 개를 띄어쓰기로 구분하여 입력해주세요");
        scanf_s("%d %d", &x, &y);
        adj[x][y] = 1;
        adj[y][x] = 1; // 인접행렬 만들기
    } 

    // DFS 호출
    DFS(v, N);
    _getch();
    ScreenInit();
    return 0;
}
