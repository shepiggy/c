#define _CRT_SECURE_NO_WARNINGS

//������cplusplus��1��
/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */


#include<string.h>//strcmp

//int values[] = { 40, 10, 100, 90, 20, 25 };
//
//int compare(const void* a, const void* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//    int n;
//    qsort(values, 6, sizeof(int), compare);
//    for (n = 0; n < 6; n++)
//        printf("%d ", values[n]);
//    return 0;
//}



/*
	qsort�ǿ⺯������������򵥵�ģ��һ�������Ƶ�sort������2��
*/
//int greater(int x, int y) {
//	return (x < y) ? 1 : 0;
//}
//int less(int x, int y) {
//	return (x > y) ? 1 : 0;
//}
//
//void sort(int* a, int size, int(*p)(int, int)) {//һά�������Ԫ�ص�ַ���ξ���int*����ά�������� ����ָ�루һά�������Ԫ�ؾ��ǵ�һ��Ԫ�صĵ�ַ����ά�������ǵ�һ��һά����ĵ�ַ������ĵ�ַ������
//	int i = 0, j = 0;
//	for (i = 0; i < size - 1; i++) {
//		for (j = 0; j < size - 1 - i; j++) {
//			if (p(a[j], a[j + 1])) {//��ܰ��ʾ��Ҳ����д�ɣ�(*p)(a[j], a[j + 1])
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	} 
//}
//
//int main() {
//	int arr[5] = { 4, 3, 0, 9, 5 };
//	//sort(arr, 5, less);
//	sort(arr, 5, greater);
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




/*
	qsort��3��
*/
//int cmp_int(const void* e1, const void* e2) {//ע����constŶ��Դ��Ҳ������const
//	return *(int*)e1 - *(int*)e2;//��������һ�����뷢������ķ���ֵӦ���Ƿ���if����
//}
//void test_int() {
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, size, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int cmp_float(const void* e1, const void* e2) {
//	/*if (*(float*)e1 == *(float*)e2) {
//		return 0;
//	}
//	else if (*(float*)e1 > *(float*)e2) {
//		return 1;
//	}
//	else {
//		return -1;
//	}*/
//	
//	//����������
//	return (int)((*(float*)e1) - *(float*)e2);
//}
//void test_float() {
//	float arr[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, size, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < size; i++) {
//		printf("%f ", arr[i]);
//	}
//}
//
//struct Stu {
//		char name[20];
//		int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2) {
//	return /*-1*/((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test_stu_by_age() {
//	struct Stu s[3] = { {"c", 30}, {"b", 20}, {"a", 10} };
//	int size = sizeof(s) / sizeof(s[0]);
//	qsort(s, size, sizeof(s[0]), cmp_stu_by_age);
//	for (int i = 0; i < size; i++) {
//		printf("%s -> %d\n", s[i].name, s[i].age);
//	}
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2) {
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test_stu_by_name() {
//	struct Stu s[3] = { {"c", 30}, {"b", 20}, {"a", 10} };
//	int size = sizeof(s) / sizeof(s[0]);
//	qsort(s, size, sizeof(s[0]), cmp_stu_by_name);
//	for (int i = 0; i < size; i++) {
//		printf("%s -> %d\n", s[i].name, s[i].age);
//	}
//}
//
//int main() {
//	//test_int();
//	test_float();
//
//	//test_stu_by_age();
//	//test_stu_by_name();
//	return 0;
//}






