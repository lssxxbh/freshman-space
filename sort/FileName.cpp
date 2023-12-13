#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#define MX 1000000

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






int arr[MX + 10] = {0};
int main()
{
	int n;
	scanf("%d", &n);
	randNum(arr, n);
	showarr(arr, n);
	bubsort(arr, n);
	disshowarr(arr, n);

}