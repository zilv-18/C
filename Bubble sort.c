#include<stdio.h>
#define N 16//����һ������
int main()
{
	int arr[N];
	int i = 0;//ѭ������
	int j = 0;//ѭ������
	int temp = 0;//��������
	//����
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - 1 - i; j++)//ÿ��ð��������бȽϵĴ����ǵݼ���
		{
			//����
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//���
	for (i = 0; i < N; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}