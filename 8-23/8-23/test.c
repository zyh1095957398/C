#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void left(int* data, int n)
{
	int i, j, first, time;
	printf("数据左移的次数：");
	scanf("%d", &time);
	for (j = 0; j < time; j++)
	{
		first = data[0];
		for (i = 01; i < n; i++)
		{
			data[i - 1] = data[i];
		}
		data[n - 1] = first;
	}
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);

}

void right(int* data, int n)
{
	int i, j, first, time;
	printf("数据右移的次数：");
	scanf("%d", &time);
	for (j = 0; j < time; j++)
	{
		first = data[n - 1];
		for (i = n - 1; i > 0; i--)
		{
			data[i] = data[i - 1];
		}
		data[0] = first;
	}
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);
}

void maopao(int* data, int n)
{
	int i, temp, j;
	for (j = 1; j < n; j++)
	{
		for (i = n - 1; i >= j; i--)
		{
			if (data[i - 1] > data[i])
			{
				temp = data[i - 1];
				data[i - 1] = data[i];
				data[i] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);
}

void xuanze(int* data, int n)
{
	int min;
	int min_p;
	int i;
	for (i = 0; i < n - 1; i++)
	{
		min = data[i];
		min_p = i;
		for (int j = i; j < n; j++)
		{

			if (min > data[j])
			{
				min = data[j];
				min_p = j;

			}
		}

		data[min_p] = data[i];
		data[i] = min;
	}
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);
}

void search(int* data, int n)
{
	int flag = 1;
	printf("\n请输入要查找的数据：");
	int num;
	scanf("%d", &num);
	for (int i = 0; i < n; i++)
	{
		if (data[i] == num)
		{
			flag = 0;
			printf("%d\n", num);
			break;
		}
	}
	if (flag) printf("此数据不存在！");

}

int sql(int* data, int n)
{
	int j, i;
	int mid = n >> 1;
	for (i = 0; i < mid; i++)
	{
		j = n - i - 1;
		int temp = data[i];
		data[i] = data[j];
		data[j] = temp;
	}
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);
}

int search_pos(int* data, int n)
{
	int flag = 1;
	printf("\n请输入要查找的数据：");
	int num;
	scanf("%d", &num);
	for (int i = 0; i < n; i++)
	{
		if (data[i] == num)
		{
			flag = 0;
			printf("%d在数组的第%d位\n", num, i + 1);
			break;
		}
	}
	if (flag) printf("此数据不存在！");
}

void zz(int* data, int n)
{
	int x;
	int i, temp, j;
	for (j = 1; j < n; j++)
	{
		for (i = n - 1; i >= j; i--)
		{
			if (data[i - 1] > data[i])
			{
				temp = data[i - 1];
				data[i - 1] = data[i];
				data[i] = temp;
			}
		}
	}
	printf("\n请选择 最小值（1） /最大值（2）：");
	scanf("%d", &x);
	switch (x)
	{
	case  1:printf("最小值为%d", data[0]); break;
	case  2:printf("最大值为%d", data[n - 1]); break;
	}
}

void insert(int* data, int n)
{
	int num, wz, i, g;

	printf("请输入的数字：");
	scanf("%d", &num);
	printf("请输入插入数字的位置：");
	scanf("%d", &wz);

	for (i = n - 1; i >= wz - 1; i--)
	{
		data[i + 1] = data[i];
	}
	data[wz - 1] = num;
	n++;
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);
}

void del(int* data, int n)
{
	int num, p, i;
	printf("请选择一个数据删除：");
	scanf("%d", &num);
	for (int j = 0; j < n; j++)
	{
		if (data[j] == num)
		{
			p = j;
		}
	}
	for (i = p; i < n; i++)
		data[i] = data[i + 1];
	n--;
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);
}

void yidong(int* data, int n)
{
	int x;
	printf("请选择移动方式  左移（1）/右移（2）/逆序（3）：");
	scanf("%d", &x);
	switch (x)
	{
	case  1:left(data, n); break;
	case  2:right(data, n); break;
	case  3:sql(data, n); break;
	}
}

void chazhao(int* data, int n)
{
	int x;
	printf("请选择查找方式  具体数据（1）/数据位置（2）/最值（3）：");
	scanf("%d", &x);
	switch (x)
	{
	case  1:search(data, n); break;
	case  2:search_pos(data, n); break;
	case  3:zz(data, n); break;
	}
}

void paixu(int* data, int n)
{
	int x;
	printf("请选择排序方式  冒泡排序（1）/选择排序（2）：");
	scanf("%d", &x);
	switch (x)
	{
	case  1:maopao(data, n); break;
	case  2:xuanze(data, n); break;
	}
}

int main()
{
	int i = 0;
	int n = 0;
	int x = 0;
	printf("请输入数据长度：");
	scanf("%d", &n);
	int data[20] = { 0 };
	printf("请输入数据：");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}
	printf("请选择算法 移动（1）/排序（2）/查找（3）/插入（4）/删除（5）：");
	scanf("%d", &x);
	switch (x)
	{
	case  1:yidong(data, n); break;
	case  2:paixu(data, n); break;
	case  3:chazhao(data, n); break;
	case  4:insert(data, n); break;
	case  5:del(data, n);; break;
	default:break;
	}
}