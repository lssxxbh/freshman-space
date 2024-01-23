#define  _CRT_SECURE_NO_WARNINGS 

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define M 10000

ll check(ll mid)
{
	return 0;
}

int bsearch_1(int l, int r)//���ַ�   ����[l, r]�����ֳ�[l, mid-1]��[mid , r]ʱʹ�ã� �����ǰȡ�������checkʱ�޵Ⱥţ����ֵȺ�ʱ���߿ɾ�ȷ�����ʱ��λ�ã���ʱδ��������
{
	while (l < r)
	{
		int mid = (l + r+1) / 2;
		if (check(mid)) l = mid;
		else r = mid-1;
	}
	return l;
}

int brsearch2(int l, int r)// ���ַ�  ����[l, r]�����ֳ�[l, mid]��[mid + 1, r]ʱʹ�ã�������ȡ�������checkʱ�޵Ⱥ�  ���ֵȺ�ʱ���߿ɾ�ȷ�����ʱ��λ�ã���ʱδ��������
{
	while (l < r)
	{
		int mid = (r + l) / 2;
		if (check(mid)) r = mid;
		else l = mid + 1;

	}
	return l;
}

vector<int> add(vector<int>& a, vector<int>& b)//�߾��ȼӷ���ģ��ӷ�������̣�(a,b����ʱ�������룬��λ��ǰ������ֵcͬ��)
{
	if (a.size() < b.size()) return add(b, a);
	vector<int>c;
	int t = 0;
	for (int i = 0; i < a.size(); i++)
	{
		t += a[i];
		if (i < b.size()) t += b[i];
		c.push_back(t % 10);
		t /= 10;
	}
	if (t) c.push_back(t);
	return c;
}

vector<int> sub(vector<int>& a, vector<int>& b)//�߾��ȼ�����ģ�����������̣�(a,b����ʱ�������룬��λ��ǰ������ֵcͬ��)
{
	vector<int >c;
	int flag = 0;//�������ڱ�  0Ϊ����-1Ϊ����
	if (a.size() < b.size()) flag = -1;
	else if (a.size() == b.size())
	{
		for (int i = a.size() - 1; i >= 0; i--)
			if (a[i] != b[i] && a[i] < b[i])
			{
				flag = -1;
				break;
			}
	}
	if (flag) b.swap(a);
	int t = 0;
	for (int i = 0; i < a.size(); i++)
	{
		t += a[i];
		if (i < b.size()) t -= b[i];
		c.push_back((t + 10) % 10);
		if (t < 0) t = -1;
		else t = 0;
	}
	while (c.size() > 1 && c.back() == 0) c.pop_back();
	c.push_back(flag);//�����ű�ʶ������β����0Ϊ����-1Ϊ��
	return c;
}

vector<int> mul(vector<int>& a, int b)//�߾��ȳ˷���A*b��
{
	vector<int>c;
	int t = 0;
	for (int i = 0; i < a.size(); i++)
	{
		t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	while (t)
	{
		c.push_back(t % 10);
		t /= 10;
	}
	while (c.size() > 1 && c.back() == 0) c.pop_back();
	return c;

}

vector<int> div(vector<int>& a, int b, int& s)//�߾��ȳ�����A/b  ��sΪ�����������õķ�ʽд����������
{
	vector<int>c;
	int t = 0;
	for (int i = a.size() - 1; i >= 0; i--)
	{
		t = t * 10 + a[i];
		c.push_back(t / b);
		t = t % b;
	}
	s = t;
	reverse(c.begin(), c.end());//ʵ�����飬�ַ����������ķ�ת
	while (c.size() > 1 && c.back() == 0) c.pop_back();
	return c;


}

