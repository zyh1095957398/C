#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int main()
//{
//	int a = 0;
//	int b = 0; 
//	int m = 0;
//	int k = 0;
//	int t = 0;
//	int flag = 0;
//
//	scanf("%d%d", &a, &b);
//	if (a >= b)
//	{
//		t = a; 
//		a = b; 
//		b = t;
//	}
//	for (k = a; k <= b; k++)
//	{
//		flag = 1;
//		for (m = 2; m <= k - 1; m++)
//		{
//			if (k % m == 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag == 1 && k != 1)
//		{
//			printf("%d ", k);
//		}
//	}
//	printf("\n");
//
//	return 0;
//}

int main()
{
	int i = 0;
	double t = 0;
	double m = 0;

	for (i = 1; i < 1000; i++)
	{
		t = (double)pow(-1, 2 * (i + 1)) / (2 * i - 1);
		if (t < (double)pow(10, -6))
			break;
		else
			m = m + t / (double)pow(-1, i + 1);
	}
	printf("%lf", 4 * m);
}