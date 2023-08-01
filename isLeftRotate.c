#define _CRT_SECURE_NO_WARNINGS

/*
	���������ַ������ж������ǲ�������һ���ַ��������õ���
	�磺	AABCD ��������һλ�õ� ABCDA
		AABCD �����������õ�   abcda
*/

#include<stdio.h>		/*printf*/
#include<string.h>		/*strlen  strcmp  strncat*/
#include<assert.h>		/*assert*/

void reverse(char* left, char* right) {
	assert(left != NULL);
	assert(right != NULL);

	while (left < right) {
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

void left_move(char* arr, int k) {
	assert(arr);//��assert(arr != NULL)һ��
	int len = strlen(arr);

	assert(k <= len);
	reverse(arr, arr + k - 1);        //�������
	reverse(arr + k, arr + len - 1);  //�����ұ�
	reverse(arr, arr + len - 1);      //��������
}

/*
	����һ�������ַ��������Ҳ�Ǹ��Ӷ���ߵģ���������������������оٳ����ˣ�
*/
//int is_left_move(char* s1, char* s2) {
//	int len = strlen(s1);
//	for (int i = 0; i < len; i++) {
//		left_move(s1, 1);//����ÿ��ҳ�����޸�s1������
//		int ret = strcmp(s1, s2);
//		if (ret == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}


/*
	������������ʵ���Ǵ���һ���µ��ַ���
	����ȡ����һ�����е��ַ���������������һ�𹹳�һ���µ��ַ�����
	���������ַ�����ͬһ�������Ҫ��strncat����strcat��Ҳ��string.h�У���
	�ͱ���˵�����arr1���������µ��ַ�����abcdefabcdef
	���ǻᷢ�֣�ֻҪ���������ַ������������������µ��ַ����У����������Ӵ�
	string.h����һ���⺯�������ַ�����Ѱ�����Ӵ��Ŀ⺯����Ϊ��strstr��
*/

int is_left_move(char* str1, char* str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2) {
		return 0;
	}
	strncat(str1, str1, 6);
	char* ret = strstr(str1, str2);
	if (ret == NULL) {
		return 0;
	}
	else {
		return 1;
	}
}

//int main() {
//	//char arr1[] = "abcdef";//����һ
//	char arr1[30] = "abcdef";//��������Ҫarr1�ĳ��Ⱦ����ܳ�һ��
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//	return 0;
//}