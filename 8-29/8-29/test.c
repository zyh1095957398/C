#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int a = 0;
//	int b[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (i = a - 1; i >= 0; i--)
//	{
//		for (j = a - 1; j >= i; j--)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//
//	int n = 0;
//	int i = 0;
//	double t = 0;
//	double sum = 0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//			t = pow(2, i) * 1.0 / (((double)pow(2, i) + 1) * ((double)pow(2, i + 1) - 1));
//		else
//			t = pow(2, i) * 1.0 / (((double)pow(2, i) - 1) * ((double)pow(2, i + 1) + 1));
//		sum += t;
//	}
//	printf("%.6lf", sum);
//
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	int b = 0;

	for (i = 2; i <= 1000; i++)
	{
		int q = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
				q += j;
		}
		if (q == i)
		{
			printf("%d=1", i);
			for (b = 2; b < i; b++)
			{
				if (i % b == 0)
					printf("+%d", b);
			}
			printf("\n");
		}
	}

	return 0;
}