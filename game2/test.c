#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	//�����׵�����
	char mine[ROWS][COLS];
	//չʾ������
	char show[ROWS][COLS];
	//��ʼ������
	Initboard(mine, ROWS, COLS, ' ');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	Displayboard(show, ROW, COL);
	//������
	Mentmine(mine, ROW, COL, EASY_COUNT);
	//Displayboard(mine, ROW, COL);//�鿴���ú��׵Ĳ���
	//Displayboard(mine, ROW, COL);//�鿴��һ�βȵ��׵Ĳ���
	Onemine(mine,show, ROW, COL);//��ֹ��һ�βȵ���
	//Displayboard(mine, ROW, COL);//�鿴��һ�βȵ��׺��ײ���ȥ�ĵĲ���
	//����
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
	srand((unsigned int)time(NULL));//����ϵͳʱ����Ϊ�����������
	do
	{
		menu();//�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		while (ch != '\n')//��ջ�����
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
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}