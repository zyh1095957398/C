#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <time.h>

//��������Ϸ
int main()
{
	int n = rand() % 100;
	int m = 0;
	int count = 4;
	while (count)
	{
		printf("�㻹��%d�β����ֻ��᣺", count);
		scanf("%d", &m);
		if (m > n)
		{
			printf("�������ִ��ˡ�\n");
			count--;
		}
		if (m < n)
		{
			printf("��������С�ˡ�\n");
			count--;
		}
		if (m == n)
		{
			printf("��ϲ�㣬����ˣ�\n");
			break;
		}
	}
	if(count == 0)
		printf("���ź�����û�л����ˣ�\n");

	return 0;
}

//�۰����
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
			printf("%d��λ����������±�Ϊ%d��\n", a, m);
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
	printf("%d���������С�\n", a);
	return -1;
}

//����
int main()
{
	int n = 123;
	int count = 3;
	int a = 0;

	while (count)
	{
		printf("���������룺");
		scanf("%d", &a);
		if (a != n)
			count--;
		else
		{
			printf("��½�ɹ���");
			break;
		}
	}
	if (count == 0)
		printf("�Բ��𣬵�½ʧ�ܣ�");

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