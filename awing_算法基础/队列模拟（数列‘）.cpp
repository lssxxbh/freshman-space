#define  _CRT_SECURE_NO_WARNINGS 
#include<bits/stdc++.h>
using namespace std;
//队列是一种先进先出（First In First Out）的线性表，简称FIFO。
// 允许插入的一端称为队尾，允许删除的一端称为队头
int que[1000], hh = 0, tt = -1;//hh队头，tt队尾

void insert_que(int x)//队尾插入
{
	que[++tt] = x;
}

void dele_que(int x)//队头删除
{
	hh++;
}