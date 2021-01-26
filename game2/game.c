#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//初始化棋盘
void Initboard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	//遍历数组初始化棋盘
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}
//打印棋盘
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		if (i == 0)
			printf("   ");
		else
		{
			printf(" %d  ", i);//打印坐标列号
		}
	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		if (0 == i)
		{
			printf("   ");
		}
		else
		{
			printf("--- ");
		}
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印坐标行号
		for (j = 1; j <= col; j++)
		{
			printf("|");
			printf(" %c ", board[i][j]);
		}
		printf("|");
		printf("\n");
		if (i <row)
		{
			printf("  ");	
			for (j = 1; j <=row; j++)
			{
				printf("|");
				printf("---");
			}
			printf("|");
			printf("\n");
		}
	}
	for (i = 0; i <= col; i++)
	{
		if (0 == i)
		{
			printf("   ");
		}
		else
		{
			printf("--- ");
		}
	}
	printf("\n");
}

//布置雷
void Mentmine(char board[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == ' ')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int GetMinecont(char board[ROWS][COLS], int x, int y)//统计坐标周围八个坐标有几个雷
{
	int count = 0;
	if (board[x - 1][y - 1] == '1')
		count++;
	if (board[x - 1][y] == '1')
		count++;
	if (board[x - 1][y + 1]=='1')
		count++;
	if (board[x][y - 1]=='1')
		count++;
	if (board[x][y + 1]=='1')
		count++;
	if (board[x + 1][y - 1]=='1')
		count++;
	if (board[x + 1][y]=='1')
		count++;
	if (board[x + 1][y + 1]=='1')
		count++;
	return count;
}

//检查坐标是否已经排过雷
//返回1则排过
//返回0则没有排过
int Inspcoor(char show [ROWS][COLS], int x, int y)
{
	if (show[x][y] != '*')
	{
		return 1;
	}
	return 0;
}
//展开操作
void Openboard(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//if (show[x][y] == ' ')
	//{
	//	show[x - 1][y - 1] = ' ';
	//	show[x - 1][y] = ' ';
	//	show[x - 1][y + 1] = ' ';
	//	show[x][y - 1] = ' ';
	//	show[x][y + 1] = ' ';
	//	show[x + 1][y - 1] = ' ';
	//	show[x + 1][y] = ' ';
	//	show[x + 1][y + 1] = ' ';
	//}
	if (GetMinecont(mine, x, y)==0)
	{
		show[x][y] = ' ';
		if (x > 0 && x <= ROW && y - 1 > 0 && y - 1 <= COL && show[x][y-1] == '*')
		{
			Openboard(mine, show, x, y - 1);
		}
		if (x - 1 > 0 && x - 1 <= ROW && y > 0 && y <= COL && show[x-1][y] == '*')
		{
			Openboard(mine, show, x-1, y);
		}
		if (x - 1 > 0 && x - 1 <= ROW && y + 1 > 0 && y + 1 <= COL && show[x-1][y + 1] == '*')
		{
			Openboard(mine, show, x - 1, y + 1);
		}
		if (x > 0 && x <= ROW && y - 1 > 0 && y - 1 <= COL && show[x][y - 1] == '*')
		{
			Openboard(mine, show, x, y - 1);
		}
		if (x > 0 && x <= ROW && y + 1 > 0 && y + 1 <= COL && show[x][y + 1] == '*')
		{
			Openboard(mine, show, x, y + 1);
		}
		if (x + 1 > 0 && x + 1 <= ROW && y - 1 > 0 && y - 1 <= COL && show[x+1][y - 1] == '*')
		{
			Openboard(mine, show, x+1, y - 1);
		}
		if (x + 1 > 0 && x + 1 <= ROW && y > 0 && y <= COL && show[x+1][y] == '*')
		{
			Openboard(mine, show, x+1, y);
		}
		if (x+1 > 0 && x+1 <= ROW && y + 1 > 0 && y+1 <= COL &&show[x+1][y+1] == '*')
		{
			Openboard(mine, show, x + 1, y+1);
		}
	}
	else
	{
		show[x][y] = GetMinecont(mine, x, y) + '0';//存放周围有多少个雷的字符
	}
}

//防止第一次踩到雷
void Onemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	char ch = 0;
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		while (ch != '\n')//清空缓存区
		{
			ch = getchar();
		}
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标合法性
		{
			if (mine[x][y] == '1')
			{
				mine[x][y] = ' ';//拯救第一次踩到雷
				Mentmine(mine, row, col, 1);//调用布置雷的函数重新布置一个
				int count = GetMinecont(mine, x, y);//统计坐标周围八个坐标有几个雷
				if (count != 0)
				{
					show[x][y] = count + '0';//存放周围有多少个雷的字符
				}
				else
				{
					show[x][y] = ' ';
				}
				system("cls");
				Displayboard(show, ROW, COL);
				break;//跳出循环
			}
			else//没踩到雷的情况下
			{
				int count = GetMinecont(mine, x, y);//统计坐标周围八个坐标有几个雷
				if (count != 0)
				{
					show[x][y] = count + '0';//存放周围有多少个雷的字符
				}
				else
				{
					show[x][y] = ' ';
					Openboard(mine, show, x, y);//没踩到雷则进行展开操作
				}
				system("cls");
				Displayboard(show, ROW, COL);
				break;//跳出循环
			}
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
	}
}
//判断输赢
int Iswin(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}
//排雷
void Finemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int flag = 1;
	while (1)
	{
		char ch = 0;
		int x = 0;
		int y = 0;
		printf("请输入要排查的坐标：");
		scanf("%d%d", &x, &y);
		while (ch != '\n')//清空缓存区
		{
			ch = getchar();
		}
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			
			if (Inspcoor(show, x, y))//检查坐标是否已经排过雷的函数。
			{
				printf("当前坐标已经排过雷,请重新输入!!!\n");
				continue;
			}
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("非常抱歉，你踩到雷了\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMinecont(mine, x, y);//统计坐标周围八个坐标有几个雷
				if (count != 0)
				{
					show[x][y] = count + '0';//存放周围有多少个雷的字符
				}
				else
				{
					show[x][y] = ' ';
					Openboard(mine, show, x, y);//没踩到雷则进行展开操作
				}
				system("cls");
				Displayboard(show, ROW, COL);
				if (Iswin(show, row, col) == EASY_COUNT)//判断输赢
				{
					system("cls");
					printf("恭喜你,排雷成功！！\n");
					Displayboard(mine, ROW, COL);//排雷成功后，把雷的布置打印在屏幕上
					break;
				}
			}
		}
		else
		{
			printf("坐标不合法，请重新输入!!!\n");
		}
	}
}