#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include<conio.h>
static int g_nScreenIndex;
static HANDLE g_hScreen[2];

void drawtitle();
void drawmain();
void quickSort(int* dataList, int* ary, int size, int rorl = 0);
void output(int* ary, int size, int pivotind, int li = NULL, int ri = NULL);
void initArray(int* ary, int n);
int quick();
void gotoxy(int x, int y);

int bouble(void);
void boubleOutput(int* ary, int size, int ind1, int ind2);

void selection();
void selectionOutput(int* ary, int size, int ind1, int ind2, int least = NULL);
void selection_sort(int list[], int n);

int insertion();

typedef struct node {
    int x, y;
    int num;
    int havetogox;
    int havetogoy;
    int arrnum;
}node;

void radix();
void radix_sort(node *array, int size);
void gonode(node* ary, int size);
bool checknodemoved(node* ary, int size);
void printarray2(node* array, int size);
void printarray3(node* array, int size);


void ScreenInit();
void ScreenFlipping();
void ScreenClear();
void ScreenRelease();
void ScreenPrint(int x, int y, char* string);


int get(int* queue, int* front, int* rear, int size);
int put(int k, int* queue, int* front, int* rear, int size);
void print_array(node *ary, int size);
void init300(node* ary, int n);

void mergeal();
void merge_sort(int list[], int left, int right);
void merge(int list[], int left, int mid, int right);
void printsq(int x,int y);
void prim();
typedef struct
{
	int start;
	int end;
	int weight;
}edge;

typedef struct
{
	int parent;
	int depth;
}universe;

void krus();

void shell();
void shelloutput(int list[], int n, int gap, int red1 = NULL, int red2 = NULL,int now=NULL);

int heap();
void HeapSort(int* base, int n);
void ViewArr(int* arr, int n);
void InitHeap(int* base, int n);
void MakeHeap(int* base, int n);

int dfsm();
int bfsm();
int topo();

// 그래프 정점 구조체
typedef struct AdjListNode {
    int data;
    struct AdjListNode* next;
} AdjListNode;

// 그래프 구조체
typedef struct {
    int numVertices;
    AdjListNode* adjLists[100];
    int* inDegree; // 각 정점의 진입 차수 저장 배열
} Graph;

// 스택 구조체
typedef struct {
    int* array;
    int top;
} Stack;

int as(void);
int bt();

int backt();
int branch();