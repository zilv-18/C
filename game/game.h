#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define ROW 3//��
#define COL 3//��

//��������
void Initboard(char arr[ROW][COL], int row, int col);//��ʼ������
void Displayboard(char arr[ROW][COL], int row, int col);//��ӡ����
void PlayMove(char arr[ROW][COL],int row,int col);//����������
void CompuMove(char arr[ROW][COL],int row,int col);//�����������
char Iswin(char arr[ROW][COL], int row, int col);