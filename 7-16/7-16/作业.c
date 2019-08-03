#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <time.h>

//猜数字游戏
int main()
{
	int n = rand() % 100;
	int m = 0;
	int count = 4;
	while (count)
	{
		printf("你还有%d次猜数字机会：", count);
		scanf("%d", &m);
		if (m > n)
		{
			printf("输入数字大了。\n");
			count--;
		}
		if (m < n)
		{
			printf("输入数字小了。\n");
			count--;
		}
		if (m == n)
		{
			printf("恭喜你，答对了！\n");
			break;
		}
	}
	if(count == 0)
		printf("很遗憾，你没有机会了！\n");

	return 0;
}

//折半查找
int main()
{
	int arr1[10] = { 1,3,5,7,9,11,13,15,17,19 };
	int i;
	int a;
	int len = sizeof(arr1) / sizeof(arr1[0]);

	scanf("%d", &a);
	for (i = 0; i < len;)
	{
		int m = ((len + i) / 2);
		//printf("%d", m);
		if (a == arr1[m])
		{
			printf("%d的位置在数组的下标为%d。\n", a, m);
			return 0;
		}
		if (a > arr1[m])
		{
			i = m+1;
		}
		if (a < arr1[m])
		{
			len = m;
		}
	}
	printf("%d不在数组中。\n", a);
	return -1;
}

//密码
int main()
{
	int n = 123;
	int count = 3;
	int a = 0;

	while (count)
	{
		printf("请输入密码：");
		scanf("%d", &a);
		if (a != n)
			count--;
		else
		{
			printf("登陆成功！");
			break;
		}
	}
	if (count == 0)
		printf("对不起，登陆失败！");

	return 0;
}

int main()
{
	char ch = getchar();
	return 0;
}

int main()
{
	char ch = 0;

	while ((ch = getchar()) != 'EOF')
	{
		if (ch >= 'a' && ch <= 'z')
			printf("%c", ch - 32);
		else if (ch >= 'A' && ch <= 'Z')
			printf("%c", ch + 32);
		else if (ch >= '0' && ch <= '9');
		else
			printf("%c", ch);
	}

	return 0;
}