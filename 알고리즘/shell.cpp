# include "�����.h";
#define INSERT 1
#define CHANGE 2
bool shelldontgo = false;
// gap��ŭ ������ ��ҵ��� ���� ����
// ������ ������ first���� last����
void inc_insertion_sort(int list[], int first, int last, int gap) {
    int i, j, key;
   for (i = first + gap; i <= last; i = i + gap) {
   
      key = list[i]; // ���� ���Ե� ������ i��° ������ key ������ ����

        // ���� ���ĵ� �迭�� i-gap�����̹Ƿ� i-gap��°���� �������� �����Ѵ�.
        // j ���� first �̻��̾�� �ϰ�
        // key ������ ���ĵ� �迭�� �ִ� ���� ũ�� j��°�� j+gap��°�� �̵�
        for (j = i - gap; j >= first && list[j] > key; j = j - gap) {
            list[j + gap] = list[j]; // ���ڵ带 gap��ŭ ���������� �̵�
            shelloutput(list, last + 1, gap, i,j+gap,INSERT);
            if (shelldontgo) {
                return;
            }
        }

        list[j + gap] = key;                                                                                                                                                                            
        shelloutput(list, last+1, gap,i,j+gap,CHANGE);
        if (shelldontgo) {
            return;
        }
    }
}

// �� ����
void shell_sort(int list[], int n) {
    int i, gap;
    char text[1000];
    
    for (gap = n / 2; gap > 0; gap = gap / 2) {
        if ((gap % 2) == 0)
        {
            gap++; // gap�� Ȧ���� �����.
        }
        // �κ� ����Ʈ�� ������ gap�� ����.
        for (i = 0; i < gap; i++) {
            /*
            shelloutput(list, n, gap);
            if (shelldontgo) {
                return;
            }
            */
            // �κ� ����Ʈ�� ���� ���� ���� ����
            inc_insertion_sort(list, i, n - 1, gap);
            if (shelldontgo) {
                return;
            }
        }
    }
}
void shelloutput(int list[], int n, int gap,int red1, int red2,int now) {
    char text[1000];
    int y = 5;
    static int sleeptime = 500;
    ScreenClear();
    if (now != NULL) {
        if (now == INSERT) {
            sprintf(text, "\033[0;37mGAP�� ���� �����������Դϴ�.");
            ScreenPrint(20, 0, text);
        }
        if (now == CHANGE) {
            sprintf(text, "\033[0;37m�������Ŀ� ���� ��ȯ�� �����߽��ϴ�.");
            ScreenPrint(20, 0, text);
        }
    }
    for (int i = 0; i < n; i++) {
        y += 1;
        if (red1 != NULL || red2 != NULL) {
            if (red1 == i || red2 == i) {
                sprintf(text, "\033[0;31m%d", list[i]);
            }
            else {
                sprintf(text, "\033[0;37m%d", list[i]);
            }
        }
        else {
            sprintf(text, "\033[0;37m%d", list[i]);
            
        }
        ScreenPrint(20 + i + i * 4, 10 + y, text);
        if ((i+1)% gap==0) {
            y = 5;
        }
    }

    
    sprintf(text, "\033[0;37m�������Ϸ��� tap�� �����ֽð�(3������ ����, �����ӵ��� �����Ϸ��� �� ���� ��������) �������� esc�� �����ּ���");
    ScreenPrint(30, 30, text);
    if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
        shelldontgo = true;
    }
    if ((GetAsyncKeyState(VK_TAB) & 1) != 0) {
        if (sleeptime == 500) {
            sleeptime = 100;
        }
        else if (sleeptime == 100) {
            sleeptime = 50;
        }
        else if (sleeptime == 50) {
            sleeptime = 10;
        }
        else if (sleeptime == 10) {
            sleeptime = 500;
        }

    }
    ScreenFlipping();
    Sleep(sleeptime);
}
void shell() {
    
    int i;
    int n;
    int list[100];
    char text[1000];
    ScreenRelease();
    system("cls");
    gotoxy(200, 20);
    printf("������\n���������� ������ ������ ������(���������� ���� ���ĵ��ִ� �迭���� ������ ������ ���� �Ϳ��� ����)\n�ð����⵵ : O(nlog(n))\n");
    gotoxy(200, 5);
    printf("�迭�� ũ�⸦ �Է����ּ���. �������� �����Ϸ��� 0�� �Է����ּ���.: ");
    scanf_s("%d", &n);
    if (n == 0) {
        initArray(list, 15);
        n = 15;
    }
    else {
        gotoxy(200, 5);
        printf("��Ҹ� �Է����ּ���. (�������� esc�� ������ ��Ҹ� �ϳ� �� �Է����ּ���)\n");
        for (int i = 0; i < n; i++) {
            gotoxy(200, 6 + i);
            printf("%d��° ���: ", i);
            scanf_s("%d", &list[i]);
            if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
                ScreenInit();
                return;
            }
        }
    }
    printf("����!");
    Sleep(1000);
    ScreenInit();
    // �� ���� ����
    shell_sort(list, n);
    if (shelldontgo) {
        return;
    }
    shelloutput(list, n, 1);
    _getch();
}