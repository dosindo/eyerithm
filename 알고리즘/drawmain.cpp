#include "헤더들.h";
#define DEFAULTSCREEN 0
#define SORT 1
#define TREE 2
#define DRAWING 3
void drawtitle() {
    char text[100];
    char title[13][100] = {
        {"\033[0;37m눈으로 보는 알고리즘"},
        {"□□■■■□□□■■□□□□■■■■□□□■■□□■■■■■■□□■■□□■■■■■■■■■□□"},
        {"□■■■■■■□■■□□□■■■■■■□□■■□□□□□□■■□□■■□□□□□□■■□□□□□"},
        {"□■□□□■■□■■□□□■■□□■■□□■■□□□□□□■■□□■■□□□□□■■■■□□□□"},
        {"■■□□□■■□■■□□□■□□□□■□□■■□□■■■■■■□□■■□□□■■■■■■■■□□"},
        {"■■□□□■■□■■■■□■□□□□■□□■■□□■■□□□□□□■■□□■■■■□□■■■■□"},
        {"□■□□□■■□■■□□□■■□□■■□□■■□□■■□□□□□□■■□□□□□□□□□□□□□"},
        {"□■■■■■■□■■□□□■■■■■■□□■■□□■■□□□□□□■■□■■■■■■■■■■■■"},
        {"□□■■■□□□■■□□□□■■■■□□□■■□□■■■■■■■■■■□□□□□□□□□□□□□"},
        {"□□□□□□□□■■□□□□□□□□□□□■■□□□□□□□□□□■■□□□■■■■■■■■□□"},
        {"□□□□□□□□■■□□□□□□□□□□□■■□□□□□□□□□□■■□□□■□□□□□□■□□"},
        {"□□□□□□□□■■□□□□□□□□□□□■■□□□□□□□□□□■■□□□■□□□□□□■□□"},
        {"□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■■■■■■■□□"}
    };
    for (int i = 0; i < 13; i++) {
        sprintf(text, title[i]);
        ScreenPrint(25, i+5, text);
    }
}
void drawmain() { 
    char text[100];
    char gettext;
    int pointy=25;
    int minpointy=25;
    int maxpointy=27;
    int state = DEFAULTSCREEN;
    while (true) {
        ScreenClear();
        drawtitle();
        if (state == DEFAULTSCREEN) {
            sprintf(text, "1. 정렬 알고리즘");
            ScreenPrint(25, 25, text);
            sprintf(text, "2. 그래프,트리 관련 알고리즘");
            ScreenPrint(25, 26, text);
            sprintf(text, "종료");
            ScreenPrint(25, 27, text);
        }
        else if (state == SORT) {
            sprintf(text, "1. 버블 정렬 알고리즘");
            ScreenPrint(25, 25, text);
            sprintf(text, "2. 선택 정렬 알고리즘");
            ScreenPrint(25, 26, text);
            sprintf(text, "3. 삽입 정렬 알고리즘");
            ScreenPrint(25, 27, text);
            sprintf(text, "4. 퀵 정렬 알고리즘");
            ScreenPrint(25, 28, text);
            sprintf(text, "5. 기수 정렬 알고리즘");
            ScreenPrint(25, 29, text);
            sprintf(text, "6. 합병 정렬 알고리즘");
            ScreenPrint(25, 30, text);
            sprintf(text, "7. 힙 정렬 알고리즘");
            ScreenPrint(25, 31, text);
            sprintf(text, "8. 셀 정렬 알고리즘");
            ScreenPrint(25, 32, text);
            sprintf(text, "뒤로가기");
            ScreenPrint(25, 33, text);
        }
        else if (state == TREE) {
            sprintf(text, "1. DFS 알고리즘");
            ScreenPrint(25, 25, text);
            sprintf(text, "2. BFS 알고리즘");
            ScreenPrint(25, 26, text);
            sprintf(text, "3. 크루스칼 알고리즘");
            ScreenPrint(25, 27, text);
            sprintf(text, "4. 프림 알고리즘");
            ScreenPrint(25, 28, text);
            sprintf(text, "5. a* 알고리즘");
            ScreenPrint(25, 29, text);
            sprintf(text, "6. 이진 탐색 트리 알고리즘");
            ScreenPrint(25, 30, text);
            sprintf(text, "7. 위상정렬 알고리즘");
            ScreenPrint(25, 31, text);
            sprintf(text, "8. 백트래킹 알고리즘");
            ScreenPrint(25, 32, text);
            sprintf(text, "9. 상태분기 알고리즘");
            ScreenPrint(25, 33, text);

            sprintf(text, "뒤로가기");
            ScreenPrint(25, 34, text);
        }
        sprintf(text, ">");
        ScreenPrint(24, pointy,text);
        gettext = 0;
        if (_kbhit()) {
            gettext= _getch();
        }
        if (gettext == 80) {
            if (pointy != maxpointy)
                pointy += 1;
            else
                pointy = minpointy;
        }
        else if (gettext == 72) {
            if (pointy != minpointy)
                pointy -= 1;
            else
                pointy = maxpointy;
        }
        if (gettext == 13||gettext==32&&state!=DRAWING) {
            if (state == DEFAULTSCREEN) {
                if (pointy == 25) {
                    state = SORT;
                    maxpointy = 33;
                }
                else if (pointy == 26) {
                    state = TREE;
                    maxpointy = 34;
                }
                else if (pointy == 27) {
                    return;
                }
            }
            else if (state == SORT) {
                if (pointy == 25) {
                    state = DRAWING;
                    bouble();
                    state = SORT;
                }
                else if (pointy == 26) {
                    state = DRAWING;

                    selection();
                    state = SORT;
                }
                else if (pointy == 27)
                {
                    state = DRAWING;
                    insertion();
                    state = SORT;
                }
                else if (pointy == 28) {
                    state = DRAWING;
                    quick();
                    state = SORT;
                }
                else if (pointy == 29) {
                    state = DRAWING;
                    radix();
                    state = SORT;
                }
                else if (pointy == 30) {
                    state = DRAWING;
                    mergeal();
                    state = SORT;
                }
                else if (pointy == 31) {
                    state = DRAWING;
                    heap();
                    state = SORT;
                }
                else if (pointy == 32) {
                    state = DEFAULTSCREEN;
                    shell();
                    state = SORT;

                }
                else if (pointy == 33) {
                    state = DEFAULTSCREEN;
                    maxpointy = 27;
                    
                }
            }
            else if (state == TREE) {
                state = DRAWING;
                if (pointy == 25) {
                    dfsm();
                    state = TREE;
                }
                else if (pointy == 26) {
                    state = DRAWING;
                    bfsm();
                    state = TREE;
                }
                else if (pointy == 27) {
                    state = DRAWING;
                    krus();
                    state = TREE;
                }
                else if (pointy == 28) {
                    state = DRAWING;
                    prim();
                    state = TREE;
                }
                else if (pointy == 29) {
                    state = DRAWING;
                    as();
                    state = TREE;
                }
                else if (pointy == 30) {
                    state = DRAWING;
                    bt;
                    state = TREE;
                }
                else if (pointy == 31) {
                    state = DRAWING;
                    topo();
                    state = TREE;
                }
                else if (pointy == 32) {
                    state = DRAWING;
                    backt();
                    state = TREE;
                }
                else if (pointy == 33) {
                    state = DRAWING;
                    branch();
                    state = TREE;
                }
                else if (pointy == 34) {
                    state = DEFAULTSCREEN;
                    maxpointy = 27;

                }
            }
            pointy = 25;
        }
        ScreenFlipping();
    }
}