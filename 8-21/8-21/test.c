#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*1��ʵ�����ɸ����������������У�ð������*/
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

/*2����������֪�������������в���ĳһ��Ԫ��*/
void search_pos(int* data, int n)
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
	if (flag) printf("�����ݲ����ڣ�\n");
}

/*3������֪ĳ���������в���һ��Ԫ�أ�Ҫ�������Ա�������*/
void insert(int* data, int n)
{
	int num, wz, i;

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
	printf("����������Ϊ��\n");
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);

	printf("\n");
}
/*4��������*/
int main()
{
	int i = 0;
	int n = 0;
	int x = 0;
	int data[20] = { 0 };

	printf("���������ݳ��ȣ�");
	scanf("%d", &n);
	printf("���������ݣ�");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}
	do
	{
		printf("��ѡ���㷨 ����1��/���ң�2��/���루3����");
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