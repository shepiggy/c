#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

/*
	使用 goto 实现：
*/
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("您的电脑将在60秒内关机，输入“取消关机”即可关闭\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "取消关机") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}

	return 0;
}

/*
	普通方法：
*/
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1) {
//		printf("您的电脑将在60秒内关机，输入“取消关机”即可关闭\n请输入：");
//		scanf("%s", input);
//		if (strcmp(input, "取消关机") == 0) {
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	return 0;
//}

