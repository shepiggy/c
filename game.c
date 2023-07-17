#define _CRT_SECURE_NO_WARNINGS



#include "game.h"


void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}



void DisplayBoard(char board[ROW][COL], int row, int col) {
	/*int i = 0;
	for (i = 0; i < row; i++) {
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1) {
			printf("---|---|---\n");
		}
		
	}*/
	/*
	上面不够好，应该这样写：
	*/
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
				
			}
			printf("\n");
		}
		
	}
}








void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	
	printf("玩家走：\n");
	while (1) {
		printf("请输入要下的坐标：");
		scanf("%d%d", &x, &y);//"%d %d也行

		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该位置已经有棋子了，请重新输入：\n");
			}
		}
		else {
			printf("坐标越界，请重新输入：\n");
		}
	}
}






void ComputerMove(char board[ROW][COL], int row, int col) {
	printf("电脑走：\n");
	int x = 0, y = 0;

	while (1) {
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}



//1 棋盘满了
int IsFull(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}





char IsWin(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;

	
	//int exit1 = 0;
	//横
	for (i = 0; i < row; i++) {
		/*for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				exit1 = 1;
				break;
			}
		}
		if (exit1) {
			break;
		}*/
		int flag1 = 1;
		for (j = 0; j < col - 1; j++) {
			if (board[i][j] != board[i][j + 1]) {
				flag1 = 0;
				break;
			}
		}
		if (flag1 && board[i][1] != ' ') {
			return board[i][1];
		}
	}



	//竖
	for (i = 0; i < col; i++) {

	
		int flag2 = 1;


		for (j = 0; j < row - 1; j++) {
			if (board[j][i] != board[j + 1][i]) {
				flag2 = 0;
				break;
			}
		}
		if (flag2 && board[1][i] != ' ') {
			return board[1][i];
		}
	}

	int flag3 = 1;

	//'\'
	
	for (i = 0, j = 0; i < row - 1 && j < col - 1; i++, j++) {
		if (board[i][j] != board[i + 1][j + 1]) {
			flag3 = 0;
			break;
		}
	}


	if (flag3 && board[1][1] != ' ') {
		return board[1][1];
	}

	int flag4 = 1;

	//'/'
	for (i = 0, j = col - 1; i < row - 1 && j > 0; i++, j--) {
		if (board[i][j] != board[i + 1][j - 1]) {
			flag4 = 0;
			break;
		}
	}
	if (flag4 && board[0][ROW - 1] != ' ') {
		return board[0][ROW - 1];
	}
	
	if (IsFull(board, ROW, COL)) {
		return 'Q';
	}

	return 'C';

}