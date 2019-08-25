#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//位数有7或7的倍数
int main()
{
	int a = 0;
	int i = 0;
	int count = 0;

	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 % 10 == 7 || i / 100 % 10 == 7 || i / 1000 % 10 == 7 || i / 10000 % 10 == 7)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("一共有%d\n", count);

	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;
	double sum = 1;

	scanf("%d%d", &a, &b);
	for (i = 2; i < 1000000; i++)
	{
		sum = sum + 1 / i;
		if (sum > a)
		{
			m = i;
		}
	}
	for (j = m + 1; j <= (m + 1000000); j++)
	{
		sum = sum + 1 / j;
		if (sum < b)
		{
			n = j;
		}
	}
	if (m == n)
		printf("%d", m);
	else
		printf("%d %d", m, n);

	return 0;
}

int main()
{
	double m = 0;
	double n = 0;
	double i = 0;
	double sum = 0;
	scanf("%lf%lf", &n, &m);
	for (i = n; i <= m; i++)
	{
		sum += 1.0 / (i * i);
		if ((1.0 / (i * i)) < 0.000001) 
			break;
	}
	printf("%lf", sum);

	return 0;
}