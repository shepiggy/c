#define _CRT_SECURE_NO_WARNINGS


/*
    �����е�����
*/


#include<stdio.h>
#define N 10

void selectSort(int* arr, int len);
void insertSort(int* arr, int len, int ins);

//int main() {
//    int arr[N] = { 0 }, i = 0, ins = 0;        //ins : insertion ����           index : ����
//    printf("������%d��Ԫ��\n", N - 1);
//    for (i = 0; i < N - 1; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    //��������Ҫ��arr�������
//    selectSort(arr, N - 1);
//
//    printf("����������Ϊ:\n");
//    for (i = 0; i < N - 1; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    printf("\n������Ҫ�����Ԫ��:\n");
//    scanf("%d", &ins);
//
//    insertSort(arr, N, ins);
//
//    printf("������˳��Ϊ:\n");
//    for (i = 0; i < N; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

void selectSort(int* arr, int len) {
    int i = 0, j = 0, min = 0, temp = 0;         //temp : temporary ��ʱ
    for (i = 0; i < len - 1; i++) {
        min = i;
        for (j = i + 1; j < len; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];        //��min����j����Ϊj���ϸ�forѭ�����Ѿ������len��
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