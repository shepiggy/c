#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h> 
/*
	模仿qsort库函数的一些细节，我们在冒泡函数上做一些修改，让它可以对多种类型进行排序
*/
struct Stu {
	char name[20];
	int age;
};

Swap(char* buf1, char* buf2, int width) {
	for (int i = 0; i < width; i++) {
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int size, int width, int (*cmp)(void* e1, void* e2)) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}



int cmp_int(const void* e1, const void* e2) {
	return *(int*)e1 - *(int*)e2;
}
void test_int() {
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, size, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2) {
	/*if (*(float*)e1 == *(float*)e2) {
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2) {
		return 1;
	}
	else {
		return -1;
	}*/
	
	//或者这样：
	return (int)((*(float*)e1) - *(float*)e2);
}
void test_float() {
	float arr[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, size, sizeof(arr[0]), cmp_float);
	for (int i = 0; i < size; i++) {
		printf("%f ", arr[i]);
	}
}


void test_stu_by_age() {
	//同理
}

void test_stu_by_name() {
	//同理
}


int main() {
	//test_int();
	test_float();
	return 0;
}