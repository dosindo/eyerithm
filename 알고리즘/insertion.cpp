# include "헤더들.h";

void insertionSort(int* arr ,int SIZE) {
    int i, j, key;
    
     
    for (i = 1; i < SIZE; i++) {
        key = arr[i]; // 현재 삽입될 숫자인 i번째 정수를 key 변수로 복사
        boubleOutput(arr, SIZE, i, 100);
        for (j = i - 1; j >= 0 && arr[j] > key; j--) { // key가 더 큰 값일 때까지 
            arr[j + 1] = arr[j]; // 한 칸 뒤로 이동 
			arr[j] = key;
            boubleOutput(arr, SIZE, j+1, j);
        }

        arr[j + 1] = key; // 알맞은 위치에 key 삽입 
        boubleOutput(arr, SIZE, i, 100);
    }
}

int insertion() {
    int SIZE;
    int arr[100];
    int i;
    int s;
    ScreenRelease();
    system("cls");
    gotoxy(200, 20);
    printf("선택정렬\n뒤로 가면서 각 요소에 맞는 위치를 찾아가는 정렬\n시간복잡도 : O(n^2)\n");
    gotoxy(200, 5);
    printf("배열의 크기를 입력해주세요. 랜덤으로 생성하려면 0을 입력해주세요.: ");
    scanf_s("%d", &s);
    if (s == 0) {
        initArray(arr, 15);
        SIZE = 15;
    }
    else {
        SIZE = s;
        gotoxy(200, 5);
        printf("요소를 입력해주세요. (나가려면 esc를 누르고 요소를 하나 더 입력해주세요)\n");
        for (int i = 0; i < SIZE; i++) {
            gotoxy(200, 6 + i);
            printf("%d번째 요소: ", i);
            scanf_s("%d", &arr[i]);
            if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
                ScreenInit();
                return 0;
            }
        }
    }
    printf("가자!");
    Sleep(1000);
    ScreenInit();

    boubleOutput(arr, SIZE,100,100);//인덱스짱큰거로

    insertionSort(arr,SIZE);
    boubleOutput(arr, SIZE, 100, 100);//인덱스짱큰거로

    return 0;
}