#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <windows.h>

void menu()
{
	printf("**************************\n");
	printf("*****   1.��ʼ��Ϸ   *****\n");
	printf("*****   0.�˳���Ϸ   *****\n");
	printf("**************************\n");
}

void game()
{
	int set = 0;
	int guess = 0;
	set = rand() % 100;
	while (1)
	{
		printf("���������֣�");
		scanf("%d", &guess);
		if (guess > set)
		{
			printf("������ˣ�\n");
		}
		if (guess < set)
		{
			printf("����С�ˣ�\n");
		}
		if (guess == set)
		{
			printf("��ϲ�㣬����ˣ�\n");
			break;
		}
	}
}

int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
		{
			printf("�������\n");
		}
		break;
		}
	} while (i);

	return 0;
}