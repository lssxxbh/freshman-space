#define  _CRT_SECURE_NO_WARNINGS 
#include<bits/stdc++.h>
using namespace std;
//������һ���Ƚ��ȳ���First In First Out�������Ա����FIFO��
// ��������һ�˳�Ϊ��β������ɾ����һ�˳�Ϊ��ͷ
int que[1000], hh = 0, tt = -1;//hh��ͷ��tt��β

void insert_que(int x)//��β����
{
	que[++tt] = x;
}

void dele_que(int x)//��ͷɾ��
{
	hh++;
}