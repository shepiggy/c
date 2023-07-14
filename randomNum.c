#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<stdlib.h>//int rand(void);		void srand(unsigned int seed)
#include<time.h>//time_t time(time_t* timer)


void menu();
void game();


int main() {
	int input = 0;
	char ans = 0;
	srand((unsigned int)time(NULL));//注意放的位置！

	do {
		menu();
		printf("请输入：");
		scanf("%d", &input);

		switch (input) {
		case 0:
			printf("确定退出游戏吗？请输入（y->yes）：");
			getchar();//在遇到scanf输入%c，千万注意前面如果有scanf有回车对输入%c有影响！要一个getchar()吸收掉回车！
			scanf("%c", &ans);
			if (ans == 'y') {
				printf("正在退出中……");
			}
			break;
		case 1:
			
			game();
			break;
		default:
			printf("请输入0或1\n");
			//[break]可写可不写
		}

	} while (input || ans != 'y');

	printf("\n退出成功");
	return 0;
}


void menu() {
	printf("*******************************\n");
	printf("***0.exit             1.play***\n");
	printf("*******************************\n");
}

void game() {
	int res = 0;
	/*
		m+rand()%(n-m+1) 生成 [m,n]
	*/
	res = rand() % 100 + 1;//生成 [1, 100]
	//printf("%d\n", res);

	int guess = 0;
	while (1) {
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > res) {
			printf("猜大了\n");
		}
		else if (guess < res) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n");
			break;
		}
	}
}