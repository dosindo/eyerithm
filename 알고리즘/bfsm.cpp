#include "�����.h";

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

    printf("BFS ���� (���� ����: %d)\n", start);

    while (q.front < q.rear) {
        here = q.data[++q.front];
        printf("���� %d�� �湮�߽��ϴ�.\n", here);

        for (int i = 1; i <= N; i++) {
            if (adj2[here][i]) {
                there = i;
                if (!discovered[there]) {
                    discovered[there] = 1;
                    q.data[++q.rear] = there;
                }
            }
        }

        // �������� ���
        printf("ť: ");
        for (int i = q.front + 1; i <= q.rear; i++) {
            printf("%d ", q.data[i]);
        }
        printf("\n\n");
    }

    printf("BFS ����\n");
    printf("�湮�� ���� ����: ");
    for (int i = 0; i <= q.rear; i++) {
        printf("%d ", q.data[i]);
    }
    printf("\n");
}

int bfsm() {
    ScreenRelease();
    printf("�ʺ�Ž��\n���� ��忡�� ����Ͽ� ������ ��� ��带 ���� Ž���ϰ�, �� ���Ŀ� �� ������ ������ ������ ��带 ���ʷ� Ž���ϴ� �˰���\n");
    int N, M, v;
    int x, y;

    printf("��������, ��������, ���������� ����� �����Ͽ� �Է��Ͻÿ�: ");
    scanf_s("%d %d %d", &N, &M, &v);

    for (int i = 1; i <= M; i++) {
        printf("������ ���� �� ���� ����� �����Ͽ� �Է����ּ���: ");
        scanf_s("%d %d", &x, &y);
        adj2[x][y] = 1;
        adj2[y][x] = 1;
    }

    BFS(v, N);
    _getch();
    ScreenInit();
    return 0;
}
