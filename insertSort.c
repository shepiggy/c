#define _CRT_SECURE_NO_WARNINGS


/*
    代码有点问题
*/


#include<stdio.h>
#define N 10

void selectSort(int* arr, int len);
void insertSort(int* arr, int len, int ins);

//int main() {
//    int arr[N] = { 0 }, i = 0, ins = 0;        //ins : insertion 插入           index : 索引
//    printf("请输入%d个元素\n", N - 1);
//    for (i = 0; i < N - 1; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    //插入排序要求arr是有序的
//    selectSort(arr, N - 1);
//
//    printf("排序后的数组为:\n");
//    for (i = 0; i < N - 1; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    printf("\n请输入要插入的元素:\n");
//    scanf("%d", &ins);
//
//    insertSort(arr, N, ins);
//
//    printf("插入后的顺序为:\n");
//    for (i = 0; i < N; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

void selectSort(int* arr, int len) {
    int i = 0, j = 0, min = 0, temp = 0;         //temp : temporary 临时
    for (i = 0; i < len - 1; i++) {
        min = i;
        for (j = i + 1; j < len; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];        //用min不用j，因为j从上个for循环就已经变成了len了
        arr[min] = temp;
    }
}

void insertSort(int* arr, int len, int ins) {
    int i = 0, index = 0;
    if (ins <= arr[0]) {
        index = 0;
    }
    else {
        for (i = 0; i < len - 1; i++) {
            if (ins >= arr[i] && ins <= arr[i + 1]) {
                index = i + 1;
            }
        }
    }

    for (i = len - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = ins;
}