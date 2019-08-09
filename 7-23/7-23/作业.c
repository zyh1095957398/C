#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	short a, b, c, d, e, l1, l2, l3;
	for(a=1;a<=5;a++)
		for (b = 1; b <= 5; b++)
		{
			if (a == b)
				continue;
			for (c = 1; c <= 5; c++)
			{
				if (a == c || b == c)
					continue;
				for (d = 1; d <= 5; d++)
				{
					if (a == d || b == d || c == d)
						continue;
					e = 15 - a - b - c - d;
					l1 = (d < c);
					l2 = (e < a);
					l3 = (b < d && a < b);
					if (l1 + l2 + l3 == 3)
						printf("%d %d %d %d %d\n", a, b, c, d, e);
				}
			}
		}
}

//C_NC_day11-1
int main()
{
	int a, b, c, d, e, l1, l2, l3, l4, l5;

	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			if (a == b)
				continue;
			for (c = 1; c <= 5; c++)
			{
				if (a == c || b == c)
					continue;
				for (d = 1; d <= 5; d++)
				{
					if (a == d || b == d || c == d)
						continue;
					e = (1 + 2 + 3 + 4 + 5) - a - b - c - d;
					l1 = ((b == 2) ^ (a == 3));
					l2 = ((b == 2) ^ (e == 4));
					l3 = ((c == 1) ^ (d == 2));
					l4 = ((c == 5) ^ (d == 3));
					l5 = ((e == 4) ^ (a == 1));
					if ((l1 + l2 + l3 + l4 + l5) == 5 && (a + b + c + d + e) == 15)
						printf("A的名次为%d\nB的名次为%d\nC的名次为%d\nD的名次为%d\nE的名次为%d\n"
							, a, b, c, d, e);
				}
			}
		}
	}

	return 0;
}

//C_NC_day11-2
int main()
{
	int a, b, c, d, l1, l2, l3, l4;

	for (a = 0; a <= 1; a++)
	{
		for (b = 0; b <= 1; b++)
		{
			for (c = 0; c <= 1; c++)
			{
				d = 1 - (a + b + c);
				l1 = ((b + c + d) == 1);
				l2 = (c = 1);
				l3 = (d = 1);
				l4 = (d = 0);
				if ((l1 + l2 + l3 + l4) == 3 && (a + b + c + d) == 1)
				{
					if (a)
						printf("A是凶手\n");
					else if (b)
						printf("B是凶手\n");
					else if (c)
						printf("C是凶手\n");
					else if (d)
						printf("D是凶手\n");
				}
			}
		}
	}

	return 0;
}

//杨辉三角
int main()
{
	int i = 0;
	int j = 0;
	int a[20][20] = { 0 };
	int n = 0;

	scanf("%d", &n);
	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;
	for (i = 2; i < n; i++)
	{
		a[i][0] = 1;
		for(j=0; j<=i; j++)
		{
			if (j == 0)
				continue;
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 25 - i; j++)
			printf("  ");
		for (j = 0; j <= i; j++)
		{
			printf("%-4d", a[i][j]);
		}
		printf("\n");
	}
}

//杨辉三角-2
int main()
{
	int i = 0;
	int j = 0;
	int a[20][20] = { 0 };
	int n = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for(j=0; j<=i; j++)
		{
			if (j == 0||i<=1)
			{
				a[i][j] = 1;
				continue;
			}
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
        for (j = 0; j < 25 - i; j++)
	        printf("  ");
		for (j = 0; j <= i; j++)
		{
			printf("%-4d", a[i][j]);
		}
		printf("\n");
	}
}