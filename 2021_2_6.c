//void* my_memmove(void* dest, void* src, size_t count)
//{
//	void* ret = dest;//保存目的地首元素地址
//	assert(dest && src);
//	if (dest < src)//在内存中数组的元素地址是由低到高的，当目的地在源头左边时，目的地地址一定是小于源头地址的
//	{
//		//从前往后拷贝
//		while (count--)//字节个数为0时则表示全部拷贝完毕
//		{
//			*(char*)dest = *(char*)src;
//			dest=(char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后往前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;//返回目的地首元素地址
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr + 2, arr,16);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

void* my_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;//保留起始位置
	assert(dest && src);//断言不能为NULL
	while (count)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
		count--;
	}
	return ret;
}


int main()
{
	//模拟实现memcoy
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = {0};
	int i = 0;
	my_memcpy(arr2, arr1,sizeof(arr1));
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}