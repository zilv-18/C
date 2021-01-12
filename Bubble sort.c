#include<stdio.h>
#define N 16//定义一个常量
int main()
{
	int arr[N];
	int i = 0;//循环变量
	int j = 0;//循环变量
	int temp = 0;//交换变量
	//输入
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	//排序
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - 1 - i; j++)//每次冒泡排序进行比较的次数是递减的
		{
			//交换
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//输出
	for (i = 0; i < N; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}