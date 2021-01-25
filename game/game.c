#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化棋盘
void Initboard(char board[ROW][COL],int row,int col )
{
	//遍历数组初始化成空格
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

//玩家下棋
void PlayMove(char board[ROW][COL], int row, int col)
{
	char ch = 0;
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入要下棋的坐标:>");
		scanf("%d%d", &x, &y);
		while (ch != '\n')
		{
			ch = getchar();
		}
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标是否合法
		{
			if (board[x - 1][y - 1] == ' ')//判断真实坐标是否被下过棋子
			{
				board[x - 1][y - 1] = '*';
				system("cls");
				break;//下子成功立马跳出循环
			}
			else
			{
				printf("坐标被占用请重新输入!!!\n");
			}
		}
		else
		{
			printf("坐标不合法，请重新输入!!!\n");
		}
		
	}

}

//电脑下棋
void CompuMove(char board[ROW][COL], int row, int col)
{
	system("cls");
	printf("电脑走:>");
	while (1)
	{
		int x = rand() % row;//产生0-row的随机坐标
		int y = rand() % col;//产生0-row的随机坐标
		if (board[x][y] == ' ' && board[x][y] != '*')
		{
			printf("%d %d\n", x + 1, y + 1);
			board[x][y] = '#';
			break;
		}
	}
}
//判断平局
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//遍历数组，如果发现有空格，就说明游戏棋盘还没满
				return 0;
		}
	}
	return 1;//如果能走到这，就表示棋盘满了
}


//判断输赢
//返回四种状态
//玩家赢		--返回'*'
//电脑赢		--返回'#'
//平局		--返回'Q'
//游戏继续	--返回'C'
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//横三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][0];
	}
	//竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[0][i];
	}
	//对角线 左上->右下
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[1][1];
	//对角线 左下->右上
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
		return board[1][1];
	//判断平局
	if(IsFull(board,ROW,COL)==1)
		return 'Q';
	return 'C';
}