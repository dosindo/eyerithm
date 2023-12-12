#include "헤더들.h";
#define MAXbr 25
#define INF 99999999

int tsp(int c[MAXbr][MAXbr], int tour[MAXbr], int start, int n) {
    int mintour[MAXbr], temp[MAXbr], mincost = INF, ccost, i, j, k;
    if (start == n - 1) {
        return (c[tour[n - 1]][tour[n]] + c[tour[n]][1]);
    }
    for (i = start + 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            temp[j] = tour[j];
        }
        temp[start + 1] = tour[i];
        temp[i] = tour[start + 1];
        if ((c[tour[start]][tour[i]] + (ccost = tsp(c, temp, start + 1, n))) < mincost) {
            mincost = c[tour[start]][tour[i]] + ccost;
            for (k = 1; k <= n; k++) {
                mintour[k] = temp[k];
            }
        }

        // 각 단계에서의 과정 출력
        printf("\n현재 단계: %d\n", i);
        printf("현재 경로: ");
        for (j = 1; j <= n; j++) {
            printf("%d ", temp[j]);
        }
        printf("\n현재 최소 비용: %d\n", mincost);
        Sleep(500);
    }
    for (i = 1; i <= n; i++) {
        tour[i] = mintour[i];
    }
    return mincost;
}

int branch() {
    ScreenRelease();
    system("cls");
    printf("상태분기는 목표 상태를 향해 찾아가는 모든 과정이 상태 공간인데, 이 공간들의 최적의 집합을 찾아가는 방법이다.\n");
    int n, i, j, cost[MAXbr][MAXbr], tour[MAXbr], mintour[MAXbr], mincost;
    printf("정점의 수를 입력해주세요: ");
    scanf("%d", &n);
    printf("인접행렬을 입력해주세요:\n");
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                scanf("%d", &cost[i][j]);
            }
            tour[i] = i;
        }
    mincost = tsp(cost, tour, 1, n);
    printf("최소 비용: %d\n", mincost);
        printf("경로: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", tour[i]);
    }
    printf("1\n");
    Sleep(1000);
    _getch();
        ScreenInit();
    return 0;
}
