#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//�������������ݵĸ���
	int left = 0;//�������±�
	int right = sz - 1;//�������±�

	while (right >= left)
	{
		int mid = (left + right) / 2;//ȡ<����>�м�ֵ���±�
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
			printf("�ҵ���,�±���%d\n", mid);
			break;
		}
	}
	if (right < left)
	{
		printf("ûϷ��!");
	}

	return 0;
}