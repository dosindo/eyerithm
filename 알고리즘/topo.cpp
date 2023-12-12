#define _CRT_SECURE_NO_WARNINGS
#include "�����.h";

#define MAX_VERTEX 20

int vertex[MAX_VERTEX];
int edge2[MAX_VERTEX][MAX_VERTEX];
int inDegree[MAX_VERTEX];
int result[MAX_VERTEX];
int queue2[MAX_VERTEX];
int front2 = -1, rear2 = -1;

void printQueue() {
    printf("ť ����: ");
    for (int i = front2 + 1; i <= rear2; i++) {
        printf("%d ", queue2[i]);
    }
    printf("\n");
}

void printInDegree(int v) {
    printf("���� ���� ����: ");
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
            printf("���� ���� �Ұ���. ����Ŭ ����\n");
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
    printf("\n���� ���: ");
    for (i = 0; i < v; i++)
        printf("%d ", result[i]);
    printf("\n");
}

int topo() {

    ScreenRelease();
    system("cls");
    printf("��������\n���� ����(Topological Sorting)�� ���� �׷���(Directed Graph)�� �� ������ ���⼺�� ���� �������� ����Ǿ� ���� ��, ������ �������� �����ϴ� �۾��̴�. �̶� ������ ������ �׷��� ���� ��� ������ ������ �������� �����.");
    int v, e;
    printf("������ ���� ������ ���� �Է��ϼ���: ");
    scanf("%d %d", &v, &e);
    for (int i = 0; i < e; i++) {
        int src, dest;
        printf("������ �������� ������ �Է��ϼ���: ");
        scanf("%d %d", &src, &dest);
        edge2[src][dest] = 1;
        inDegree[dest]++;
    }
    topologySort(v);
    _getch();
    ScreenInit();
    return 0;
}