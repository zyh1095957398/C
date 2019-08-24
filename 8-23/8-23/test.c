#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void left(int* data, int n)
{
	int i, j, first, time;
	printf("�������ƵĴ�����");
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
	printf("�������ƵĴ�����");
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
	printf("\n������Ҫ���ҵ����ݣ�");
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
	if (flag) printf("�����ݲ����ڣ�");

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
	printf("\n������Ҫ���ҵ����ݣ�");
	int num;
	scanf("%d", &num);
	for (int i = 0; i < n; i++)
	{
		if (data[i] == num)
		{
			flag = 0;
			printf("%d������ĵ�%dλ\n", num, i + 1);
			break;
		}
	}
	if (flag) printf("�����ݲ����ڣ�");
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
	printf("\n��ѡ�� ��Сֵ��1�� /���ֵ��2����");
	scanf("%d", &x);
	switch (x)
	{
	case  1:printf("��СֵΪ%d", data[0]); break;
	case  2:printf("���ֵΪ%d", data[n - 1]); break;
	}
}

void insert(int* data, int n)
{
	int num, wz, i, g;

	printf("����������֣�");
	scanf("%d", &num);
	printf("������������ֵ�λ�ã�");
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
	printf("��ѡ��һ������ɾ����");
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
	printf("��ѡ���ƶ���ʽ  ���ƣ�1��/���ƣ�2��/����3����");
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
	printf("��ѡ����ҷ�ʽ  �������ݣ�1��/����λ�ã�2��/��ֵ��3����");
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
	printf("��ѡ������ʽ  ð������1��/ѡ������2����");
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
	printf("���������ݳ��ȣ�");
	scanf("%d", &n);
	int data[20] = { 0 };
	printf("���������ݣ�");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}
	printf("��ѡ���㷨 �ƶ���1��/����2��/���ң�3��/���루4��/ɾ����5����");
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