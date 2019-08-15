#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

////三位数的三数各不相同（1，2，3，4，5）
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 1; i <= 5; i++)
//		for (j = 1; j <= 5; j++)
//			for (k = 1; k <= 5; k++)
//			{
//				if (i != j && i != k && j != k)
//					//sum++;
//					printf("%d%d%d\n", i, j, k);
//			}
//	//printf("%d", sum);
//
//	return 0;
//}

//int main()
//{
//	double i = 0;
//	double sum = 0;
//	double a1 = 0;
//	double a2 = 0;
//	double a3 = 0;
//	double a4 = 0;
//	double a5 = 0;
//
//	a1 = 10 * 0.1;
//	a2 = a1 + 10 * 0.075;
//	a3 = a2 + 20 * 0.05;
//	a4 = a3 + 20 * 0.03;
//	a5 = a4 + 40 * 0.015;
//
//	printf("当月利润：");
//	scanf("%lf", &i);
//	printf("\n");
//
//	if (i <= 10)
//		sum = i * 0.1;
//	else if (i <= 20)
//	{
//		sum = a1 + (i - 10) * 0.075;
//	}
//	else if (i <= 40)
//	{
//		sum = a2 + (i - 20) * 0.05;
//	}
//	else if (i <= 60)
//	{
//		sum = a3 + (i - 40) * 0.03;
//	}
//	else if (i <= 100)
//	{
//		sum = a4 + (i - 60) * 0.015;
//	}
//	else
//		sum = a5 + (i - 100) * 0.01;
//	
//	printf("应发放奖金：");
//	printf("%.3lf万\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	
//	for (i = 0; i < 100000; i++)
//	{
//		j = sqrt(i + 100);
//		k = sqrt(i + 268);
//
//		if (j * j == (i + 100) && k * k == (i + 268))
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int sum = 0;
//	int i = 0;
//
//	printf("请输入日期：");
//	scanf_s("%d ", &year);
//	scanf_s("%d ", &month);
//	scanf_s("%d", &day);
//	printf("\n");
//	if (day > 31 || month > 12)
//	{
//		printf("日期出错！");
//	}
//	for (i = 1; i < month; i++)
//	{
//		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
//		{
//			sum += 31;
//		}
//		if (i == 4 || i == 6 || i == 7 || i == 11)
//		{
//			sum += 30;
//		}
//		if (i == 2)
//		{
//			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//			{
//				sum += 29;
//			}
//			else
//				sum += 28;
//		}
//	}
//	sum += day;
//	printf("这是今年的第%d天\n", sum);
//
//	system("pause");
//	return 0;
//}
////打印国际棋盘
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if ((i + j) % 2 == 0)
//			{
//				printf("%c%c", '\xA1', '\xF6');
//			}
//			else
//				printf("  ");
//			
//		}printf("\n");
//	}
//	return 0;
//}
//
////打印楼梯，上面有笑脸
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	printf("\n^-^ ^-^ \n");
//	printf("———\n");
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j < 2*i+4; j++)
//		{
//			printf(" ");
//		}
//		if(i%2)
//			printf("——\n");
//		else
//		    printf("  |\n");
//	}
//  return 0;
//}

//兔子？？？真难

////101~200的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 101; i <= 200; i++)
//	{
//		int tmp = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				tmp = 0;
//		}
//		if (tmp)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

////将正整数分解成质因数
//int main()
//{
//	int i = 2;
//	int n = 0;
//
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		if (n % i == 0)
//		{
//			printf("%d ",i);
//			n = n / i;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return 0;
//}
//
////条件嵌套
//int main()
//{
//	int m = 0;
//
//	scanf("%d", &m);
//
//	if (90 <= m)
//	{
//		printf("你的成绩为A\n");
//	}
//	else if (60 <= m && 89 > m)
//	{
//		printf("你的成绩为B\n");
//	}
//	else
//		printf("你的成绩为C\n");
//
//	return 0;
//}
//
////最大公约数与最小公倍数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int tmp = 0;
//	int i = 0;
//	int j = 0;
//
//	scanf("%d%d", &m, &n);
//	i = m; 
//	j = n;
//	while(m % n)
//	{
//		tmp = m % n;
//		m = n;
//		n = tmp;
//	}
//	printf("最大公约数为%d\n", n);
//	printf("最小公倍数为%d\n", i * j / n);
//
//	return 0;
//}

#include <string.h>
////字符串中字母，空格，数字以及其他字符的个数
//int main()
//{
//	char ch = 0;
//	int letters = 0;
//	int space = 0;
//	int sz = 0;
//	int other = 0;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//		{
//			letters++;
//		}
//		else if (ch == ' ')
//		{
//			space++;
//		}
//		else if (ch <= '9' && ch >= '0')
//		{
//			sz++;
//		}
//		else
//			other++;
//	}
//	printf("字符有%d个\n空格有%d个\n数字有%d个\n其他有%d个\n", letters, space, sz, other);
//	
//	return 0;
//}
//
////完数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//
////100米高的球落下只弹起一半，求总路程及第n次反弹的高度
//int main()
//{
//	int n = 0;
//	float sum = 0;
//	float m = 100.0;
//	int i = 0;
//
//	scanf("%d", &n);
//	sum += m;
//	for (i = 0; i < n-1; i++)
//	{
//		m = m / 2.0;
//		sum += m * 2;
//	}
//	printf("第%d落地时共经过了%f米\n", n, sum);
//	m /= 2.0;
//	printf("第%d落地后能反弹%f米\n", n, m);
//
//	return 0;
//}

////猴子吃桃
//int main()
//{
//	int m = 1;
//	int n = 0;
//	int i = 0;
//
//	printf("请输入天数：>");
//	scanf("%d", &n);
//	for (i = 0; i < n - 1; i++)
//	{
//		m++;
//		m = m * 2;
//	}
//	printf("一开始总共有%d个桃子。", m);
//
//	return 0;
//}