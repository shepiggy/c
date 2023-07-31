#define _CRT_SECURE_NO_WARNINGS

/*
	实现一个函数，可以左旋字符串中的k个字符（右旋的代码也一样的思路，这里就只写左旋）
	如：ABCD左旋一个字符得到BCDA
	   ABCD左旋两个字符得到CDAB

*/
#include<stdio.h>		/*printf*/
#include<string.h>		/*strlen*/
#include<assert.h>		/*assert*/

/*
	方法一（这种是最简单的）：
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
	方法二：
	比如左旋两个字符：
	我们对abcdef可以这样：ab cdef（左旋两个就从第二个劈开），
	然后分开逆序：bafedc，
	最后整个字符串逆序即cdefab
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
//	assert(arr);//和assert(arr != NULL)一样
//	int len = strlen(arr);
//	
//	assert(k <= len);
//	reverse(arr, arr + k - 1);        //逆序左边
//	reverse(arr + k, arr + len - 1);  //逆序右边
//	reverse(arr, arr + len - 1);      //逆序整体
//}
//int main() {
//	char arr[] = "abcdef";//注意一定是字符数组哦，不能char* p = "abcdef"
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

