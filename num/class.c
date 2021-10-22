#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组内数据的个数
	int left = 0;//定义左下标
	int right = sz - 1;//定义右下标

	while (right >= left)
	{
		int mid = (left + right) / 2;//取<数据>中间值的下标
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			//if arr[mid]=k
			printf("找到了,下标是%d\n", mid);
			break;
		}
	}
	if (right < left)
	{
		printf("没戏了!");
	}

	return 0;
}