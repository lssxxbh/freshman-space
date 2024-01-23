#define  _CRT_SECURE_NO_WARNINGS 
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ULL;
#define M 1000
// 栈：是只允许在一端进行插入或删除的线性表。
// 首先栈是一种线性表，但限定这种线性表只能在某一端进行插入和删除操作。(有底的瓶子)
int stk[M], tt;//tt表示栈顶

void pop_stk(int x)//栈顶进入x
{
	stk[++tt] = x;
}

tt--		//栈顶弹出
stk[tt]		//栈顶的值
if(tt>0)	//判断栈是否为空

