#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h> 
int main() {
	/*
	方式一：
	*/

	/*
	char temp = 0, str[10] = {0};
	printf("请输入您想输入的字符串：");
	scanf("%s", str);

	//担心输入的字符串中含空格，导致缓冲区会有空格后的字符（包含空格）
	while ((temp = getchar()) != '\n') {//注意是不等于 '\n'
		;//您如果想看可以使用putchar()查看空格后的字符都是什么（为了便于观察可以putchar('\t')分隔开来）
	}
	//从此缓冲区就空了，可以再一次使用scanf()
	//如果scanf()输入int的话就不需要上面那个while了
	*/


	/*
		方式二：
	*/

	char str2[10] = { 0 };
	printf("请输入您想输入的字符串：");
	scanf("%s", str2);
	printf("\n%s", str2);//这个\n可以没有（因为我们在scanf中输入完成需要回车键，它不仅替我们完成了一次换行而且也会保留在缓冲区）
	
	//putchar(getchar());
	char temp = getchar();
	printf("\t%d", temp);

	scanf("%s", str2);
	printf("\n%s", str2);

	//putchar(getchar());
	temp = getchar();
	printf("\t%d", temp);//如果输入12空格34。则打印结果为

	return 0;
}

//int main() {
//	int a = 9;
//	char c = 0;
//	char str[10] = { 0 };
//
//	/*scanf("%d", &a);//开头的空格都不识别
//	printf("%d", a);*///输出上面定义的int a = 9;
//
//
//	/*scanf(" %c", &c);//开头的空格会识别，所以%c前面有个空格！
//	printf("%d", c);*/
//
//
//	/*scanf("%s", str);//开头的空格都不识别
//	printf("%s", str);*/
//	return 0;
//}