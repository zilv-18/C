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
	//生成一个随机数让用户去猜--rand--生成一个伪随机数
	//游戏过程是个循环过程
	int n = 0;
	int input = rand()%100+1;//生成一个1-100的随机数
	while (1)
	{
		printf("猜一个数:>");
		scanf("%d", &n);
		if (n > input)
		{
			printf("猜大了\n");
		}
		else if (n < input)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;//猜对了就跳出循环
		}
	}

}
void test()
{
	srand((unsigned int)time(NULL));//设置一个随机起点---返回值需要是一个无符号整型---在调用rand前先使用srand设置一个随机生成的生成器
	//time -- 用来获取系统时间
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);//接受用户输入
		switch(input)
		{
		case 1:
			printf("猜数字游戏开始\n");
			game();//游戏实现
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);//游戏至少进行一次，所以使用do while循环
}
int main()
{
	test();//游戏框架
	return 0;
}