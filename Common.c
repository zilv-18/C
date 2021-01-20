int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	scanf("%d%d", &m, &n);
	i = (m > n ? m : n);
	for (; i >= 1; i--)
	{
		if ((m % i == 0) && (n % i == 0))
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int c = 0;
//	int ret = 0;
//	scanf("%d%d", &m, &n);
//	ret = m * n;
//	while (c = m % n)
//	{
//		m = n;
//		n = c;
//	}
//	printf("%d\n", n);
//	printf("%d\n", ret / n);//最小公倍数
//	return 0;
//}