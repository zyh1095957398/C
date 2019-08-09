#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <assert.h>

////二进制逆置
//size_t serverse_bit(size_t n)
//{
//	size_t tmp = 0;
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		tmp += ((n >> i) & 1) * pow(2, 31 - i);
//	}
//
//	return tmp;
//}
//int main()
//{
//	size_t n = 0;
//	size_t set = 0;
//
//	scanf("%d", &n);
//	set = serverse_bit(n);
//	printf("%u\n", set);
//
//	return 0;
//}
//
////不用a+b/2实现平均值
//float my_average(float m, float n)
//{
//	return n - (n - m) / 2;
//}
//int main()
//{
//	float m = 0;
//	float n = 0;
//
//	scanf("%f%f", &m, &n);
//	printf("%.3f\n",my_average(m, n));
//
//	return 0;
//}
//
////输出只出现一次的数字
//void one_characther(int* arr, int set)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int count = 0;
//
//	for (i = 0; i < set; i++)
//	{
//		tmp = arr[i];
//		count = 0;
//		for (j = 0; j < set; j++)
//		{
//			if (tmp == arr[j])
//				count++;
//		}
//		if (count == 1)
//			printf("%d ", tmp);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,4,3,2,1 };
//	int set = sizeof(arr) / sizeof(arr[0]);
//
//	one_characther(arr,set);
//
//	return 0;
//}
//
////输出只出现一次的数字
//void one_characther(int* arr, int set)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int count = 0;
//
//	for (i = 0; i < set; i++)
//	{
//		tmp ^= arr[i];
//	}
//	printf("%d", tmp);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,6,4,3,2,1 };
//	int set = sizeof(arr) / sizeof(arr[0]);
//
//	one_characther(arr,set);
//
//	return 0;
//}
//
////输出只出现一次的字符 1
//void one_characther(char* arr, int set)
//{
//	int i = 0;
//	int j = 0;
//	char tmp = 0;
//	int count = 0;
//
//	for (i = 0; i < set; i++)
//	{
//		tmp = arr[i];
//		count = 0;
//		for (j = 0; j < set; j++)
//		{
//			if (tmp == arr[j])
//				count++;
//		}
//		if (count == 1)
//			printf("%c ", tmp);
//	}
//}
//int main()
//{
//	char arr[] = "abcbbdfgwerera";
//	int set = strlen(arr);
//
//	one_characther(arr,set);
//
//	return 0;
//}
////输出只出现一次的字符 2
//char one_characther(char* arr, int set)
//{
//	int i = 0;
//	char tmp = 0;
//
//	for (i = 0; i < set; i++)
//	{
//		tmp ^= arr[i];
//	}
//	return tmp;
//}
//int main()
//{
//	char arr[] = "aabbcss";
//	int set = strlen(arr);
//
//	printf("%c\n", one_characther(arr, set));
//
//	return 0;
//}
////
//int my_strlen(char* a)
//{
//	assert(a != NULL);
//	int count = 0;
//
//	while (*a++ != '\0')
//	{
//		count++;
//	}
//
//	return count;
//}
//void opp_char(char* a, int left, int right)
//{
//
//	while (left < right)
//	{
//		char tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void opp_strcpy(char* a, int len)
//{
//	int start = 0;
//	int edd = len - 1;
//
//	//整体逆序
//	opp_char(a, start, edd);
//	//字符逆序
//	start = 0;
//	edd = 0;
//	while (a[edd] != '\0')
//	{
//		start = edd;
//		while (a[edd] != ' ' && a[edd] != '\0')
//		{
//			edd++;
//		}
//		opp_char(a, start, edd-1);
//		if(edd != '\0')
//		   edd++;
//	}
//
//}
//int main()
//{
//	char a[] = "student a am I";
//	int len = my_strlen(a);
//	opp_strcpy(a, len);
//	printf("%s", a);
//}
//
//奇数在偶数前面
//void odd_even_number(int* arr, int set)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int n = set;
//
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] % 2 != 0)
//			continue;
//		else
//		{
//			for (j = set-1; j > i; j--)
//			{
//				if (arr[j] % 2 != 0)
//				{
//					tmp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = tmp;
//					n = j;
//					break;
//				}
//			}
//		}
//	}
//	for (i = 0; i < set; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void odd_even_number(int* arr, int set)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//
//	for (i = 0; i < set; i++)
//	{
//		if (arr[i] % 2 != 0)
//			continue;
//		else
//		{
//			for (j = set - 1; j > i; j--)
//			{
//				if (arr[j] % 2 != 0)
//				{
//					tmp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = tmp;
//				}
//			}
//		}
//	}
//	for (i = 0; i < set; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,4,0,7,8,5,2,3,6,9 };
//	int set = sizeof(arr) / sizeof(arr[0]);
//	odd_even_number(arr,set);
//}
//
////杨氏矩阵
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int n = 0;
//	int set = sizeof(arr) / sizeof(arr[0]);
//	int m = set / 2;
//	int i = 0;
//	int j = 0;
//
//	scanf("%d", &n);
//	if (n < arr[0][0] || n > arr[set - 1][set - 1])
//		printf("数组中不存在%d\n", n);
//	if (n > arr[m][m])
//	{
//		for (i = 0; i < set; i++)
//		{
//			for (j = 0; j < set; j++)
//			{
//				if ((i == m && j == m) || (i + j) < (m * 2))
//					continue;
//				if(n == arr[i][j])
//					printf("该数字存在，位置为%d行%d列\n", i + 1, j + 1);
//			}
//		}
//	}
//	else if (n < arr[m][m])
//	{
//		for (i = 0; i < set; i++)
//		{
//			for (j = 0; j < set; j++)
//			{
//				if ((i == m && j == m) || (i + j) > (m * 2))
//					continue;
//				if (n == arr[i][j])
//					printf("该数字存在，位置为%d行%d列\n", i + 1, j + 1);
//			}
//		}
//	}
//	else if(n == arr[m][m])
//		printf("该数字存在，位置为%d行%d列\n", m + 1, m + 1);
//
//	return 0;
//}

//杨氏矩阵
int Find(int a[][3], int row, int lie, int n)
{
	int left = 0;
	int right = 3;

	while (left < row && right >= 0)
	{
		if (n > (a[left][right]))
		{
			left++;
		}
		else if (n < a[left][right])
		{
			right--;
		}
		else
			return 1;
	}
	return 0;
}
int main()
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int n = 0;
	int set = 0;

	printf("请输入要找的数字：");
	scanf("%d", &n);
	set = Find(a, 3, 3, n);
	if (set)
		printf("找到了。\n");
	else
		printf("没找到。\n");

	return 0;
}