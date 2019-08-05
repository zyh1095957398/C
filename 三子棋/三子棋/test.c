#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 3

//����
void menu()
{
	printf("************************************\n");
	printf("********     1.��ʼ��Ϸ     ********\n");
	printf("********                    ********\n");
	printf("********     0.�˳���Ϸ     ********\n");
	printf("************************************\n");
}
//��ʼ������
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
//��ӡ����
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
//�ж������Ƿ�����
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
//�����
void player_act(char arr[3][3])
{
	int n = 0;
	int m = 0;

	while (1)
	{
		printf("������Ҫ�������꣺->");
		scanf("%d%d", &n, &m);
		if ((n >= 1 && n <= 3) && (m >= 1 && m <= 3))
		{
			if (arr[--n][--m] == ' ')
			{
				arr[n][m] = '*';
				break;
			}
			else
				printf("��ѡ���λ���������ӣ�������ѡ��\n");
		}
		else
			printf("�������������ѡ��\n");
	}
	print_chess(arr);
}
//������
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
//�ж���Ӯ
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
		printf("����ߣ�\n");
		player_act(arr);
		if (jud_win(arr) == '*')
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (jud_win(arr) == '@')
		{
			printf("����Ӯ��\n");
			break;
		}
		else if (jud_win(arr) == '0')
		{
			printf("���֡�\n");
			break;
		}
		printf("�����ߣ�\n");
		computer_act(arr);
		if (jud_win(arr) == '*')
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (jud_win(arr) == '@')
		{
			printf("����Ӯ��\n");
			break;
		}
		else if (jud_win(arr) == '0')
		{
			printf("���֡�\n");
			break;
		}
		set = chess_full(arr);
	}
	if (set == 0)
	{
		if (jud_win(arr) == '*')
		{
			printf("���Ӯ��\n");
		}
		else if (jud_win(arr) == '@')
		{
			printf("����Ӯ��\n");
		}
		else if (jud_win(arr) == '0')
		{
			printf("���֡�\n");
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��-> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������.\n");
			break;
		}
	} while (input);

	return 0;
}