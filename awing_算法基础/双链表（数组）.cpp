#define  _CRT_SECURE_NO_WARNINGS 
#include<bits/stdc++.h>

typedef long long int ll;
#define M 1000

int l[M], r[M],q[M],idx;
//同单链表，但l表示左节点位置，r表示右节点位置

void init()
{
	r[0] = 1;
	l[1] = 0;//初始0是左端点，1是右端点
	idx = 2;
}

void insert(int a, int x)//a位置的右边插入一个x
{
	q[idx] = x;
	l[idx] = a;
	r[idx] = r[a];
	l[r[a]] = idx;
	r[a] = idx++;
}

void dele(int a)//删除a位置的节点,等价于跳过a
{
	r[l[a]] = r[a];
	l[r[a]] = l[a];
}