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
		index = i;//ÿ�ν�����¼ѭ�����±�
		for (j = i+1; j < N; j++)//ÿ�δ�i��������Ƚ�
		{
			if (arr[j] < arr[index])//�ж�С�ڼ�¼�±����
			{
				index = j;//�����±�
			}
		}
		if (i != index)//�ж��ǲ���ԭ�����±꣬������������Ԫ�ؽ���
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
	for (i = 0; i < N; i++)//����
	{
		scanf("%d", &arr[i]);
	}
	Sort(arr);//����������
	for(i=0;i<N;i++)//���
	{
		printf("%d ",arr[i]);
	}
	return 0;
}