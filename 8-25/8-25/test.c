#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
	int x = 0;
	int y = 0;
	int a = 0;
	int b = 0;
	int l = 0;
	int n = 0;

	scanf("%d%d%d%d%d", &x, &y, &a, &b, &l);
	if (x > y)
	{
		if (a > b)
		{
			n = (l - (x - y)) / (a - b);
		}
		else
		{
			n = (x - y) / (b - a);
		}
	}
	else
	{
		if (a > b)
		{
			n = (y - x) / (a - b);
		}
		else
		{
			n = (l - (y - x)) / (b - a);
		}
	}
	printf("%d", n);
}

//2£¡+ 3£¡+ 4£¡¡­¡­
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int b = 0;

	scanf("%d", &n);
	for (i = 2; i <= n - 2; i++)
	{
		int m = 1;
		for (j = 1; j <= i; j++)
		{
			m = m * j;
		}
		b += m;
	}
	printf("%d", b);

}

int f(int n)
{
	int a;
	if (n == 1 || n == 2)
		a = 0;
	else if (n == 3)
		a = 1;
	else if (n == 4)
		a = 3;
	else a = f(n - 1) * 2 + pow(2, n - 4) - f(n - 4);

	return a;
}

int main()
{
	int n = 0;

	scanf("%d", &n);
	printf("%d", f(n));

	return 0;
}