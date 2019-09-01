#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int i = 0;
//	double t = 0;
//	double m = 0;
//
//	for (i = 1; i < 1000000; i++)
//	{
//		t = pow(-1, 2 * (i + 1)) / (2 * i - 1);
//		if (t < pow(10, -6))
//			break;
//		else
//			m = m + t / pow(-1, i + 1);
//	}
//	printf("%lf", 4 * m);
//
//	return 0;
//}

//int main()
//{
//	double a = 0;
//	double x0 = 0;
//	double x1 = 0;
//
//	scanf("%lf", &a);
//	x0 = a / 2;
//	x1 = (x0 + 2 / x0) / 2;
//	while (fabs(x1 - x0) >= 0.00001)
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//
//	}
//	printf("%.5f\n", x1);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	double t[1000] = { 0 }; 
//	int m = 0;
//
//	scanf("%d", &a);
//	t[0] = a / 2;
//	t[1] = (t[0] + 2 / t[0]) / 2;
//	for (i = 2; i < 1000000; i++)
//	{
//		t[i] = (t[i - 1] + a / t[i - 1]) / 2;
//		if (fabs(t[i] - t[i - 1]) < 0.00001)
//		{
//			printf("%.5lf", t[i]);
//			break;
//		}
//	}
//
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%f", &a);
	b = a % 10;
	c = b / 10;
	printf("%d", c);

	return 0;
}
