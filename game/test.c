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
	//���鴢���Ǹ���ά����
	char board[ROW][COL];
	//�����̳�ʼ���ɿո�
	Initboard(board, ROW, COL);//��game.h������game.c��ʵ��
	//��ӡ����
	Displayboard(board, ROW, COL);//��game.h������game.c��ʵ��
	while (1)
	{
		//�������к���������game.h������game.c��ʵ��
		//�������
		PlayMove(board, ROW, COL);
		//ÿ����һ�����ӣ���ӡһ������
		//Sleep(500);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//�������壬�������
		CompuMove(board, ROW, COL);
		//��������һ�����ӣ���ӡһ������
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
		printf("��һ�ʤ\n");
		Displayboard(board, ROW, COL);
		system("pause");
	}
	else if (ret == '#')
	{
		system("cls");
		printf("���Ի�ʤ\n");
		Displayboard(board, ROW, COL);
		system("pause");
	}
	else
	{
		system("cls");
		printf("ƽ��\n");
		Displayboard(board, ROW, COL);
		system("pause");
	}
}

int main()
{
	srand((unsigned int)time(NULL));//ʹ��ϵͳʱ����Ϊ���ֵ������
	int input = 0;
	char ch = 0;
	do
	{
		system("cls");
		menu();//�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		system("cls");
		while (ch != '\n')
		{
			ch = getchar();
		}
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();//ʵ����Ϸ���̵ĺ���
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while(input);//�����ѡ����Ϊѭ��������
	return 0;
}