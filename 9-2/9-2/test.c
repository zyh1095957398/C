#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void exc1(int l, int r)
{
	int tmp;
	tmp = l;
	l = r;
	r = tmp;
}
void exc2(int* l, int* r)
{
	int* tmp;
	tmp = l;
	l = r;
	r = tmp;
}
void exc3(int* l, int* r)
{
	int tmp;
	tmp = *l;
	*l = *r;
	*r = tmp;
}

int main()
{
	int a = 0, i = 0, j;
	int l = 1, r = 0;
	srand((unsigned int)time(NULL));
	i = 5 + (int)(rand() % 5);
	j = i;
	printf("a:%d,i:%d\n", a, i);
	printf("原始状态:\n");
	printf("l=%d,r=%d\n\n", l, r);
	while (i > 0)
	{
		i--;
		a = 1 + (int)(rand() % 3);
		switch (a)
		{
		case 1:
			exc1(l, r);
			printf("exc1-第%d次交换后的状态\n", j - i);
			printf("l=%d,r=5d\n\n", l, r);
			break;
		case 2:
			exc2(&l, &r);
			printf("exc2-第%d次交换后的状态\n", j - i);
			printf("l=%d,r=%d\n\n", l, r);
			break;
		case 3:
			exc3(&l, &r);
			printf("exc2-第%d次交换后的状态\n", j - i);
			printf("l=%d,r=%d\n\n", l, r);
			break;
		default:
			break;
		}
	}

	return 0;
}

