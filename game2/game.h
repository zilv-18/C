#pragma once

#include<stdio.h>
#include<stdlib.h>//rand srand
#include<time.h>//time

#define ROW 9	//��ӡ����
#define COL 9	//��ӡ����
#define ROWS ROW+2	//��ʵ����
#define COLS COL+2	//��ʵ����
#define EASY_COUNT 10//��
//��������
//��ʼ��
void Initboard(char board[ROWS][COLS], int rows, int cols, char ret);
//��ӡ
void Displayboard(char board[ROWS][COLS], int row, int col);
//������
void Mentmine(char board[ROWS][COLS], int row, int col,int count);
//��ֹ��һ�βȵ���
void Onemine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
//����
void Finemine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
