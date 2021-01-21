int main()
{
	//乘法口诀表
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
}

//void Add(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	//利用函数交换两个值
//	int a = 10;
//	int b = 20;
//	Add(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//#include<stdio.h>
//int is_prime(int year)
//{
//	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
//}

//int main()
//{
//	//利用函数判断是否是闰年
//	int year = 0;
//	int flag = 0;
//	scanf("%d", &year);
//	flag = is_prime(year);
//	if (flag == 1)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//利用函数打印素数
//	int i = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		int flag = is_prime(i);
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int arr[7] = { 0 };
//    int i = 0;
//    int max = 0;//最大值
//    int mix = 0;//最小值
//    int sum = 0;//累计和
//    double ret = 0;//平均值
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//        if (i == 0)
//        {
//            max = arr[0];
//            mix = arr[0];
//            continue;
//        }
//        else if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        if (arr[i] < mix)
//        {
//            mix = arr[i];
//        }
//    }
//    ret = (sum - (max + mix)) / 5.0;
//    printf("%.2lf\n", ret);
//    return 0;
//}

//int main()
//{
//	//有序的数组利用函数进行二分查找
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int ret = binary_search(arr, k, sz );
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
