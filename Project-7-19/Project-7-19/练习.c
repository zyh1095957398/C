#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

////���ӳ���
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
//	printf("������������");
//	scanf("%d", &n);
//	eat_peach(n-1,sum);
//
//  return 0;
//}

////ƹ�������
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
////2/1+3/2+5/3....��ǰn���
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
////ǰn��׳�֮��
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
////�ַ�������
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
////�������䣬ÿ���˶���ǰһ���˴�2��
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
//	printf("������������");
//	scanf("%d", &n);
//	printf("�������һ���˵����䣺");
//	scanf("%d", &age);
//	printf("���������������Ϊ%d\n",max_age(n, age));
//
//	return 0;
//}
//
////����һ����������Ǽ�λ�����Լ��������ÿ��λ��
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
//	printf("%d��һ��%dλ��\n", n, count);
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
////������
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
//		printf("�ǻ�������\n");
//	else
//		printf("���ǻ�������\n");
//
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	char sh = 0;
//
//	printf("�������׸���ĸ��");
//	scanf("%c", &ch);
//	if (ch == 'M' || ch == 'm')
//		printf("Monday��������һ\n");
//	else if (ch == 'f' || ch == 'F')
//		printf("Friday����������\n");
//	else if (ch == 'W' || ch == 'w')
//		printf("Wednesday����������\n");
//	else if (ch == 'S' || ch == 's')
//	{
//		printf("��������һ����ĸ��");
//		scanf("%c", &sh);
//		if (sh == 'A' || sh == 'a')
//			printf("Saturday����������\n");
//		else if (sh == 'U' || sh == 'u')
//			printf("Sunday����������\n");
//		else
//			printf("�������\n");
//	}
//	else if (ch == 'T' || ch == 't')
//	{
//		printf("��������һ����ĸ��");
//		scanf("%c", &sh);
//		if (sh == 'U' || sh == 'u')
//			printf("Tuesday�������ڶ�\n");
//		else if (sh == 'h' || sh == 'H')
//			printf("Thursday����������\n");
//		else
//			printf("�������\n");
//	}
//	else
//		printf("�������\n");
//	
//	return 0;
//}