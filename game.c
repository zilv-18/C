#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>//rand srand
#include<time.h>//time
void menu()
{
	printf("****************************\n");
	printf("****  1.play	0.exit	****\n");
	printf("****************************\n");
}
void game()
{
	//����һ����������û�ȥ��--rand--����һ��α�����
	//��Ϸ�����Ǹ�ѭ������
	int n = 0;
	int input = rand()%100+1;//����һ��1-100�������
	while (1)
	{
		printf("��һ����:>");
		scanf("%d", &n);
		if (n > input)
		{
			printf("�´���\n");
		}
		else if (n < input)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;//�¶��˾�����ѭ��
		}
	}

}
void test()
{
	srand((unsigned int)time(NULL));//����һ��������---����ֵ��Ҫ��һ���޷�������---�ڵ���randǰ��ʹ��srand����һ��������ɵ�������
	//time -- ������ȡϵͳʱ��
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);//�����û�����
		switch(input)
		{
		case 1:
			printf("��������Ϸ��ʼ\n");
			game();//��Ϸʵ��
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);//��Ϸ���ٽ���һ�Σ�����ʹ��do whileѭ��
}
int main()
{
	test();//��Ϸ���
	return 0;
}