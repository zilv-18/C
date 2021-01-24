//int main()
//{
//	//交换数组,数组一样大
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = tmp;
//	}
//	return 0;
//}

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left < right)//左下标小于右下标的时候才进入循环交换
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	Init(arr,sz);//函数init() 初始化数组为全0
//	print(arr, sz);//print()  打印数组的每个元素
//	reverse(arr, sz);//reverse()  函数完成数组元素的逆置。
//}

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)//2个数要进行一趟排序，3个数两趟，以此类推，sz个数sz-1躺排序
//	{
//		int flag = 1;//假设有序
//		for (j = 0; j < sz-1-i; j++)//2个数要进行一次比较，3个数两次，以此类推，sz个数sz-1次比较，每次比较好的那个数就不用比较了，所以-i
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//表示这组数无序，还需要继续排序
//			}
//		}
//		if (flag == 1)//如果flag没被改变，说明这组数字已经有序了，不用继续排序了
//			break;
//	}
//	//打印排序好的数组
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}