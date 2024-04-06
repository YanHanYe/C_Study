#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("******* 1.play *******\n");
	printf("******* 0.exit *******\n");
	printf("**********************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放放置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化数组的内容位指定内容
	//mine 数组在没有布置雷的时候，都是'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show 数组在没有排查雷的时候，都是'*'
	InitBoard(show, ROWS, COLS, '*');
	
	//设置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	DisplayBoard(show, ROW, COL);

	//排查雷
	FineMine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}

//后续可加入功能
//1.排查功能
//2.连锁展开功能
//...