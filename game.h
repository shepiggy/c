
#include<stdio.h>


#include<stdlib.h>//srand
#include<time.h>//time


#define ROW 4
#define COL 4

void InitBoard(char board[ROW][COL], int row, int cow);//��Ȼ��char���飬�����Ƕ�ά�ģ�ҲҪ��int���鴫��һ�������ȣ�

void DisplayBOard(char board[ROW][COL], int row, int cow);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

/*
	���Ӯ '*'
	����Ӯ '#'
	ƽ��   'Q'
	����   'C'

*/
char IsWin(char board[ROW][COL], int row, int col);