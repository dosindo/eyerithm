#include "�����.h";
bool dontgo = false;

int bouble(void) {
	int SIZE = 15;
	dontgo = false;
	int i, j, temp;
	int array[100];
	char text[100];
	int s;
	ScreenRelease();
	system("cls");
	gotoxy(200, 20);
	printf("��������\n�ٷ� ���� ��ҿ� ���Ͽ� �� ū/���� ���� �տ� ��ġ�ϰ��Ͽ� ������\n�ð����⵵ : O(n^2)\n");
	gotoxy(200, 5);
	printf("�迭�� ũ�⸦ �Է����ּ���. �������� �����Ϸ��� 0�� �Է����ּ���.: ");
	scanf_s("%d", &s);
	if (s == 0) {
		initArray(array, 15);
		SIZE = 15;
	}
	else {
		SIZE = s;
		gotoxy(200, 5);
		printf("��Ҹ� �Է����ּ���. (�������� esc�� ������ ��Ҹ� �ϳ� �� �Է����ּ���)\n");
		for (int i = 0; i < SIZE; i++) {
			gotoxy(200, 6 + i);
			printf("%d��° ���: ", i);
			scanf_s("%d", &array[i]);
			if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
				ScreenInit();
				return 0;
			}
		}
	}
	
	printf("����!");
	Sleep(1000);
	ScreenInit();
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - 1 - i; j++) {
			boubleOutput(array, SIZE, j + 1, j);
			if (dontgo) {
				return 1;
			}
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				boubleOutput(array,SIZE,j+1,j);
				if (dontgo) {
					return 1;
				}
			}
		}
	}
	for (i = 0; i < SIZE; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
void boubleOutput(int* ary, int size, int ind1,int ind2) {
	static int sleeptime = 500;
	char text[1000];
	ScreenClear();
	for (int i = 0; i < size; i++)
	{
		sprintf(text, "\033[0;37m%d", ary[i]);
		ScreenPrint(i * 3, 0, text);
	}
	for (int i = 0; i < size; i++)
	{
		if (ind1 == i || ind2==i) {
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
	}
	sprintf(text, "\033[0;37m�������Ϸ��� tap�� �����ֽð�(3������ ����, �����ӵ��� �����Ϸ��� �� ���� ��������) �������� esc�� �����ּ���");
	ScreenPrint(30,20, text);
	if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
		dontgo = true;
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
	fflush(stdin);
	ScreenFlipping();
	Sleep(sleeptime);
}