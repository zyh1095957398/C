#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}
//
////2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。 一解
//int main()
//{
//	int i = 0;
//	float count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int tmp = (int)pow(-1, i + 1);
//		count += (float) 1 / i*tmp;
//	}
//	printf("%f\n", count);
//
//	system("pause");
//	return 0;
//}
//
////2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。 二解
//int main()
//{
//	int i = 0;
//	float count = 0;
//	int tmp = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		count += 1.0 / i *tmp;
//		tmp = -tmp;
//	}
//	printf("%f\n", count);
//
//	system("pause");
//	return 0;
//}

//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。 三解
int main()
{
	int i = 0;
	float count = 0;
	for (i = 1; i <= 100; i+=2)
	{
		count += 1.0 / (i * (i + 1));
	}
	printf("%f\n", count);

	system("pause");
	return 0;
}
//
////3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			sum++;
//		}
//		if (i % 10 == 9)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//
//	int p[8] = { 11,12,13,14,15,16,17,18 };
//	int i = 0,j = 0;
//	while (i++ < 7)
//		if (p[i] % 2)
//			j += p[i];
//
//	printf("%d\n", j);
//}
//int main()
//{
//	unsigned short i, j;
//	int s = 0;
//	for (i = 0, j = 2; i != j; i += 5, j += 7)
//	{
//		s++;
//	}
//	printf("%d\n", s);
//	s = 0;
//	for (i = 3, j = 7; i != j; i += 3, j += 7)
//	{
//		s++;
//	}
//	printf("%d\n", s);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int
//		i = 0, a = 0;
//	while (i < 20)
//	{
//		for (;;)
//		{
//			if ((i % 10) == 0) break;
//			else i--;
//		}
//		i += 11; a += i;
//	}
//	printf("%d\n", a);
//}