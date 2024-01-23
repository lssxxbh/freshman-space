#define  _CRT_SECURE_NO_WARNINGS 

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define M 10000

ll check(ll mid)
{
	return 0;
}

int bsearch_1(int l, int r)//二分法   区间[l, r]被划分成[l, mid-1]和[mid , r]时使用： 如果向前取，用这个check时无等号；（又等号时两者可精确其存在时的位置，暂时未发现区别）
{
	while (l < r)
	{
		int mid = (l + r+1) / 2;
		if (check(mid)) l = mid;
		else r = mid-1;
	}
	return l;
}

int brsearch2(int l, int r)// 二分法  区间[l, r]被划分成[l, mid]和[mid + 1, r]时使用：如果向后取，用这个check时无等号  （又等号时两者可精确其存在时的位置，暂时未发现区别）
{
	while (l < r)
	{
		int mid = (r + l) / 2;
		if (check(mid)) r = mid;
		else l = mid + 1;

	}
	return l;
}

vector<int> add(vector<int>& a, vector<int>& b)//高精度加法（模拟加法运算过程）(a,b输入时倒序输入，个位在前，返回值c同样)
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

vector<int> sub(vector<int>& a, vector<int>& b)//高精度减法（模拟减法运算过程）(a,b输入时倒序输入，个位在前，返回值c同样)
{
	vector<int >c;
	int flag = 0;//正负号哨兵  0为正，-1为负；
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
	c.push_back(flag);//正负号标识符，在尾部，0为正，-1为负
	return c;
}

vector<int> mul(vector<int>& a, int b)//高精度乘法（A*b）
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

vector<int> div(vector<int>& a, int b, int& s)//高精度除法（A/b  ，s为余数【以引用的方式写入余数】）
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
	reverse(c.begin(), c.end());//实现数组，字符串，向量的反转
	while (c.size() > 1 && c.back() == 0) c.pop_back();
	return c;


}

