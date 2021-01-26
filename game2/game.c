#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ������
void Initboard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	//���������ʼ������
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
//��ӡ����
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
			printf(" %d  ", i);//��ӡ�����к�
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
		printf("%d ", i);//��ӡ�����к�
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

//������
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

int GetMinecont(char board[ROWS][COLS], int x, int y)//ͳ��������Χ�˸������м�����
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

//��������Ƿ��Ѿ��Ź���
//����1���Ź�
//����0��û���Ź�
int Inspcoor(char show [ROWS][COLS], int x, int y)
{
	if (show[x][y] != '*')
	{
		return 1;
	}
	return 0;
}
//չ������
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
		show[x][y] = GetMinecont(mine, x, y) + '0';//�����Χ�ж��ٸ��׵��ַ�
	}
}

//��ֹ��һ�βȵ���
void Onemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	char ch = 0;
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		while (ch != '\n')//��ջ�����
		{
			ch = getchar();
		}
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж�����Ϸ���
		{
			if (mine[x][y] == '1')
			{
				mine[x][y] = ' ';//���ȵ�һ�βȵ���
				Mentmine(mine, row, col, 1);//���ò����׵ĺ������²���һ��
				int count = GetMinecont(mine, x, y);//ͳ��������Χ�˸������м�����
				if (count != 0)
				{
					show[x][y] = count + '0';//�����Χ�ж��ٸ��׵��ַ�
				}
				else
				{
					show[x][y] = ' ';
				}
				system("cls");
				Displayboard(show, ROW, COL);
				break;//����ѭ��
			}
			else//û�ȵ��׵������
			{
				int count = GetMinecont(mine, x, y);//ͳ��������Χ�˸������м�����
				if (count != 0)
				{
					show[x][y] = count + '0';//�����Χ�ж��ٸ��׵��ַ�
				}
				else
				{
					show[x][y] = ' ';
					Openboard(mine, show, x, y);//û�ȵ��������չ������
				}
				system("cls");
				Displayboard(show, ROW, COL);
				break;//����ѭ��
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
}
//�ж���Ӯ
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
//����
void Finemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int flag = 1;
	while (1)
	{
		char ch = 0;
		int x = 0;
		int y = 0;
		printf("������Ҫ�Ų�����꣺");
		scanf("%d%d", &x, &y);
		while (ch != '\n')//��ջ�����
		{
			ch = getchar();
		}
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			
			if (Inspcoor(show, x, y))//��������Ƿ��Ѿ��Ź��׵ĺ�����
			{
				printf("��ǰ�����Ѿ��Ź���,����������!!!\n");
				continue;
			}
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("�ǳ���Ǹ����ȵ�����\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMinecont(mine, x, y);//ͳ��������Χ�˸������м�����
				if (count != 0)
				{
					show[x][y] = count + '0';//�����Χ�ж��ٸ��׵��ַ�
				}
				else
				{
					show[x][y] = ' ';
					Openboard(mine, show, x, y);//û�ȵ��������չ������
				}
				system("cls");
				Displayboard(show, ROW, COL);
				if (Iswin(show, row, col) == EASY_COUNT)//�ж���Ӯ
				{
					system("cls");
					printf("��ϲ��,���׳ɹ�����\n");
					Displayboard(mine, ROW, COL);//���׳ɹ��󣬰��׵Ĳ��ô�ӡ����Ļ��
					break;
				}
			}
		}
		else
		{
			printf("���겻�Ϸ�������������!!!\n");
		}
	}
}