#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ������
void Initboard(char board[ROW][COL],int row,int col )
{
	//���������ʼ���ɿո�
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

//��ӡ����
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

//�������
void PlayMove(char board[ROW][COL], int row, int col)
{
	char ch = 0;
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������Ҫ���������:>");
		scanf("%d%d", &x, &y);
		while (ch != '\n')
		{
			ch = getchar();
		}
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж������Ƿ�Ϸ�
		{
			if (board[x - 1][y - 1] == ' ')//�ж���ʵ�����Ƿ��¹�����
			{
				board[x - 1][y - 1] = '*';
				system("cls");
				break;//���ӳɹ���������ѭ��
			}
			else
			{
				printf("���걻ռ������������!!!\n");
			}
		}
		else
		{
			printf("���겻�Ϸ�������������!!!\n");
		}
		
	}

}

//��������
void CompuMove(char board[ROW][COL], int row, int col)
{
	system("cls");
	printf("������:>");
	while (1)
	{
		int x = rand() % row;//����0-row���������
		int y = rand() % col;//����0-row���������
		if (board[x][y] == ' ' && board[x][y] != '*')
		{
			printf("%d %d\n", x + 1, y + 1);
			board[x][y] = '#';
			break;
		}
	}
}
//�ж�ƽ��
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//�������飬��������пո񣬾�˵����Ϸ���̻�û��
				return 0;
		}
	}
	return 1;//������ߵ��⣬�ͱ�ʾ��������
}


//�ж���Ӯ
//��������״̬
//���Ӯ		--����'*'
//����Ӯ		--����'#'
//ƽ��		--����'Q'
//��Ϸ����	--����'C'
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//������
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][0];
	}
	//������
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[0][i];
	}
	//�Խ��� ����->����
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[1][1];
	//�Խ��� ����->����
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
		return board[1][1];
	//�ж�ƽ��
	if(IsFull(board,ROW,COL)==1)
		return 'Q';
	return 'C';
}