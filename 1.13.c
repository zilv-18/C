int fun()
{
	int a = 1;
	return *(char*)&a;
}
// 指针类型的意义:
//1．指针类型决定了指针解引用操作符能访问几个字节: char*p;*p访问了1个字节，int*p;*p访问4个字节
//2．指针类型决定了指针+1，-1，加的或者减的是几个字节; char*p; p+1,跳过一个字符，int*p; p+1,跳过一个整形-4个字节
int main()
{	
	//返回1，小端
	//返回0，大端
	//返回0，大端
	int ret = 0;
	ret = fun();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}