#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define ROW 3//行
#define COL 3//列

//声明函数
void Initboard(char arr[ROW][COL], int row, int col);//初始化棋盘
void Displayboard(char arr[ROW][COL], int row, int col);//打印棋盘
void PlayMove(char arr[ROW][COL],int row,int col);//玩家下棋过程
void CompuMove(char arr[ROW][COL],int row,int col);//电脑下棋过程
char Iswin(char arr[ROW][COL], int row, int col);