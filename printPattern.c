#define _CRT_SECURE_NO_WARNINGS

/*
	��"welcome to bit!!!!!!"Ϊ����
	  "####################"


	  Ҫ�������
	  "w##################!"
	  "we################!!"
	  "wel##############!!!"
	  ����
	  ˼·�����۰���ҷ�������
*/

#include<stdio.h> 
#include<string.h>//����strlen()
#include<windows.h>//����Sleep(1000)
#include<stdlib.h>//����system("cls");

int main() {
	char str1[] = "welcome to bit!!!!!!";
	char str2[] = "####################";

	int left = 0;
	int right = strlen(str1) - 1;//����sizeof(str1) - 2Ҳ���ԣ������һ��1����Ϊsizeof��������'\0'��
	//strlen������string.h��

	while (left <= right) {
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s", str2);

		Sleep(1000);//��Ϣ1�루1000ms = 1s��
		system("cls");//��ӡ��һ�������Ļ����һ�δ�ӡ������ִ�ӡ

		left++;
		right--;
	}
	printf("%s", str2);
	return 0;
}










//int main() {
//	int arr[] = { 1, 2, 3, 4 };
//	char str[] = "abcd";
//
//	printf("%d", sizeof arr);//prinf("%d", sizeof(arr));
//	//printf("\t%d", strlen(arr)); strlen�����ڼ����ַ�����
//
//	printf("\n%d", sizeof(str));
//	printf("\t%d", strlen(str));
//
//	return 0;
//}