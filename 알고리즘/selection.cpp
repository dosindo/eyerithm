# include "�����.h";
# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )
int SIZEs = 15;
bool dontgo2 = false;
void selection() {
    int i;
    int list[100];
	int s = 0;
	ScreenRelease();
	system("cls");
	gotoxy(200, 20);
	printf("��������\n���� ����/ū ���� �� �տ� ��ġ�ϰ� �ϴ� ����\n�ð����⵵ : O(n^2)\n");
	gotoxy(200, 5);
	printf("�迭�� ũ�⸦ �Է����ּ���. �������� �����Ϸ��� 0�� �Է����ּ���.: ");
	scanf_s("%d", &s);
	if (s == 0) {
		initArray(list, 15);
		SIZEs = 15;
	}
	else {
		SIZEs = s;
		gotoxy(200, 5);
		printf("��Ҹ� �Է����ּ���. (�������� esc�� ������ ��Ҹ� �ϳ� �� �Է����ּ���)\n");
		for (int i = 0; i < SIZEs; i++) {
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
    // ���� ���� ����
    selection_sort(list, SIZEs);
	_getch();
	return;
}
void selectionOutput(int* ary, int size, int ind1, int ind2,  int least) {
		dontgo2 = false;
		char text[10000];
		static int sleeptime = 500;
		ScreenClear();
		for (int i = 0; i < size; i++)
		{
			sprintf(text, "\033[0;37m%d", ary[i]);
			ScreenPrint(i * 3, 0, text);
		}
		for (int i = 0; i < size; i++)
		{
			if (ind1 == i || ind2 == i) {
				sprintf(text, "\033[0;31m%d", ary[i]);
			}
			else {
				sprintf(text, "\033[0;37m%d", ary[i]);
			}

			ScreenPrint(0, i + 1, text);
			
			for (int o = 0; o < ary[i]; o++) {
				sprintf(text, "%d", o);
				ScreenPrint(o * 3 + 5, i + 1, text);
			}
			if (least != NULL) {
				sprintf(text, "���� ���� �� : \033[0;31m%d", ary[least]);
				ScreenPrint(50, 10, text);
			}
			else {
				sprintf(text, "�� ó��");
				ScreenPrint(50, 10, text);
			}
		}
		sprintf(text, "\033[0;37m�������Ϸ��� tap�� �����ֽð�(3������ ����, �����ӵ��� �����Ϸ��� �� ���� ��������) �������� esc�� �����ּ���");
		ScreenPrint(30, 20, text);
		if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
			dontgo2 = true;
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
// ���� ����
void selection_sort(int list[], int n) {
    int i, j, least, temp;

    // ������ ���ڴ� �ڵ����� ���ĵǱ� ������ (���� ����-1) ��ŭ �ݺ��Ѵ�.
    for (i = 0; i < n - 1; i++) {
        least = i;

        // �ּڰ��� Ž���Ѵ�.
        for (j = i + 1; j < n; j++) {
			selectionOutput(list, SIZEs, i, j,least);
			if (dontgo2) {
				return;
			}
            if (list[j] < list[least])
                least = j;
        }
		
        // �ּڰ��� �ڱ� �ڽ��̸� �ڷ� �̵��� ���� �ʴ´�.
        if (i != least) {
            SWAP(list[i], list[least], temp);
			selectionOutput(list, SIZEs, i, j,least);
			if (dontgo2) {
				return;
			}
        }
    }
	while(1) {
		if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
			return;
		}
	}
}