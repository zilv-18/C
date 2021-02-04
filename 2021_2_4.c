//int my_strlen(char* pa)
//{
//	//计数器的方法
//	int count = 0;
//	while (*pa++)
//	{
//		count++;
//	}
//	return count;
//}

//int my_strlen(char* pa)
//{
//	//递归的方法
//	if (*pa == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(++pa);
//}

int my_strlen(char* pa)
{
	//指针减指针的方法
	char* ret = pa;
	while (*pa)
	{
		pa++;
	}
	return pa - ret;
}

int main()
{
	//模拟实现strlen
	char arr[] = "hello world";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;//记录初始位置
//	while (*dest++ = *src++);
//	return ret;
//}
//
//int main()
//{
//	//模拟实现strcpy
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//int my_strcmp(const char* dest, const char* src)
//{
//	assert(dest && src);
//	while (*dest == *src)
//	{
//		if (*src == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//	return *dest - *src;
//}
//
//int main()
//{
//	//模拟实现strcmp
//	char arr1[20] = "hello";
//	char arr2[] = "hella";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)//先找到\0的位置
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return ret;
//}
//
//
//int main()
//{
//	//模拟实现strcat
//	char arr1[20] = "hello ";
//	char arr2[] = "bit";
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}

//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	const char* ret = dest;
//	while (*ret)//如果解引用ret值为\0则跳出循环
//	{
//		const char* p1 = ret;//每次循环更新地址
//		const char* p2 = src;//对应失败每次都回到原点
//		while ((*p2) && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)ret;//找到则返回对应的首元素地址
//		}
//		ret++;
//	}
//	return NULL;//循环结束代表没找到
//}
//
//int main()
//{
//	//模拟实现strstr
//	char arr1[20] = "abcdef";
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
