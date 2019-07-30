#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int i = 0;
	int j = 0;
	//100~200之间的素数
	for (i = 101; i < 200; i+=2)
	{
		int s = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				s = 0;
			}
		}
		if (s)
		{
			printf("%d ", i);
		}
	}
	//乘法表
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-4d", j, i, i * j);
		}
		printf("\n");
	}
	//1000~2000的闰年
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
		{
			printf("%d ",i);
		}
	}
	system("pause");
	return 0;
}