#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h> 
//int main() {
//
//	/*
//		方法一：
//	*/
//	int result = 1;
//	int sum = 0;
//	
//	int f = 0;
//	printf("请输入想计算的阶乘：");
//	scanf("%d", &f);
//
//	int n = 1;
//	for (n = 1; n <= f; n++) {
//		result = 1;
//		for (int i = 1; i <= n; i++) {
//				result *= i;
//		}
//		//printf("\n%d\n", result);
//		sum += result;
//	}
//	
//	//printf("%d! = %d", f, result);
//
//	for (int i = 1; i < f; i++) {
//		printf("%d! + ", i);
//	}
//	printf("%d! = %d", f, sum);
//
//	return 0;
//}

/*
	方法二：
*/
int main() {
	int i = 0;
	int f = 0;
	int res = 1, sum = 0;

	printf("请输入想计算的阶乘：");
	scanf("%d", &f);

	for (i = 1; i <= f; i++) {
		res *= i;
		sum += res;
	}

	for (int i = 1; i < f; i++) {
		printf("%d! + ", i);
	}		
	printf("%d! = %d", f, sum);
		 
	return 0;
}