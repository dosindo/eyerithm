
#include "Çì´õµé.h";
#include <assert.h>
int put(int k, int* queue, int* front, int* rear, int size) {
    if ((*rear + 1) % size == *front) {
        printf("QUEUE OVER FLOW!\n\n");
        assert(true);
        return -1;
    }
    else {
        queue[*rear] = k;
        *rear = ++(*rear) % size;
        return 1;
    }
}

int get(int* queue, int* front, int* rear, int size) {
    int k;
    if (*front == *rear) {
        printf("QUEUE UNDER FLOW!\n\n");
        assert(true);
        return -1;
    }
    else {
        k = queue[*front];
        *front = ++(*front) % size;
        return k;
    }
}