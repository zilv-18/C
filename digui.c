int Fib(int n)
{
	//递归的方式
	//n<=2  n=1
	//n>2 n=Fib(n-1)+Fib(n-2)
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

//int Fib(int n)
//{
//	//非递归方式
//	//1 1 2 3 5 8
//	//a b c
//	//  a b c
//	int a = 1;
//	int b = 1;
//	int c = 1;//假设输入的n为<=2的数，
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

int main()
{
	//使用递归和非递归分别实现求第n个斐波那契数
	int n = 0;
	int ret = 0;
	scanf("%d", &n);//输入想求的第n个斐波那契数
	ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

//int my_pow(int n, int k)
//{
//	if (0 == k)//递归终止条件
//	{
//		return 1;//任何非0数的0次方都是1
//	}
//	else
//	{
//		k--;//每次递归k自减一次
//		return n * my_pow(n,k);
//	}
//}
//
//int main()
//{
//	//编写一个函数实现n的k次方，使用递归实现
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = my_pow(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return n%10+ DigitSum(n / 10);
//	}
//}
//
//int main()
//{
//	//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//	unsigned int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	sum = DigitSum(n);
//	printf("%d", sum);
//}

//int my_strlen(char*parr)
//{
//	//递归
//	if (*parr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		parr++;
//		return 1 + my_strlen(parr);
//	}
//}

//int my_strlen(char*parr)
//{
//	//非递归
//	int count = 0;//计数器
//	while (*parr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	//使用递归和非递归的方式实现库函数strlen
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);//传递的是数组首元素地址
//	printf("%d\n", len);
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)//让n小于等于1作为递归的出口
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//
//int Fac(int n)
//{
//	//非递归方法
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	//利用递归求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void fun(int n)
//{
//	if (n<10)//确认n是不是个位数
//		printf("%d ", n);
//	else
//	{
//		fun(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	//利用递归求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d", ret);
//}