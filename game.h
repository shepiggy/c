
#include<stdio.h>


#include<stdlib.h>//srand
#include<time.h>//time


#define ROW 4
#define COL 4

void InitBoard(char board[ROW][COL], int row, int cow);//虽然是char数组，但是是二维的，也要像int数组传参一样传长度！

void DisplayBOard(char board[ROW][COL], int row, int cow);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

/*
	玩家赢 '*'
	电脑赢 '#'
	平局   'Q'
	继续   'C'

*/
char IsWin(char board[ROW][COL], int row, int col);