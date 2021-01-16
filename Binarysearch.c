int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(0);//计算数组个数
	int let = 0;//左下标
	int rigt = sz - 1;//右下标
	while (let <= rigt)
	{
		int mid = (let + rigt) / 2;
		if (arr[mid] > k)
		{
			rigt = mid - 1;
		}
		else if (arr[mid] < k)
		{
			let = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);//如果左下标等于右下标并且等于k说明找到了
			break;//找到了就跳出循环
		}
	}
	if (let > rigt)//如果出了循环let大于rigt的话说明没找到
	{
		printf("没找到\n");
	}
	return 0;
}