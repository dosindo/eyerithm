#include "�����.h";
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

        // �� �ܰ迡���� ���� ���
        printf("\n���� �ܰ�: %d\n", i);
        printf("���� ���: ");
        for (j = 1; j <= n; j++) {
            printf("%d ", temp[j]);
        }
        printf("\n���� �ּ� ���: %d\n", mincost);
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
    printf("���ºб�� ��ǥ ���¸� ���� ã�ư��� ��� ������ ���� �����ε�, �� �������� ������ ������ ã�ư��� ����̴�.\n");
    int n, i, j, cost[MAXbr][MAXbr], tour[MAXbr], mintour[MAXbr], mincost;
    printf("������ ���� �Է����ּ���: ");
    scanf("%d", &n);
    printf("��������� �Է����ּ���:\n");
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                scanf("%d", &cost[i][j]);
            }
            tour[i] = i;
        }
    mincost = tsp(cost, tour, 1, n);
    printf("�ּ� ���: %d\n", mincost);
        printf("���: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", tour[i]);
    }
    printf("1\n");
    Sleep(1000);
    _getch();
        ScreenInit();
    return 0;
}
