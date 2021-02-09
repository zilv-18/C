//#include"stdio.h"
//#include<graphics.h>//图形库头文件
//#include<windows.h>
//#define WIDTH 980   // 宽
//#define HEIGTH 650  //高
//#define STR_SIZE 20     //定义数组长度
//#define STR_NUM 128
//#define STR_WIDTH 15
//struct Rain   // 雨的结构
//{
//	int x;       //数字雨x横向位置
//	int y;       // 数字雨纵坐标y坐标
//	int speed;    //下降速度
//	char str[STR_SIZE];   //数字雨长度
//}rain[STR_NUM];//结构体数组长度
//char CreateCh()   //字符产生函数
//{
//	char temp = 0;
//	int flag = rand() % 3;//0~2随机产生用,0,1,2标记产生的字符是否为大小写字母和数字
//	if (flag == 0)   //如果为0则产生小写字母
//	{
//		temp = rand() % 26 + 'a';
//	}
//	else if (flag == 1)  //如果为1则产生大写字母
//	{
//		temp = rand() % 26 + 'A';
//	}
//	else    //不为0也不为1就产生数字
//	{
//		temp = rand() % 10 + '0';
//	}
//	return temp;
//}
//void GameInit()   //初始化结构体成员列表
//{
//	for (int i = 0; i < STR_NUM; i++)
//	{
//		rain[i].x = i * STR_WIDTH;   //每个x坐标为i* 15
//		rain[i].y = rand() % HEIGTH; //y坐标为随机数相当于数字雨的字符长度
//		rain[i].speed = rand() % 5 + 5;  //下降速度为5~9
//	}
//	for (int i = 0; i < STR_NUM; i++)
//	{
//		for (int j = 0; j < STR_SIZE; j++)
//		{
//			rain[i].str[j] = CreateCh();    // 初始化字符串
//		}
//	}
//}
//void GameDraw()
//{
//	cleardevice();
//	for (int i = 0; i < STR_NUM; i++)
//	{
//		for (int j = 0; j < STR_SIZE; j++)
//		{
//			outtextxy(rain[i].x, rain[i].y - STR_WIDTH * j, rain[i].str[j]);   //给出x与y坐标将对应的字母给输出出来
//			settextcolor(RGB(0, 255 - 13 * j, 0));//颜色由绿慢慢转黑
//		}
//	}
//}
//void Gameplay()
//{
//	for (int i = 0; i < STR_NUM; i++)
//	{
//		rain[i].y += rain[i].speed;  //
//		if (rain[i].y - STR_SIZE * STR_WIDTH > HEIGTH)
//		{
//			rain[i].y = 0;
//		}
//	}
//}
//int main()
//{
//	initgraph(WIDTH, HEIGTH);//宽高传给窗口函数创建一个窗口
//	srand(GetTickCount());
//	GameInit();
//	DWORD t1, t2;
//	t1 = t2 = GetTickCount();
//	while (1)
//	{
//		BeginBatchDraw();
//		GameDraw();
//		if (t2 - t1 > 20)
//		{
//			Gameplay();
//			t1 = t2;
//		}
//		t2 = GetTickCount();
//		EndBatchDraw();
//	}
//
//	getchar();
//	closegraph();
//	return 0;
//
//}