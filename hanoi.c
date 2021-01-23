int count = 0;

void move(int n,char a, char c)
{
	printf("%c柱上的第%d个盘子：%c-->%c\n",a,n, a, c);
	count++;
}

void hanoi(int n,char a,char b,char c)
{
	if (n == 1)
	{
		move(n, a, c);//假设最后一个盘子，直接移到终点去
	}
	else
	{
		hanoi(n - 1, a, c, b);//借助c柱把a柱上的n-1个盘子移到b柱上去
		move(n, a, c);//把a柱上的最后一个移到c柱子上去
		hanoi(n - 1, b, a, c);//借助a柱把b柱上的n-1个盘子移到c柱上去
	}
}

int main()
{
	int n = 0;//盘子
	char a = 'A';//起点柱
	char b = 'B';//中间柱
	char c = 'C';//终点柱
	scanf("%d", &n);
	hanoi(n, a, b, c);//实现盘子移动的操作过程
	printf("%d个盘子总共要移动：%d次",n, count);
	return 0;
}