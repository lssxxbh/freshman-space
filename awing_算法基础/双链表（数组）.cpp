#define  _CRT_SECURE_NO_WARNINGS 
#include<bits/stdc++.h>

typedef long long int ll;
#define M 1000

int l[M], r[M],q[M],idx;
//ͬ��������l��ʾ��ڵ�λ�ã�r��ʾ�ҽڵ�λ��

void init()
{
	r[0] = 1;
	l[1] = 0;//��ʼ0����˵㣬1���Ҷ˵�
	idx = 2;
}

void insert(int a, int x)//aλ�õ��ұ߲���һ��x
{
	q[idx] = x;
	l[idx] = a;
	r[idx] = r[a];
	l[r[a]] = idx;
	r[a] = idx++;
}

void dele(int a)//ɾ��aλ�õĽڵ�,�ȼ�������a
{
	r[l[a]] = r[a];
	l[r[a]] = l[a];
}