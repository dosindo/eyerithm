# include "헤더들.h";
#define INSERT 1
#define CHANGE 2
bool shelldontgo = false;
// gap만큼 떨어진 요소들을 삽입 정렬
// 정렬의 범위는 first에서 last까지
void inc_insertion_sort(int list[], int first, int last, int gap) {
    int i, j, key;
   for (i = first + gap; i <= last; i = i + gap) {
   
      key = list[i]; // 현재 삽입될 숫자인 i번째 정수를 key 변수로 복사

        // 현재 정렬된 배열은 i-gap까지이므로 i-gap번째부터 역순으로 조사한다.
        // j 값은 first 이상이어야 하고
        // key 값보다 정렬된 배열에 있는 값이 크면 j번째를 j+gap번째로 이동
        for (j = i - gap; j >= first && list[j] > key; j = j - gap) {
            list[j + gap] = list[j]; // 레코드를 gap만큼 오른쪽으로 이동
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

// 셸 정렬
void shell_sort(int list[], int n) {
    int i, gap;
    char text[1000];
    
    for (gap = n / 2; gap > 0; gap = gap / 2) {
        if ((gap % 2) == 0)
        {
            gap++; // gap을 홀수로 만든다.
        }
        // 부분 리스트의 개수는 gap과 같다.
        for (i = 0; i < gap; i++) {
            /*
            shelloutput(list, n, gap);
            if (shelldontgo) {
                return;
            }
            */
            // 부분 리스트에 대한 삽입 정렬 수행
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
            sprintf(text, "\033[0;37mGAP에 대해 삽입정렬중입니다.");
            ScreenPrint(20, 0, text);
        }
        if (now == CHANGE) {
            sprintf(text, "\033[0;37m삽입정렬에 따른 교환을 실행했습니다.");
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

    
    sprintf(text, "\033[0;37m빠르게하려면 tap을 눌러주시고(3번까지 가속, 원래속도를 복구하려면 한 번더 누르세요) 나가려면 esc를 눌러주세요");
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
    printf("셸정렬\n삽입정렬을 띄엄띄엄 수행해 정렬함(삽입정렬이 많이 정렬되있는 배열에서 최적의 성능을 내는 것에서 착안)\n시간복잡도 : O(nlog(n))\n");
    gotoxy(200, 5);
    printf("배열의 크기를 입력해주세요. 랜덤으로 생성하려면 0을 입력해주세요.: ");
    scanf_s("%d", &n);
    if (n == 0) {
        initArray(list, 15);
        n = 15;
    }
    else {
        gotoxy(200, 5);
        printf("요소를 입력해주세요. (나가려면 esc를 누르고 요소를 하나 더 입력해주세요)\n");
        for (int i = 0; i < n; i++) {
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
    // 셸 정렬 수행
    shell_sort(list, n);
    if (shelldontgo) {
        return;
    }
    shelloutput(list, n, 1);
    _getch();
}