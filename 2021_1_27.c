int main()
{
	//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	if (n <= 0)
	{
		sum = 0;
	}
	else
	{
		sum += n * 2 - 1;
	}
	printf("%d", sum);
}


//int main()
//{
//	//打印菱形
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 7; i++)//上半部分
//	{
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - 1 - i) - 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	//打印菱形
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)//打印上半部分
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <=i; j++)
//		{
//			printf("*");
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)//打印下半部分，下半部分比上半部分少1，所以n-1
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf("*");
//		}
//		for (j = 0; j < n - 2 - i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	//求出0～100000之间的所有“水仙花数”并输出。
//	//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 0;
//		int temp = i;
//		int sum = 0;
//		while (temp)
//		{
//			temp /= 10;
//			n++;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//	//例如：2 + 22 + 222 + 2222 + 22222
//	int a = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		ret = ret*10 + a;
//		if (4 == i)
//			printf("%d=", ret);
//		else
//			printf("%d+", ret);
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}

//#include<string.h>
//#include<stdio.h>
//void Reverse(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[50] = { 0 };
//	gets(arr);
//	int sz = strlen(arr);
//	Reverse(arr, sz);
//	printf("%s", arr);
//	return 0;
//}