#define  _CRT_SECURE_NO_WARNINGS 
#include<bits/stdc++.h>
typedef long long int ll;
#define M 1000

int head, q[M], ne[M], idx;
//head������ͷ��λ�ã�û��ʱ-1��,q�洢����
// ne�洢������һ���ڵ��λ�ã�q��neͨ���±����
// idx��ʾ��ǰ�Ѿ��õ��ĸ��ڵ㣨idxǰ���������Ľڵ㱻���ˣ�

void init()//��ʼ��
{
	head = -1;
	idx = 0;
}

void insert_head(int n)//����ͷ����n  (���Ϊhead���ͷ֮�佨��һ���ڵ�)
{
	q[idx] = n, ne[idx] = head;
	head = idx++;
}

void delete_head()//ɾ������ͷ�ڵ㣨�豣֤������ڣ�
{
	head = ne[head];//�ᵼ��ǰ��ɾ����������࣬�˷�������ռ䣬���ⲻ��
}

void insert(int n, int k)//��n���뵽�±�Ϊk�Ľڵ�ĺ���(������뵽ǰ���kΪk-1����)
{
	q[idx] = n, ne[idx] = ne[k];
	ne[k] = idx++;
}

void dele2(int k)//ɾ���±�Ϊk�Ľڵ����Ľڵ�
{
	ne[k] = ne[ne[k]];//�൱��������һ����ֱ��ָ�����¸�
}

