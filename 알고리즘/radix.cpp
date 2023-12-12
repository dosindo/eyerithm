
#include "헤더들.h";
int MAX =15;

void print_array(node ary[], int size) {
    char text[100];

    ScreenClear();
    for (int i = 0; i < 10; i++) {
        sprintf(text, "\033[0;37m%d", i);
        ScreenPrint(20, i+15, text);
    }
    for (int i = 0; i < size; i++) {
        sprintf(text, "\033[0;37m%d", ary[i].num);
        ScreenPrint(22+ary[i].x*4, ary[i].y+15, text);
    }
    ScreenFlipping();
    Sleep(500);
    ScreenClear();
}
int queue[1000];
int front, rear;
void radix_sort(node array[], int size) {
    int max = array[0].num;
    int digit = 0;
    int factor = 1;
    int an = 0;
    for (int i = 1; i < size; i++) {
        if (max < array[i].num) max = array[i].num;
    }
    for (int i = max; i > 0; i /= 10) {
        digit++;
    }

    for (int i = 0; i < digit; i++) {
        an = 0;
        for (int j = 0; j < 10; j++) { // 0~9 
            int nodex = 0;
            for (int k = 0; k < size; k++) {
                if ((array[k].num / factor) % 10 == j) {
                    //array[k].havetogox = i;
                    //array[k].havetogoy = nodey++;
                    array[k].x = nodex++;
                    array[k].y = j;
                    array[k].arrnum = an++;
                    put(array[k].num,queue,&front,&rear,MAX+1);
                    print_array(array, size);
                }
                //gonode(array, MAX);
                //print_array(array, size);
            }
        }
        //while (!checknodemoved) {
          //  gonode(array,MAX);
            //print_array(array, size);
        //}
        
        factor *= 10;
        int x = 0;
        //for (int i = 0; i < size; i++) {
          //  int n = queue[i];
            //array[i].num = n;
            //array[i].x = x;
            //x += 1;
            //array[i].y = 13;
        //}
        //x = 0;
        //print_array(array, size-1);
        //Sleep(5000);
        an = 0;
        for (int i = front; i != rear; i++) {
            int n = get(queue, &front, &rear, MAX+1);
            array[i].num = n;
            array[i].arrnum = an++;
            
        }

        //print_array3(array, MAX);
        for (int i = 0; i < MAX; i++) {
            for (int o = 0; o < MAX; o++) {
                if (array[o].arrnum == i) {
                    array[i].x = x;
                    x += 1;
                    array[i].y = 15;
                }
            }
            
        }
        print_array(array, MAX);
        front = rear = 0;
    }
}
void printarray3(node* array, int size) {

}
void printarray2(node *array, int size) {
    ScreenClear();
    for (int i = 0; i < size; i++) {
        char text[100];
        sprintf(text, "%d", array[i].num);
        ScreenPrint(array[i].x*4, array[i].y, text);
    }
    ScreenFlipping();
    Sleep(5000);

}
bool checknodemoved(node* ary, int size) {
    for (int i = 0; i < size; i++) {
        if (ary[i].havetogox != ary[i].x && ary[i].havetogoy != ary[i].y) {
            return false;
        }
    }
    return true;
}
void gonode(node * ary,int size) {          
    for (int i = 0; i < size; i++) {
        if (ary[i].x > ary[i].havetogox) {
            ary[i].x -= 1;
        }
        else if (ary[i].x < ary[i].havetogox) {
            ary[i].x += 1;
        }
        if (ary[i].y > ary[i].havetogoy) {
            ary[i].y -= 1;
        }
        else if (ary[i].y < ary[i].havetogoy) {
            ary[i].y += 1;
        }
    }
}
void radix() {

    node array[1000];
    int s;
    ScreenRelease();
    system("cls");
    gotoxy(200, 20);
    printf("기수정렬\n각 숫자의 1의 자리, 10의 자리, 100의자리 등을 점차 비교하는 정렬\n시간복잡도 : O(nlog(n))\n");
    gotoxy(200, 5);
    printf("배열의 크기를 입력해주세요. 랜덤으로 생성하려면 0을 입력해주세요.: ");
    scanf_s("%d", &s);
    if (s == 0) {
        init300(array, MAX);
        MAX = 15;
    }
    else {
        MAX = s;
        gotoxy(200, 5);
        printf("요소를 입력해주세요. (나가려면 esc를 누르고 요소를 하나 더 입력해주세요)\n");
        for (int i = 0; i < MAX; i++) {
            gotoxy(200, 6 + i);
            printf("%d번째 요소: ", i);
            scanf_s("%d", &array[i].num);
            array[i].x = i;
            array[i].y = 10;
            if ((GetAsyncKeyState(VK_ESCAPE) & 1) != 0) {
                ScreenInit();
                return;
            }
        }
    }

    printf("가자!");
    Sleep(1000);
    ScreenInit();
    
    print_array(array, MAX);
    radix_sort(array, MAX);
    _getch();
}
void init300(node* ary, int n) {
    srand((unsigned int)time(NULL));
    int i = 0;
    bool go;
    while (i < n) {
        go = true;
        int r = rand() % 900 + 1;
        for (int o = 0; o < i; o++) {
            if (ary[o].num == r) {
                go = false;

            }
        }
        if (go) {
            ary[i].num = r;
            ary[i].x = i;
            ary[i].y = 10;
            i++;
        }
    }
}