#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h> 


void menu() {
	printf("***  1.Add        2.Sub  ***\n");
	printf("***  3.Mul        4.Div  ***\n");
	printf("***        0.exit        ***\n");
}

int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x / y;
}

/*
	（这是最简单的方法）1：
*/
//int main() {
//	int input = 0;
//
//	int x = 0, y = 0;
//	do {
//		menu();
//		printf("请输入：");
//		scanf("%d", &input);
//		
//		switch (input) {
//		case 1:
//			printf("请输入两个操作数：");//上面scanf输入结束要回车，但是并不会读取回车，其会使printf内容回车到下一行，因此printf内不需要'\n'
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));//同上不需要'\n'，后面的'\n'是为了后面的换行
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0://可以看出switch case语句中case后面的数字可以乱序，即可以上面写case 4下面写case 0
//			printf("正在退出……\n");
//			break;
//		default:
//			printf("输入数字不正确，请重新输入：\n");
//			//[break;]
//		}
//	} while (input);
//	printf("退出成功\n");
//
//	return 0;
//}


/*
	（函数指针数组）2：
*/
//int main() {
//	int input = 0;
//	int x = 0, y = 0;
//	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//学习一下这个的放置的妙处，0就对应0（退出），后面的索引也刚好menu中对应
//	do {
//		menu();
//		printf("请输入：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);//温馨提示：(*pfArr[input])(x, y)也是可以的
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("正在退出……\n");
//		}
//		else {
//			printf("输入数字不正确，请重新输入：\n");
//		}
//	} while (input);
//	printf("退出成功\n");
//	return 0;
//}



/*
	（回调函数，在1的基础上修改）3：
*/
void Calc(int (*pf)(int, int)) {
	int x = 0, y = 0;
	printf("请输入两个操作数：");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));//温馨提示：(*pf)(x, y) 也是可以的
}

int main() {
	int input = 0;
	
	
	do {
		menu();
		printf("请输入：");
		scanf("%d", &input);
			
		switch (input) {
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("正在退出……\n");
			break;
		default:
			printf("输入数字不正确，请重新输入：\n");
			//[break;]
		}
	} while (input);
	printf("退出成功\n");
	return 0;
}