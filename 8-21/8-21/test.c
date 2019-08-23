#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*1、实现若干个整数数据升序排列（冒泡排序）*/
void maopao(int data[], int n)
{
	int i, temp, j;
	for (j = 1; j < n; j++)
	{
		for (i = 0; i < n - j; i++)
		{
			if (data[i] > data[i + 1])
			{
				temp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);

	printf("\n");
}

/*2、从若干已知有序整型数据中查找某一个元素*/
void search_pos(int* data, int n)
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
	if (flag) printf("此数据不存在！\n");
}

/*3、在已知某有序数组中插入一个元素，要求插入后仍保持有序*/
void insert(int* data, int n)
{
	int num, wz, i;

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
	printf("插入后的数组为：\n");
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);

	printf("\n");
}
/*4、主函数*/
int main()
{
	int i = 0;
	int n = 0;
	int x = 0;
	int data[20] = { 0 };

	printf("请输入数据长度：");
	scanf("%d", &n);
	printf("请输入数据：");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}
	do
	{
		printf("请选择算法 排序（1）/查找（2）/插入（3）：");
		scanf("%d", &x);
		switch (x)
		{
		case  1:
			maopao(data, n);
			break;
		case  2:
			search_pos(data, n);
			break;
		case  3:
			insert(data, n);
			break;
		}
	} while (x > 0 && x < 4);
}