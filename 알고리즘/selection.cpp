# include "헤더들.h";
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
	printf("선택정렬\n가장 작은/큰 값을 맨 앞에 위치하게 하는 정렬\n시간복잡도 : O(n^2)\n");
	gotoxy(200, 5);
	printf("배열의 크기를 입력해주세요. 랜덤으로 생성하려면 0을 입력해주세요.: ");
	scanf_s("%d", &s);
	if (s == 0) {
		initArray(list, 15);
		SIZEs = 15;
	}
	else {
		SIZEs = s;
		gotoxy(200, 5);
		printf("요소를 입력해주세요. (나가려면 esc를 누르고 요소를 하나 더 입력해주세요)\n");
		for (int i = 0; i < SIZEs; i++) {
			gotoxy(200, 6 + i);
			printf("%d번째 요소: ", i);
			scanf_s("%d", &list[i]);
			if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
				ScreenInit();
				return;
			}
		}
	}

	printf("가자!");
	Sleep(1000);
	
	ScreenInit();
    // 선택 정렬 수행
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
				sprintf(text, "가장 작은 수 : \033[0;31m%d", ary[least]);
				ScreenPrint(50, 10, text);
			}
			else {
				sprintf(text, "맨 처음");
				ScreenPrint(50, 10, text);
			}
		}
		sprintf(text, "\033[0;37m빠르게하려면 tap을 눌러주시고(3번까지 가속, 원래속도를 복구하려면 한 번더 누르세요) 나가려면 esc를 눌러주세요");
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
// 선택 정렬
void selection_sort(int list[], int n) {
    int i, j, least, temp;

    // 마지막 숫자는 자동으로 정렬되기 때문에 (숫자 개수-1) 만큼 반복한다.
    for (i = 0; i < n - 1; i++) {
        least = i;

        // 최솟값을 탐색한다.
        for (j = i + 1; j < n; j++) {
			selectionOutput(list, SIZEs, i, j,least);
			if (dontgo2) {
				return;
			}
            if (list[j] < list[least])
                least = j;
        }
		
        // 최솟값이 자기 자신이면 자료 이동을 하지 않는다.
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