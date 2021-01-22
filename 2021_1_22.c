int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}

int main()
{
	//利用递归求n的阶乘
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d", ret);
}

////int	Fib(int n)
////{
////	//递归方式，计算太慢
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}
//int Fib(int n)
//{
//	//循环方式，计算快
//	int a = 1;//前两个数是1
//	int b = 1;//前两个数是1
//	int c = 1;//假设计算的这个数小于2，那c的值就是1
//	while (n > 2)//n>2的情况下进入循环
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;//将计算好的值返回
//}
//
//int main()
//{
//	//求第n个斐波拉契数是多少
//	int n = 0;
//	int ret = 0;
//	printf("请输入你想求第几个斐波拉契数：");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("第%d个斐波拉契数是：%d",n, ret);
//	return 0;
//}