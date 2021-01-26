#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	//储存雷的棋盘
	char mine[ROWS][COLS];
	//展示的棋盘
	char show[ROWS][COLS];
	//初始化棋盘
	Initboard(mine, ROWS, COLS, ' ');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘
	Displayboard(show, ROW, COL);
	//布置雷
	Mentmine(mine, ROW, COL, EASY_COUNT);
	//Displayboard(mine, ROW, COL);//查看布置好雷的布局
	//Displayboard(mine, ROW, COL);//查看第一次踩到雷的布局
	Onemine(mine,show, ROW, COL);//防止第一次踩到雷
	//Displayboard(mine, ROW, COL);//查看第一次踩到雷后，雷布置去哪的布局
	//排雷
	Finemine(mine, show, ROW, COL);
	system("pause");
}

void menu()
{
	printf("**************************\n");
	printf("****	  1.play      ****\n");
	printf("****	  0.exit      ****\n");
	printf("**************************\n");
}

int main()
{
	char ch = 0;
	int input = 0;
	srand((unsigned int)time(NULL));//利用系统时间作为随机数的种子
	do
	{
		menu();//菜单
		printf("请选择:>");
		scanf("%d", &input);
		while (ch != '\n')//清空缓存区
		{
			ch = getchar();
		}
		switch (input)
		{
		case 1:
			system("cls");
			game();
			system("cls");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}