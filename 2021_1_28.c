//题目：输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
void Order(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (arr[left] % 2 == 1)
		{
			left++;
		}
		while (arr[right] % 2 == 0)
		{
			right--;
		}
		if (left<right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
		left++;
		right--;
	}
}


int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	Order(arr,sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	char* temp=dest;
//	while (*dest++ = *src++);
//	return temp;
//}
//
//int main()
//{
//	//strcpy实现
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit!";
//	printf("%s", my_strcpy(arr1, arr2));
//}

//#include<stdio.h>
//int my_strlen(char* p)
//{
//	//指针减指针的方法
//	char* count = p;
//	while (*p++);
//	return p - count - 1;
//}
//
//int main()
//{
//	//strlen实现
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}

//#include<stdio.h>
//int my_strlen(char* p)
//{
//	//计数器的方法
//	int count = 0;
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	//strlen实现
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}

//#include <stdio.h>
//int main()
//{
//	//死循环
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}