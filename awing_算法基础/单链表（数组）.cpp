#define  _CRT_SECURE_NO_WARNINGS 
#include<bits/stdc++.h>
typedef long long int ll;
#define M 1000

int head, q[M], ne[M], idx;
//head存链表头的位置（没有时-1）,q存储数据
// ne存储链接下一个节点的位置，q与ne通过下表关联
// idx表示当前已经用到哪个节点（idx前面的数代表的节点被用了）

void init()//初始化
{
	head = -1;
	idx = 0;
}

void insert_head(int n)//链表头插入n  (理解为head与表头之间建立一个节点)
{
	q[idx] = n, ne[idx] = head;
	head = idx++;
}

void delete_head()//删除链表头节点（需保证链表存在）
{
	head = ne[head];//会导致前面删除的数组空余，浪费了数组空间，问题不大
}

void insert(int n, int k)//将n插入到下标为k的节点的后面(如果插入到前面改k为k-1即可)
{
	q[idx] = n, ne[idx] = ne[k];
	ne[k] = idx++;
}

void dele2(int k)//删除下标为k的节点后面的节点
{
	ne[k] = ne[ne[k]];//相当于跳过下一个，直接指向下下个
}

