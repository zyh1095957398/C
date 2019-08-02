#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

////菱形
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int lien = 0;
//
//	scanf("%d", &lien);
//
//	for (i = 0; i < lien; i++)
//	{
//		for (j=0; j<lien-i-1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}	
//		printf("\n");
//	}
//	for (i = 0; i < lien-1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(lien-i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

////梯形
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int lien = 0;
//
//	scanf("%d", &lien);
//
//	for (i = 0; i < lien; i++)
//	{
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < lien - 1; i++)
//	{
//		for (j = 0; j < 2 * (lien - i - 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}
//
////0~999的水仙花数
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 1000; i++)
//	{
//		int sum = 0;
//		int count = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		/*while (tmp % 10)
//		{
//			sum = sum + pow((tmp % 10) , count);
//			tmp = tmp / 10;
//		}*/
//		for (j = tmp % 10; tmp > 0; tmp /= 10)
//		{
//			sum = sum + pow((tmp % 10), count);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
////Sn=a+aa+aaa+aaaa+aaaaa 一解
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//
//	scanf("%d%d", &a, &n);
//
//	for (i = 0; i < n; i++)
//	{
//		int m = pow(10, i);
//
//		for (j = n - i; j > 0; j--)
//		{
//			sum += a * m;
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//Sn=a+aa+aaa+aaaa+aaaaa 二解
int main()
{
	int i = 0;
	int tmp = 0;
	int a = 0;
	int n = 0;
	int sum = 0;

	scanf("%d%d", &a, &n);

	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d", sum);

	return 0;
}