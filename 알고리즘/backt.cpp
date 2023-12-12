#include"헤더들.h";
#define N 4
int board[N][N];

void printSolution() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n ");
    }
}

int isSafe(int row, int col) {
    int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return 0;
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return 0;
    return 1;
}

int solveNQUtil(int col) {
    if (col >= N)
        return 1;
    for (int i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            board[i][col] = 1;
            printf("Step :\n ");
                printSolution();
            if (solveNQUtil(col + 1))
                return 1;
            board[i][col] = 0; // BACKTRACK
        }
        Sleep(1000);
    }
    return 0;
}

void solveNQ() {
    system("cls");
    if (solveNQUtil(0) == 0) {
        printf("길이 없음");
        return;
    }
    printSolution();
    return;
}

int backt() {
    ScreenRelease();
    printf("백트래킹\n백트래킹은 현재 상태에서 다음상태로 가는 모든 경우의 수를 찾아서 이 모든 경우의수가 더 이상 유망하지 않다고 판단되면 이전의 상태로 돌아가는 알고리즘이다.\n");
    solveNQ();
    _getch();
    ScreenInit();
    return 0;
}
