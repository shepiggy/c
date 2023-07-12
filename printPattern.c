#define _CRT_SECURE_NO_WARNINGS

/*
	以"welcome to bit!!!!!!"为例，
	  "####################"


	  要求输出：
	  "w##################!"
	  "we################!!"
	  "wel##############!!!"
	  ……
	  思路：和折半查找法相类似
*/

#include<stdio.h> 
#include<string.h>//用于strlen()
#include<windows.h>//用于Sleep(1000)
#include<stdlib.h>//用于system("cls");

int main() {
	char str1[] = "welcome to bit!!!!!!";
	char str2[] = "####################";

	int left = 0;
	int right = strlen(str1) - 1;//或者sizeof(str1) - 2也可以（多减了一个1是因为sizeof还包括了'\0'）
	//strlen存在于string.h中

	while (left <= right) {
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s", str2);

		Sleep(1000);//休息1秒（1000ms = 1s）
		system("cls");//打印了一次清空屏幕，下一次打印又清空又打印

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
//	//printf("\t%d", strlen(arr)); strlen是用于计算字符串的
//
//	printf("\n%d", sizeof(str));
//	printf("\t%d", strlen(str));
//
//	return 0;
//}