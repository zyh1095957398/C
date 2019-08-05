#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 3

//界面
void menu()
{
	printf("************************************\n");
	printf("********     1.开始游戏     ********\n");
	printf("********                    ********\n");
	printf("********     0.退出游戏     ********\n");
	printf("************************************\n");
}
//初始化棋盘
void init_chess(char arr[3][3])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
//打印棋盘
void print_chess(char arr[3][3])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < MAX; i++)
	{
		printf("\n");
		for (j = 0; j < MAX; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < MAX-1)
				printf("|");
		}
		printf("\n");
		if (i < MAX - 1)
		{
			for (j = 0; j < MAX - 2; j++)
			{
				printf("____________");
			}
			printf("\n");
		}
	}
	printf("\n");
}
//判断棋子是否下满
int chess_full(char arr[3][3])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			if (arr[i][j] == ' ')
				return 1;
		}
	}
	return 0;
}
//玩家走
void player_act(char arr[3][3])
{
	int n = 0;
	int m = 0;

	while (1)
	{
		printf("请输入要做的坐标：->");
		scanf("%d%d", &n, &m);
		if ((n >= 1 && n <= 3) && (m >= 1 && m <= 3))
		{
			if (arr[--n][--m] == ' ')
			{
				arr[n][m] = '*';
				break;
			}
			else
				printf("您选择的位置已有棋子，请重新选择。\n");
		}
		else
			printf("输入错误，请重新选择。\n");
	}
	print_chess(arr);
}
//电脑走
void computer_act(char arr[3][3])
{
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '@';
			break;
		}
	}
	print_chess(arr);
}
//判断输赢
char jud_win(char arr[3][3])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < MAX; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][0] != ' ')
		{
			return arr[i][0];
		}
	}
	for (j = 0; j < MAX; j++)
	{
		if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j] && arr[0][j] != ' ')
		{
			return arr[0][j];
		}
	}
	if ((arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[1][1] != ' ') ||
		(arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[1][1] != ' '))
	{
		return arr[1][1];
	}
	return 0;
}
void game()
{
	int set = 0;
	char arr[MAX][MAX] = { 0 };

	init_chess(arr);
	print_chess(arr);
	set = chess_full(arr);

	while (set)
	{
		printf("玩家走：\n");
		player_act(arr);
		if (jud_win(arr) == '*')
		{
			printf("玩家赢。\n");
			break;
		}
		else if (jud_win(arr) == '@')
		{
			printf("电脑赢。\n");
			break;
		}
		else if (jud_win(arr) == '0')
		{
			printf("死局。\n");
			break;
		}
		printf("电脑走：\n");
		computer_act(arr);
		if (jud_win(arr) == '*')
		{
			printf("玩家赢。\n");
			break;
		}
		else if (jud_win(arr) == '@')
		{
			printf("电脑赢。\n");
			break;
		}
		else if (jud_win(arr) == '0')
		{
			printf("死局。\n");
			break;
		}
		set = chess_full(arr);
	}
	if (set == 0)
	{
		if (jud_win(arr) == '*')
		{
			printf("玩家赢。\n");
		}
		else if (jud_win(arr) == '@')
		{
			printf("电脑赢。\n");
		}
		else if (jud_win(arr) == '0')
		{
			printf("死局。\n");
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：-> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏。\n");
			break;
		default:
			printf("输入错误.\n");
			break;
		}
	} while (input);

	return 0;
}