#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col); 

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
//1.���Ӯ - '*'
//2.��ӰӮ - '#'
//3.ƽ�� - 'Q'
//4.���� - 'C'
char IsWin(char board[ROW][COL], int row, int col);