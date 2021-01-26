#pragma once

#include<stdio.h>
#include<stdlib.h>//rand srand
#include<time.h>//time

#define ROW 9	//打印的行
#define COL 9	//打印的列
#define ROWS ROW+2	//真实的行
#define COLS COL+2	//真实的列
#define EASY_COUNT 10//雷
//声明函数
//初始化
void Initboard(char board[ROWS][COLS], int rows, int cols, char ret);
//打印
void Displayboard(char board[ROWS][COLS], int row, int col);
//布置雷
void Mentmine(char board[ROWS][COLS], int row, int col,int count);
//防止第一次踩到雷
void Onemine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
//排雷
void Finemine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
