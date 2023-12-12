# include "�����.h";

void insertionSort(int* arr ,int SIZE) {
    int i, j, key;
    
     
    for (i = 1; i < SIZE; i++) {
        key = arr[i]; // ���� ���Ե� ������ i��° ������ key ������ ����
        boubleOutput(arr, SIZE, i, 100);
        for (j = i - 1; j >= 0 && arr[j] > key; j--) { // key�� �� ū ���� ������ 
            arr[j + 1] = arr[j]; // �� ĭ �ڷ� �̵� 
			arr[j] = key;
            boubleOutput(arr, SIZE, j+1, j);
        }

        arr[j + 1] = key; // �˸��� ��ġ�� key ���� 
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
    printf("��������\n�ڷ� ���鼭 �� ��ҿ� �´� ��ġ�� ã�ư��� ����\n�ð����⵵ : O(n^2)\n");
    gotoxy(200, 5);
    printf("�迭�� ũ�⸦ �Է����ּ���. �������� �����Ϸ��� 0�� �Է����ּ���.: ");
    scanf_s("%d", &s);
    if (s == 0) {
        initArray(arr, 15);
        SIZE = 15;
    }
    else {
        SIZE = s;
        gotoxy(200, 5);
        printf("��Ҹ� �Է����ּ���. (�������� esc�� ������ ��Ҹ� �ϳ� �� �Է����ּ���)\n");
        for (int i = 0; i < SIZE; i++) {
            gotoxy(200, 6 + i);
            printf("%d��° ���: ", i);
            scanf_s("%d", &arr[i]);
            if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
                ScreenInit();
                return 0;
            }
        }
    }
    printf("����!");
    Sleep(1000);
    ScreenInit();

    boubleOutput(arr, SIZE,100,100);//�ε���¯ū�ŷ�

    insertionSort(arr,SIZE);
    boubleOutput(arr, SIZE, 100, 100);//�ε���¯ū�ŷ�

    return 0;
}