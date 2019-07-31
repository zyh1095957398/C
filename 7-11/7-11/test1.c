#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int arr[10] = {12,10,20,54,52,63,21,1,2,11};
//	int max = arr[0];
//	int min = 0;

	////交换两个数
	//scanf("%d%d",&a,&b);
	//c = a;
	//a = b;
	//b = c;
	//printf("%d %d\n", a, b);
	//
	////不创建临时变量，实现交换
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("%d %d\n", a, b);

	////最大值
	//for (c = 0; c < 9; c++)
	//{
	//	if (max < arr[c + 1])
	//	{
	//		max = arr[c + 1];
	//	}
	//}
	//printf("%d\n", max);

	////三数比大小
	//scanf("%d%d%d", &a, &b, &c);
	//if (b < c)
	//{
	//	d = b;
	//	b = c;
	//	c = d;
	//}
	//if (a < b)
	//{
	//	d = a;
	//	a = b;
	//	b = d;
	//}
	//if (b < c)
	//{
	//	d = b;
	//	b = c;
	//	c = d;
	//}
	//printf("%d %d %d", a, b, c);

//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//	system("pause");
//	return 0;
//}
//int f(int a)
//{
//	return a % 2;
//}
//int main()
//{
//	int s[8] = { 1,3,5,2,4,6 }, i, d = 0;
//	for(i = 0; f(s[i]); i++) 
//		d += s[i];
//
//	printf("%d\n", d);
//	system("pause");
//	return 0;
//}

int main() 
{
	int  a, b;
	for (a = 1, b = 1; a <= 100; a++) 
	{

		if (b >= 20)
			break;
		if (b % 3 == 1) 
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
}