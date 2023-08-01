#define _CRT_SECURE_NO_WARNINGS

/*
	给定两个字符串，判断它们是不是由另一个字符串左旋得到的
	如：	AABCD 可以左旋一位得到 ABCDA
		AABCD 不可以左旋得到   abcda
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
	assert(arr);//和assert(arr != NULL)一样
	int len = strlen(arr);

	assert(k <= len);
	reverse(arr, arr + k - 1);        //逆序左边
	reverse(arr + k, arr + len - 1);  //逆序右边
	reverse(arr, arr + len - 1);      //逆序整体
}

/*
	方法一：（这种方法是最简单也是复杂度最高的，它把左旋的所有情况都列举出来了）
*/
//int is_left_move(char* s1, char* s2) {
//	int len = strlen(s1);
//	for (int i = 0; i < len; i++) {
//		left_move(s1, 1);//这里每次页都会修改s1的内容
//		int ret = strcmp(s1, s2);
//		if (ret == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}


/*
	方法二：（其实我们创建一个新的字符串
	（即取任意一个现有的字符串复制两个连在一起构成一个新的字符串，
	由于两个字符串是同一个，因此要用strncat而非strcat（也在string.h中））
	就比如说这里的arr1，创建的新的字符串即abcdefabcdef
	我们会发现，只要是左旋的字符串都会出现在上面的新的字符串中，即是它的子串
	string.h中有一个库函数是在字符串中寻找其子串的库函数，为：strstr）
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
//	//char arr1[] = "abcdef";//方法一
//	char arr1[30] = "abcdef";//方法二需要arr1的长度尽可能长一点
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