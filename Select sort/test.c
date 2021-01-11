#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define N 10
void Sort(int arr[])
{
	int i = 0;
	int j = 0;
	int index = 0;
	int temp = 0;
	for (i = 0; i < N; i++)
	{
		index = i;//每次进来记录循环的下标
		for (j = i+1; j < N; j++)//每次从i后面的数比较
		{
			if (arr[j] < arr[index])//判断小于记录下标的数
			{
				index = j;//更换下标
			}
		}
		if (i != index)//判断是不是原来的下标，如果不是则进行元素交换
		{
			temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
	}
}
int main()
{
	int arr[N];
	int i = 0;
	for (i = 0; i < N; i++)//输入
	{
		scanf("%d", &arr[i]);
	}
	Sort(arr);//调用排序函数
	for(i=0;i<N;i++)//输出
	{
		printf("%d ",arr[i]);
	}
	return 0;
}