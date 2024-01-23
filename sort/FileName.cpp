#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<iostream>
using namespace std;

typedef long long int ll;
#define MX 100000

int tem [100000] = { 0 };
int arr[10000] = { 0 };
void randNum(int* num, int count)
{
	int i = 0;
	while (i < count)
	{
		num[i++] = rand() % 1000000000;
	}
}

void inarr(int arr[], int length)//数组输入
{
	for (int i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void showarr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);	
	}
	printf("\n");
}

void disshowarr(int arr[], int length)//数组倒序输出
{
	for (int i = length-1; i >=0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubsort(int arr[], int length)//冒泡排序
{
	int flag = 1;//哨兵
	while (length--&&flag)
	{
		flag = 0;//哨兵下岗
		for (int i = 0; i < length; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tem = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = tem;
				flag = 1;//有情况，哨兵上岗
			}
		}
	}
}

void selectsort(int arr[], int length)
//选择排序，找最小值放前面
{
	for (int i = 0; i < length-1; i++)
	{
		int k = i;
		for (int j = i + 1; j < length; j++)
			if (arr[k] > arr[j])
				k = j;
		int temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
	}
}

void insertsort(int arr[], int length)
//插入排序
{
	for (int i = 1; i < length; i++)
	{
		for (int j = i; j >= 1 && arr[j] < arr[j - 1]; j--)
		{
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
	}
}


void quick_sort(int l, int r, int arr[])//快速排序
{
	if (l >= r) return;
	int x = arr[l], i = l - 1, j = r + 1;//注意边界， l左移一位，r右移一位；
	while (i < j)
	{
		while (arr[++i] > x);
		while (arr[--j] < x);
		if (i < j)
		{
			int tem = arr[i];
			arr[i] = arr[j];
			arr[j] = tem;
		}
	}
	quick_sort(l, j, arr);
	quick_sort(j + 1, r, arr);


}

void merge_sort(int l, int r, int arr[])//归并排序
{
	if (l >= r) return;
	int mid = (l + r) / 2;

	merge_sort(l, mid, arr);
	merge_sort(mid + 1, r, arr);

	int i = l, j = mid + 1, k = 0;
	while (i <= mid && j <= r)
		if (arr[i] > arr[j]) tem[k++] = arr[i++];
		else tem[k++] = arr[j++];
	while (i <= mid) tem[k++] = arr[i++];
	while (j <= r) tem[k++] = arr[j++];
	for (i = l, j = 0; i <= r; i++, j++)
		arr[i] = tem[j];


}

void quick2(ll arr[], ll l, ll r)
{
	if (l >= r) return;
	ll i = l - 1, j = r + 1, x = arr[l];
	while (i < j)
	{
		while (arr[++i] > x);
		while (arr[--j] < x);
		if (i < j)
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	quick2(arr, l, j);
	quick2(arr, j + 1, r);


}

void merge2(ll arr[], ll l, ll r)
{
	if (l >= r) return;
	ll mid = (l + r) / 2;
	merge2(arr, l, mid);
	merge2(arr, mid + 1, r);
	ll i = l, j = mid + 1;
	ll k = 0;
	while (i <= mid && j <= r)
		if (arr[i] < arr[j]) tem[k++] = arr[i++];
		else tem[k++] = arr[j++];
	while (i <= mid) tem[k++] = arr[i++];
	while (j <= r) tem[k++] = arr[j++];
	for (i = l, j = 0; i <= r; i++, j++)
		arr[i] = tem[j];




}




int main()
{
	int n;
	scanf("%d", &n);
	randNum(arr, n);
	showarr(arr, n);
	sort
	showarr(arr, n);

}