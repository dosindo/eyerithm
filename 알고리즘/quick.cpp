#include "�����.h";
int SIZE2 = 0;
bool dontgoq = false;
int quick()
{
	char text[1000];
	int dataList[1000];
	int s = 0;
	//int startTime, endTime;
	//int SIZE2 = sizeof(dataList) / sizeof(dataList[0]);
	ScreenRelease();
	system("cls");
	gotoxy(200, 20);
	printf("������\n��� �� ���ڸ� ���ؼ� '�ǹ�'���� ���ϰ� �ǹ����� ū ��/�ǹ����� ���� �� �׷����� ������ ���� ��� ���ڿ� �ǹ��� �¹ٲٴ� �۾��� �ݺ��ؼ� �����Ѵ�.\n�ð����⵵ : O(nlog(n))\n");
	gotoxy(200, 5);
	printf("�迭�� ũ�⸦ �Է����ּ���. �������� �����Ϸ��� 0�� �Է����ּ���.: ");
	scanf_s("%d", &s);
	if (s == 0) {
		initArray(dataList, 15);
		SIZE2 = 15;
	}
	else {
		SIZE2 = s;
		gotoxy(200, 5);
		printf("��Ҹ� �Է����ּ���. (�������� esc�� ������ ��Ҹ� �ϳ� �� �Է����ּ���)\n");
		for (int i = 0; i < SIZE2; i++) {
			gotoxy(200, 6 + i);
			printf("%d��° ���: ", i);
			scanf_s("%d", &dataList[i]);
			if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
				ScreenInit();
				return 0;
			}
		}
	}

	printf("����!");
	Sleep(1000);
	ScreenInit();

	output(dataList, SIZE2,0);

	quickSort(dataList, dataList, SIZE2,1); 	/* �� ���� �Լ� ȣ�� */
	output(dataList, SIZE2,0);

	Sleep(1000);
	
	printf("���͸� ������ �����մϴ�.");
	_getch();
	
	return 0;
}

void quickSort(int* dataList, int* ary, int size, int rorl)
{
	int pivot, temp;
	int i, j;

	if (size <= 1) return; // �������� 1�����̸� sort�� �Ϸ�� �� �̹Ƿ� return

	pivot = ary[size - 1];

	i = -1;
	j = size - 1;

	while (1) {
		while (ary[++i] < pivot) {
			output(dataList, SIZE2, size - 1, i + rorl);
			
			if (dontgoq) {
				return;
			}
		}
		while (j > 0 && ary[--j] > pivot) {
			output(dataList, SIZE2, size - 1, i + rorl, j + rorl);
			if (dontgoq) {
				return;
			}
		}
		if (i >= j)
			break;
		temp = ary[i];
		ary[i] = ary[j];
		ary[j] = temp;
		output(dataList, SIZE2, size - 1,i + rorl,j+rorl);
		if (dontgoq) {
			return;
		}
	}
	temp = ary[i];
	ary[i] = ary[size - 1];
	ary[size - 1] = temp;
	output(dataList, SIZE2,size - 1,i + rorl);
	if (dontgoq) {
		return;
	}
	quickSort(dataList, ary, i,rorl=0); 	// ���� �ұ����� ���� �� ���� ��� ȣ��
	quickSort(dataList, ary + i + 1, size - i - 1,rorl=size); // ���� �ұ����� ���� �� ���� ��� ȣ��
}

void output(int* ary, int size,int pivotind,int li, int ri)
{
	static int sleeptime = 500;
	char text[10000];
	char star[2];
	sprintf(star, "*");
	ScreenClear();
	for (int i = 0; i < size; i++)
	{
		sprintf(text, "\033[0;37m%d",ary[i]);
		ScreenPrint(i*3,0,text);
	}
	for (int i = 0; i < size; i++) {
		if (li != NULL || ri != NULL) {
			if (li == i || ri == i) {
				sprintf(text, "\033[0;31m%d", ary[i]);
			}
			else {
				sprintf(text, "\033[0;37m%d", ary[i]);
			}

		}
		else {
			sprintf(text, "\033[0;37m%d", ary[i]);
		}
		if (i == pivotind) {
			sprintf(text, "\033[0;33m%d", ary[i]);
		}
		ScreenPrint(0, i + 1, text);
		for (int o = 0; o < ary[i]; o++) {
			sprintf(text, "%d", o);
			ScreenPrint(o * 3 + 5, i + 1, text);
		}
	}
	sprintf(text, "\033[0;37m%d");
	sprintf(text, "\033[0;37m�������Ϸ��� tap�� �����ֽð�(3������ ����, �����ӵ��� �����Ϸ��� �� ���� ��������) �������� esc�� �����ּ���");
	ScreenPrint(30, 20, text);
	if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
		dontgoq = true;
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


void initArray(int* ary, int n)
{
	srand((unsigned int)time(NULL));
	int i = 0;
	bool go;
	while (i < n) {
		go = true;
		int r = rand() % n + 1;
		for (int o = 0; o < i; o++) {
			if (ary[o] == r) {
				go = false;

			}
		}
		if (go) {
			ary[i] = r;
			i++;
		}
	}
}