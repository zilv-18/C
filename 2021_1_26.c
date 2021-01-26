//#include<stdio.h>
//int main()
//{	
//	//统计二进制中1的个数
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	printf("偶数位：");
//	for (i = 31; i >= 1; i -= 2)//偶数位
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位：");
//	for (i = 30; i >=0; i -= 2)//奇数位
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("全部二进制位：");
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	printf("\n");
//	return 0;
//}

//int Binary(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//#include<stdio.h>
//int main()
//{
//	//统计二进制中1的个数
//	//方法1
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int count = Binary(n);
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	//方法2
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//统计两个数字的二进制有多少个不同
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	c = a ^ b;
//	for (i = 0; i < 32; i++)
//	{
//		if (((c >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
