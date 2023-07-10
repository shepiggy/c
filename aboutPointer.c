#include<stdio.h>

int Add(int x, int y); int Sub(int x, int y); int Mul(int x, int y); int Div(int x, int y);

void menu();

int main() {
	int input, x, y;

	//函数指针 数组
	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };

	menu();
	do
	{
		printf("Please select according to the menu:\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("Please enter two numbers to calculate:\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", pfArr[input](x, y));
		}
		else if (input == 0)
		{
			printf("Have left the program.\n");
		}
		else
		{
			printf("The input result is incorrect, please try again.\n");
		}
	} while (input);


	return 0;
}

int Add(int x, int y) { return x + y; }

int Sub(int x, int y) { return x - y; }

int Mul(int x, int y) { return x * y; }

int Div(int x, int y) { return x / y; }

void menu() { printf("\n"); printf("1, Add 2, Sub\n"); printf("3, Mul 4, Div\n"); printf("\n"); }