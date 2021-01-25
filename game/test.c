#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("***   1.play   0.exit  ***\n");
	printf("**************************\n");
}

void game()
{
	int ret = 0;
	//数组储存是个二维数组
	char board[ROW][COL];
	//把棋盘初始化成空格
	Initboard(board, ROW, COL);//在game.h声明，game.c中实现
	//打印棋盘
	Displayboard(board, ROW, COL);//在game.h声明，game.c中实现
	while (1)
	{
		//以下所有函数都在在game.h声明，game.c中实现
		//玩家下棋
		PlayMove(board, ROW, COL);
		//每下完一个棋子，打印一次棋盘
		//Sleep(500);
		Displayboard(board, ROW, COL);
		//判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋，随机下棋
		CompuMove(board, ROW, COL);
		//电脑下完一个棋子，打印一次棋盘
		//Sleep(500);
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		system("cls");
		printf("玩家获胜\n");
		Displayboard(board, ROW, COL);
		system("pause");
	}
	else if (ret == '#')
	{
		system("cls");
		printf("电脑获胜\n");
		Displayboard(board, ROW, COL);
		system("pause");
	}
	else
	{
		system("cls");
		printf("平局\n");
		Displayboard(board, ROW, COL);
		system("pause");
	}
}

int main()
{
	srand((unsigned int)time(NULL));//使用系统时间作为随机值的种子
	int input = 0;
	char ch = 0;
	do
	{
		system("cls");
		menu();//菜单
		printf("请选择:>");
		scanf("%d", &input);
		system("cls");
		while (ch != '\n')
		{
			ch = getchar();
		}
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();//实现游戏过程的函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while(input);//输入的选择作为循环的条件
	return 0;
}