#define  _CRT_SECURE_NO_WARNINGS 
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ULL;
#define M 1000
// ջ����ֻ������һ�˽��в����ɾ�������Ա�
// ����ջ��һ�����Ա����޶��������Ա�ֻ����ĳһ�˽��в����ɾ��������(�е׵�ƿ��)
int stk[M], tt;//tt��ʾջ��

void pop_stk(int x)//ջ������x
{
	stk[++tt] = x;
}

tt--		//ջ������
stk[tt]		//ջ����ֵ
if(tt>0)	//�ж�ջ�Ƿ�Ϊ��

