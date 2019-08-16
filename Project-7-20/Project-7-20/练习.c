#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//兔子
int main()
{
	long f1 = 1;
	long f2 = 1;
	int i = 0;
	for (i = 0; i <= 20; i++)
	{
		printf("%12ld%12ld", f1, f2);
		if (i % 2 == 0)
		{
			printf("\n");
		}
		f1 = f1 + f2;
		f2 = f1 + f2;
	}

	return 0;
}
//
////对角线之和
//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i == j)
//				sum += arr[i][j];
//		}
//	}
//	printf("对角线之和为%d\n", sum);
//
//	return 0;
//}
//
////杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//
//	arr[0][0] = 1;
//	arr[1][0] = 1;
//	arr[1][1] = 1;
//
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//				continue;
//			}
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
////数组插入一个数，保持有序
//int main()
//{
//	int arr[] = { 1,3,5,7,9 };
//	int n = 0;
//	int i = 0;
//	int set = sizeof(arr) / sizeof(arr[0]);
//
//	scanf("%d", &n);
//	for (i = 0; i < set; i++)
//	{
//		int tmp = 0;
//		if (arr[set - 1 - i] >= n)
//		{
//			arr[set - i] = arr[set - 1 - i];
//			arr[set - 1 - i] = n;
//		}
//		else
//		{
//			arr[set - i] = n;
//			break;
//		}
//	}
//	//arr+1;
//	for (i = 0; i < set+1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
////冒泡排序
//int main()
//{
//	int arr[] = { 1,4,7,8,5,2,3,6,9,0 };
//	int i = 0;
//	int j = 0;
//	int set = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < set - 1; i++)
//	{
//		int tmp = 0;
//		for (j = 0; j < set - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < set; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

