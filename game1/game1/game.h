#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col); 

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
//1.玩家赢 - '*'
//2.电影赢 - '#'
//3.平局 - 'Q'
//4.继续 - 'C'
char IsWin(char board[ROW][COL], int row, int col);