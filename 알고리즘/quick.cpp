#include "헤더들.h";
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
	printf("퀵정렬\n어느 한 숫자를 정해서 '피벗'으로 정하고 피벗보다 큰 수/피벗보다 작은 수 그룹으로 나누고 나눈 가운데 숫자와 피벗을 맞바꾸는 작업을 반복해서 정렬한다.\n시간복잡도 : O(nlog(n))\n");
	gotoxy(200, 5);
	printf("배열의 크기를 입력해주세요. 랜덤으로 생성하려면 0을 입력해주세요.: ");
	scanf_s("%d", &s);
	if (s == 0) {
		initArray(dataList, 15);
		SIZE2 = 15;
	}
	else {
		SIZE2 = s;
		gotoxy(200, 5);
		printf("요소를 입력해주세요. (나가려면 esc를 누르고 요소를 하나 더 입력해주세요)\n");
		for (int i = 0; i < SIZE2; i++) {
			gotoxy(200, 6 + i);
			printf("%d번째 요소: ", i);
			scanf_s("%d", &dataList[i]);
			if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
				ScreenInit();
				return 0;
			}
		}
	}

	printf("가자!");
	Sleep(1000);
	ScreenInit();

	output(dataList, SIZE2,0);

	quickSort(dataList, dataList, SIZE2,1); 	/* 퀵 정렬 함수 호출 */
	output(dataList, SIZE2,0);

	Sleep(1000);
	
	printf("엔터를 누르면 종료합니다.");
	_getch();
	
	return 0;
}

void quickSort(int* dataList, int* ary, int size, int rorl)
{
	int pivot, temp;
	int i, j;

	if (size <= 1) return; // 구간값이 1이하이면 sort가 완료된 것 이므로 return

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
	quickSort(dataList, ary, i,rorl=0); 	// 좌측 소구간에 대한 퀵 정렬 재귀 호출
	quickSort(dataList, ary + i + 1, size - i - 1,rorl=size); // 우측 소구간에 대한 퀵 정렬 재귀 호출
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
	sprintf(text, "\033[0;37m빠르게하려면 tap을 눌러주시고(3번까지 가속, 원래속도를 복구하려면 한 번더 누르세요) 나가려면 esc를 눌러주세요");
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