#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<stdlib.h>//int rand(void);		void srand(unsigned int seed)
#include<time.h>//time_t time(time_t* timer)


void menu();
void game();


int main() {
	int input = 0;
	char ans = 0;
	srand((unsigned int)time(NULL));//ע��ŵ�λ�ã�

	do {
		menu();
		printf("�����룺");
		scanf("%d", &input);

		switch (input) {
		case 0:
			printf("ȷ���˳���Ϸ�������루y->yes����");
			getchar();//������scanf����%c��ǧ��ע��ǰ�������scanf�лس�������%c��Ӱ�죡Ҫһ��getchar()���յ��س���
			scanf("%c", &ans);
			if (ans == 'y') {
				printf("�����˳��С���");
			}
			break;
		case 1:
			
			game();
			break;
		default:
			printf("������0��1\n");
			//[break]��д�ɲ�д
		}

	} while (input || ans != 'y');

	printf("\n�˳��ɹ�");
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
		m+rand()%(n-m+1) ���� [m,n]
	*/
	res = rand() % 100 + 1;//���� [1, 100]
	//printf("%d\n", res);

	int guess = 0;
	while (1) {
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > res) {
			printf("�´���\n");
		}
		else if (guess < res) {
			printf("��С��\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	}
}