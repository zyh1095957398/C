#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//返回一个参数二进制中1的个数 1
int count_one_bits(size_t m, int n,int sum)
{
	if (n)
	{
		sum += m & 1;
		m >>= 1;
		return count_one_bits(m, n - 1, sum);
	}
	return sum;
}
int main()
{
	size_t m = 0;
	int n = 32;
	int sum = 0;

	scanf("%d", &m);
	count_one_bits(m,n,sum);
	printf("%d", count_one_bits(m, n, sum));

	return 0;
}

//返回一个参数二进制中1的个数 2
int count_one_bits(size_t m, int sum)
{
	while (m)
	{
		if (m % 2 == 1)
		{
			sum++;
		}
		m /= 2;
	}
	return sum;
}
int main()
{
	size_t m = 0;
	int sum = 0;

	scanf("%d", &m);
	//count_one_bits(m,n,sum);
	printf("%d", count_one_bits(m, sum));

	return 0;
}

//打印一个数的二进制序列中所有的奇数和偶数 逆序
void odd_number_bits(int m, int n)
{
	if (n)
	{
		printf("%d ", m & 1);
		odd_number_bits(m >> 2, n-1);
	}
}
void even_number_bits(int m, int n)
{
	if (n)
	{
		printf("%d ", m & 1);
		odd_number_bits(m >> 2, n - 1);
	}
}
int main()
{
	int m = 0;
	int n = 16;

	scanf("%d", &m);
	//odd_number  奇数
	//even_number 偶数
	odd_number_bits(m, n);
	printf("\n");
	m >>= 1;
	even_number_bits(m, n);

	return 0;
}

//打印一个数的二进制序列中所有的奇数和偶数 正序
void odd_number_bits(int m, int n)
{
	if (n)
	{
		odd_number_bits(m >> 2, n - 1);
		printf("%d ", m & 1);
	}
}
void even_number_bits(int m, int n)
{
	if (n)
	{
		odd_number_bits(m >> 2, n - 1);
		printf("%d ", m & 1);
	}
}
int main()
{
	int m = 0;
	int n = 16;

	scanf("%d", &m);
	//odd_number  奇数
	//even_number 偶数
	odd_number_bits(m, n);
	printf("\n");
	m >>= 1;
	even_number_bits(m, n);

	return 0;
}

//打印一个数的二进制
void one_number_bits(int m, int n)
{
	if (n)
	{
		one_number_bits(m >> 1, n - 1);
		printf("%d ", m & 1);
	}
}
int main()
{
	int m = 0;
	int n = 32;

	scanf("%d", &m);
	one_number_bits(m, n);

	return 0;
}

//返回两个整形数字 m , n 的二进制表达中，有多少个位（bit）不同
int diff_bits(int m, int n, int sum, int i)
{
	int tmp = 0;
	int rmp = 0;
	if (i)
	{
		tmp = n & 1;
		rmp = m & 1;
		if (tmp ^ rmp)//或 if(tmp != rmp)
		{
			sum++;
		}
		return diff_bits(m >> 1, n >> 1, sum, i - 1);
	}

	return sum;
}
int main()
{
	int n = 0;
	int m = 0;
	int sum = 0;
	int i = 32;

	scanf("%d%d", &m, &n);
	printf("%d", diff_bits(m, n, sum, i));

	return 0;
}
