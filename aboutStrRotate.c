#define _CRT_SECURE_NO_WARNINGS

/*
	ʵ��һ�����������������ַ����е�k���ַ��������Ĵ���Ҳһ����˼·�������ֻд������
	�磺ABCD����һ���ַ��õ�BCDA
	   ABCD���������ַ��õ�CDAB

*/
#include<stdio.h>		/*printf*/
#include<string.h>		/*strlen*/
#include<assert.h>		/*assert*/

/*
	����һ����������򵥵ģ���
*/
//void left_move(char* arr, int k) {
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);
//	for (int i = 0; i < k; i++) {
//		char temp = *arr;
//		for (int j = 0; j < len - 1; j++) {
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = temp;
//	}
//}

/*
	��������
	�������������ַ���
	���Ƕ�abcdef����������ab cdef�����������ʹӵڶ�����������
	Ȼ��ֿ�����bafedc��
	��������ַ�������cdefab
*/
//void reverse(char* left, char* right) {
//	assert(left != NULL);
//	assert(right != NULL);
//
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k) {
//	assert(arr);//��assert(arr != NULL)һ��
//	int len = strlen(arr);
//	
//	assert(k <= len);
//	reverse(arr, arr + k - 1);        //�������
//	reverse(arr + k, arr + len - 1);  //�����ұ�
//	reverse(arr, arr + len - 1);      //��������
//}
//int main() {
//	char arr[] = "abcdef";//ע��һ�����ַ�����Ŷ������char* p = "abcdef"
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

