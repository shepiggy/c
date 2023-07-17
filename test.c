#define _CRT_SECURE_NO_WARNINGS

 
#include "game.h"

/*
	����
*/

void game() {
	char board[ROW][COL] = { 0 };
	char res = 0;

	InitBoard(board, ROW, COL);

	DisplayBoard(board, ROW, COL);

	while (1) {
		//���������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res != 'C') {
			break;
		}


		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		
		res = IsWin(board, ROW, COL);
		if (res != 'C') {
			break;
		}
	}
	if (res == '*') {
		printf("���Ӯ\n");
	}
	else if (res == '#') {
		printf("����Ӯ\n");
	}
	else {
		printf("ƽ��\n");
	}
}

void menu() {
	printf("***********************\n");
	printf("***1.play     0.exit***\n");
	printf("***********************\n");
}

void test() {
	int input = 0;

	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
}


int main() {
	printf("��ӭʹ�ã�\n");
	printf("���������Ϊ%d * %d\n", ROW, COL);

	test();

	

	return 0;
}