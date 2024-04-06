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
	char mine[ROWS][COLS] = { 0 };//��ŷ��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ�����������λָ������
	//mine ������û�в����׵�ʱ�򣬶���'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show ������û���Ų��׵�ʱ�򣬶���'*'
	InitBoard(show, ROWS, COLS, '*');
	
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	DisplayBoard(show, ROW, COL);

	//�Ų���
	FineMine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}

//�����ɼ��빦��
//1.�Ų鹦��
//2.����չ������
//...