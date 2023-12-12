#include "헤더들.h";

#define LEFT_CHILD(x)    (2*x + 1)
#define RIGHT_CHILD(x) (2*x + 2)
#define PARENT(x)        ((x-1)/2)
#define SWAP(a,b)  {int t; t = a; a=b; b=t;}//a와 b를 교환
int heap(void)
{
    ScreenRelease();

    int arr[1000];
    int n;
    system("cls");
    gotoxy(200, 20);
    printf("힙정렬\n주어진 배열의 값으로 힙(heap)을 만들어 정렬함\n시간복잡도 : O(nlog(n))\n");
    gotoxy(200, 5);
    printf("배열의 크기를 입력해주세요. 랜덤으로 생성하려면 0을 입력해주세요.: ");
    // Input the size of the array
    printf("배열의 크기를 넣어주세요: ");
    scanf("%d", &n);

    // Input the array elements
    printf("%d번째 배열의 요소를 넣어주세요:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    ViewArr(arr, n);

    HeapSort(arr, n);

    printf("Sorted array:\n");
    ViewArr(arr, n);

    _getch();
    ScreenInit();
    return 0;
}


void HeapSort(int* base, int n)
{
    int on = n;
    printf("초기 힙 생성 과정\n");
    InitHeap(base, n);
    n--;
    SWAP(base[0], base[n]);
    printf("정렬 과정\n");
    while (n > 1)
    {

        MakeHeap(base, n);
        ViewArr(base, n + 1);
        n--;
        SWAP(base[0], base[n]);
    }
    ViewArr(base, n + 1);
}

void InitHeap(int* base, int n)
{
    int pa = 0;
    int now;
    int i;
    for (i = 1; i < n; i++)//순차적으로 힙에 구성
    {
        now = i;
        while (now > 0)//now의 인덱스가 0이 아니면(힙의 루트가 아니면)
        {
            pa = PARENT(now);//부모 인덱스 구함
            if (base[now] > base[pa])//부모보다 더 크면
            {
                SWAP(base[now], base[pa]);//부모와 교환
                now = pa;//인덱스를 부모로 설정
            }
            else//아니면 자리를 찾은 것임
            {
                break;
            }
        }
        ViewArr(base, i + 1);
    }
}


int FindMaxIndex(int* base, int n, int now);
void MakeHeap(int* base, int n)
{
    int now = 0;
    int mp = 0;
    //루트에 있는 요소를 힙 트리에 맞게 자리를 찾는 과정
    while (LEFT_CHILD(now) < n)//왼쪽 자식이 있다면
    {
        int mp = FindMaxIndex(base, n, now);//now와 왼쪽, 오른쪽 자식 중에 큰 값의 위치 찾음
        if (mp == now)//mp와 now가 같으면
        {
            break;//자리를 찾은 것임
        }
        SWAP(base[mp], base[now]);//now와 큰 값의 자리 교환
        now = mp;//큰 값의 위치를 now로 설정
    }
}


int FindMaxIndex(int* base, int n, int now)
{
    int lc = LEFT_CHILD(now);//왼쪽 자식
    int rc = RIGHT_CHILD(now);//오른쪽 자식

    if (rc >= n)//오른쪽 자식이 없을 때
    {
        if (base[now] < base[lc])
        {
            return lc;
        }
        return now;
    }
    if (base[lc] < base[rc])
    {
        return rc;
    }
    return lc;
}
void ViewArr(int* arr, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }
    printf("\n");
}