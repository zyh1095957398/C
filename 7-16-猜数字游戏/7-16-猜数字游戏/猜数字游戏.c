#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <windows.h>

void menu()
{
	printf("**************************\n");
	printf("*****   1.开始游戏   *****\n");
	printf("*****   0.退出游戏   *****\n");
	printf("**************************\n");
}

void game()
{
	int set = 0;
	int guess = 0;
	set = rand() % 100;
	while (1)
	{
		printf("请输入数字：");
		scanf("%d", &guess);
		if (guess > set)
		{
			printf("输入大了！\n");
		}
		if (guess < set)
		{
			printf("输入小了！\n");
		}
		if (guess == set)
		{
			printf("恭喜你，答对了！\n");
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
		printf("请选择：>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏。\n");
			break;
		default:
		{
			printf("输入错误。\n");
		}
		break;
		}
	} while (i);

	return 0;
}