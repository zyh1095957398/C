#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//�ɿس˷���
int mul(int m)
{
	int i = 0;
	int j = 0;
	int n = m;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-4d", j, i, j * i);
		}
		printf("\n");
	}

	return 0;
}
int main()
{
	int k = 0;

	printf("�����룺");
	scanf("%d", &k);
	printf("�˷���Ϊ��>\n");
	mul(k);

	return 0;
}

//�ú���ʵ����������
void exchange(int* m, int* n)
{
	int tmp = *m;
	*m = *n;
	*n = tmp;
}
int main()
{
	int i = 10;
	int j = 20;
	printf("%d %d\n", i, j);
	exchange(&i, &j);
	printf("%d %d\n", i, j);

	return 0;
}

//�ú����ж�����
int leep_year(int n)
{
	if (n % 400 == 0 || n % 4 == 0 && n % 100 != 0)
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;

	for (i = 1000; i <= 2000; i++)
	{
		if (leep_year(i))
			printf("%d ", i);
	}
	
	return 0;
}

//�ú���ʵ�����������Լ��������
void reverse(int* ptr, int m)
{
	int i = 0;
	int j = m;
	int tmp = 0;

	for (i = 0; i < j / 2; i++)
	{
		tmp = ptr[i];
		ptr[i] = ptr[j-i-1];
		ptr[j - i - 1] = tmp;
	}
}

void inti(int* str, int m)
{
	int i = 0;
	int j = m;

	for (i = 0; i < j; i++)
	{
		str[i] = i;
	}
}

void empty(int* str,int m)
{
	int i = 0;
	int j = m;

	for (i = 0; i < j; i++)
	{
		str[i] = 0;
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int set = sizeof(arr) / sizeof(arr[0]);

	printf("�����ʼ����>");
	inti(arr,set);
	for (i = 0; i < set; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	reverse(arr, set);
	printf("�������ã�> ");
	for (i = 0; i < set; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	empty(arr, set);
	printf("������飺> ");
	for (i = 0; i < set; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

//�ú����ж�����
int is_prime(int m)
{
	int n = m;
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
int main()
{
	int i = 0;

	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}