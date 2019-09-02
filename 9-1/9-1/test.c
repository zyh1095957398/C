#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	int j = 0;
	int x0 = 1;
	int x1 = 1;
	int x2 = 1;
	int i = 2;

	for (j = 2; j <= 100; j++)
	{
		x0 = x1; 
		x1 = x2;
		x2 = x0 + 2 * x1;
		n = i;
		i = i + x2;
		if (n < 100 && i >= 100)
			printf("%d\n", j - 1);
		if (n < 1000 && i >= 1000)
			printf("%d\n", j - 1);
		if (n < 10000 && i >= 10000)
			printf("%d\n", j - 1);
	}

	return 0;
}

int main()
{
	int a[21] = { 0 };
	double t = 0;
	double sum = 0;
	int i = 0;
	a[0] = 1;
	a[1] = 2;
	for (i = 2; i < 21; i++)
		a[i] = a[i - 1] + a[i - 2];
	for (i = 0; i < 20; i++)
	{
		t = a[i + 1] * 1.0 / a[i];
		sum += t;
	}
	printf("%lf", sum);

	return 0;
}

int main()
{
	double i = 0;
	double n = 0;
	double a = 1;
	double b = 2;
	double m = 0;

	for (i = 1; i <= 20; i++)
	{
		m = m + (b / a) * 1.0;

		a = b; b = a + n; n = a;
	}
	printf("%.6lf", m);

	return 0;
}