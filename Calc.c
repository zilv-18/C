void menu()
{
	printf("**********************\n");
	printf("***  1.Add  2.Sub  ***\n");
	printf("***  3.Mul  4.Div  ***\n");
	printf("***     0.exit     ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

//void Calc(int(*p)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		//回调函数的使用
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

int main()
{
	int input = 0;
	do
	{
		//函数指针数组的使用
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		int (*Calc[5])(int, int) = { 0,Add,Sub,Mul,Div };
		if (input >= 1 && input <= 4)
		{
			int x = 0;
			int y = 0;
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			int ret = Calc[input](x, y);
			printf("%d\n", ret);
		}
		else if (input != 0)
		{
			system("cls");
			printf("选择错误，请重新选择\n");
		}
		else
		{
			system("cls");
			printf("退出程序\n");
		}
	} while (input);
	return 0;
}