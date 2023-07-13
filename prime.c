#define _CRT_SECURE_NO_WARNINGS

/*
	判断素数：（网上一篇文章：判断素数的N种境界）
*/

#include<stdio.h> 
#include<math.h>//用于sqr()

/*
	法一：试除法（存在许多优化）
*/

//int main() {
//	int i = 0, j = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++) {
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//
//		if (j == i) {
//			count++;
//			printf("%d\t%d\n", i, count);
//		}
//	}
//	return 0;
//}


/*
	法二：来自埃拉托色尼的 筛选法
*/

int main() {
	int arr[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		arr[i] = i + 1;
	}
	arr[0] = 0;
	/*
		素数要求是大于1的自然数，且2也不是素数，故arr[0]=1，arr[1]=2可事先“挖了”，即赋值为0，由于数组都初始化为0了，所以上面代码可以这样写：
	*/

	for (int i = 1; i < 100; i++) {//我们直接从arr[1]开始
		arr[i] = i + 1;
	}

	for (int j = 2; j < sqrt(100); j++) {
		for (int i = j + 1; i < 100; i++) {
			if (arr[i] != 0 && arr[i] % j == 0) {
				arr[i] = 0;
			}
		}
	}


	for (int i = 1, n = 0; i < 100; i++) {
		if (arr[i] != 0) {
			printf("%d\t", arr[i]);
			n++;
		}
		if (n == 10) {
			printf("\n");
			n = 0;
		}
	}
	return 0;
}


