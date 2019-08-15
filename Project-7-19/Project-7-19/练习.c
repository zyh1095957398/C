#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

////猴子吃桃
//void eat_peach(int n, int sum)
//{
//	if (n > 0)
//	{
//		sum++;
//		sum *= 2;
//		eat_peach(n - 1, sum);
//	}
//	else
//	    printf("%d", sum);
//}
//int main()
//{
//	int n = 0;
//	int sum = 1;
//
//	printf("请输入天数：");
//	scanf("%d", &n);
//	eat_peach(n-1,sum);
//
//  return 0;
//}

////乒乓球比赛
//int main()
//{
//	char ch[3] = { 0 };
//	char ct[3] = { 'x', 'y', 'z' };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		if (ct[i] == 'x' || ct[i] == 'z')
//			continue;
//		ch[2] = ct[i];
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (ct[i] == 'x' || ch[2]==ct[i])
//			continue;
//		ch[0] = ct[i];
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (ct[i] == ch[2] || ct[i] == ch[0])
//			continue;
//		ch[1] = ct[i];
//	}
//	printf("a vs %c\n", ch[0]);
//	printf("b vs %c\n", ch[1]);
//	printf("b vs %c\n", ch[2]);
//
//	return 0;
//}
//
////2/1+3/2+5/3....的前n项和
//void my_project(int n, int i, int j, float sum)
//{
//	int tmp = 0;
//	int rmp = 0;
//	if (n)
//	{
//		sum += (i * 1.0) / j;
//		tmp = i + j;
//		rmp = i;
//		my_project(n - 1, tmp, rmp, sum);
//	}
//	else if (n == 0)
//		printf("%.3f", sum);
//}
//int main()
//{
//	int i = 2;
//	int j = 1;
//	int n = 0;
//	float sum = 0.0;
//
//	scanf("%d", &n);
//	my_project(n, i, j,sum);
//
//	return 0;
//
////前n项阶乘之和
//int fac(int n, int sum)
//{
//	int i = 0;
//	int m = 1;
//	for (i = 1; i <= n; i++)
//	{
//		m *= i;
//		sum += m;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//
//	scanf("%d", &n);
//	printf("%d",fac(n, sum));
//
//  return 0;
//}
//
////字符串逆序
//void opp_letter(char* ch)
//{
//	if (*ch != '\0')
//	{
//		opp_letter(ch + 1);
//		printf("%c ", *ch);
//	}
//}
//int main()
//{
//	char ch[] = "abcdef";
//
//	opp_letter(ch);
//
//	return 0;
//}
//
////计算年龄，每个人都比前一个人大2岁
//int max_age(int n, int age)
//{
//	if (n > 1)
//	{
//		return max_age(n - 1, age+2);
//	}
//	else
//		return age;
//}
//int main()
//{
//	int age = 0;
//	int n = 0;
//
//	printf("请输入人数：");
//	scanf("%d", &n);
//	printf("请输入第一个人的年龄：");
//	scanf("%d", &age);
//	printf("所有人中最大年龄为%d\n",max_age(n, age));
//
//	return 0;
//}
//
////输入一个数，输出是几位数，以及逆向输出每个位数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	int tmp = 0;
//
//	scanf("%d", &n);
//	tmp = n;
//	while (tmp)
//	{
//		count++;
//		tmp /= 10;
//	}
//	printf("%d是一个%d位数\n", n, count);
//	tmp = n;
//	while (tmp)
//	{
//		printf("%d ", tmp % 10);
//		tmp /= 10;
//	}
//
//	return 0;
//}
//
////回文数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	int tmp = 0;
//	int i = 0;
//	int m = 1;
//	
//	scanf("%d", &n);
//	tmp = n;
//	while (tmp)
//	{
//		count++;
//		tmp /= 10;
//	}
//	for (i = 1; i <= count / 2; i++)
//	{
//		int a = (int)pow(10, (count - i));
//		int b = (int)pow(10, i);
//		int c = (int)pow(10, (i - 1));
//		printf("%d %d %d \n", a, b, c);
//			if ((n / a % 10) != ((n % b) / c))
//			{
//				m = 0;
//			}
//	}
//	if (m)
//		printf("是回文数。\n");
//	else
//		printf("不是回文数。\n");
//
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	char sh = 0;
//
//	printf("请输入首个字母：");
//	scanf("%c", &ch);
//	if (ch == 'M' || ch == 'm')
//		printf("Monday——星期一\n");
//	else if (ch == 'f' || ch == 'F')
//		printf("Friday——星期五\n");
//	else if (ch == 'W' || ch == 'w')
//		printf("Wednesday——星期三\n");
//	else if (ch == 'S' || ch == 's')
//	{
//		printf("请输入下一个字母：");
//		scanf("%c", &sh);
//		if (sh == 'A' || sh == 'a')
//			printf("Saturday——星期六\n");
//		else if (sh == 'U' || sh == 'u')
//			printf("Sunday——星期日\n");
//		else
//			printf("输入错误。\n");
//	}
//	else if (ch == 'T' || ch == 't')
//	{
//		printf("请输入下一个字母：");
//		scanf("%c", &sh);
//		if (sh == 'U' || sh == 'u')
//			printf("Tuesday——星期二\n");
//		else if (sh == 'h' || sh == 'H')
//			printf("Thursday——星期四\n");
//		else
//			printf("输入错误。\n");
//	}
//	else
//		printf("输入错误。\n");
//	
//	return 0;
//}