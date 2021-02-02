struct Str
{
	char name[20];
	int avg;
};

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}

int cmp_float(const void* e1, const void* e2)
{
	//直接return的话精度会丢失
	if (*(float*)e1 > *(float*)e2)
		return 1;
	else if (*(float*)e1 < *(float*)e2)
		return -1;
	else
		return 0;
}

int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct Str*)e1)->name,((struct Str*)e2)->name);
}

int cmp_avg(const void* e1, const void* e2)
{
	return ((struct Str*)e1)->avg - ((struct Str*)e2)->avg;
}

void print_int(int* p, int sz)
{
	printf("整型数组排序：");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

void print_float(float* p, int sz)
{
	printf("浮点型数组排序：");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%.1f ", *(p + i));
	}
	printf("\n");
}

void print_name(struct Str* p, int sz)
{
	printf("结构体按名字排序：");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", (p + i)->name);
		printf("%d ", (p + i)->avg);
	}
	printf("\n");
}

void print_avg(struct Str* p, int sz)
{
	printf("结构体按年龄排序：");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", (p + i)->name);
		printf("%d ", (p + i)->avg);
	}
	printf("\n");
}

int main()
{
	int arr1[10] = { 9,2,4,5,7,8,3,1,0,6 };
	float arr2[10] = { 9.0,2.0,4.0,5.0,7.0,8.0,3.0,1.0,0.0,6.0 };
	struct Str arr3[] = { {"zhangsan",20},{"lisi",25},{"wangwu",30} };
	int sz_int = sizeof(arr1) / sizeof(arr1[0]);
	int sz_float = sizeof(arr2) / sizeof(arr2[0]);
	int sz_struct = sizeof(arr3) / sizeof(arr3[0]);
	qsort(arr1, sz_int, sizeof(arr1[0]), cmp_int);
	print_int(arr1, sz_int);
	qsort(arr2, sz_float, sizeof(arr1[0]), cmp_float);
	print_float(arr2, sz_float);
	qsort(arr3, sz_struct, sizeof(arr3[0]), cmp_name);
	print_name(arr3, sz_struct);
	qsort(arr3, sz_struct, sizeof(arr3[0]), cmp_avg);
	print_avg(arr3, sz_struct);

	return 0;
}

//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1) - (*(int*)e2);
//}
//
////交换函数
//void _Swap(char* e1, char* e2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *e1;
//		*e1 = *e2;
//		*e2 = temp;
//		e1++;
//		e2++;
//	}
//}
//
//void my_qsort(void* base, size_t sz, size_t width,int (*cmp)(const void*e1,const void* e2))
//{
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//比较，强制类型转换成char* 加上j*宽度就是跳过对应的类型字节。
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//满足条件则进行交换
//				_Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void print_int(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	//模仿qsort的功能实现一个通用的冒泡排序
//	int arr[10] = { 5,4,6,7,9,3,2,1,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);//需要四个参数，1、需要排序的数组大小。2、数组元素个数。3、元素类型的大小。4、两个元素比较的函数。
//	print_int(arr, sz);//输出
//	return 0;
//}
