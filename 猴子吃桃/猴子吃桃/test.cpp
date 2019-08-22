#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;

////C++
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//} SqList;
//
//SqList* head;
//
//void Insert()
//{
//	SqList* s, * p;
//	int day = 10;
//	int peach = 1;
//	head = (SqList*)malloc(sizeof(SqList));
//	p = head;
//	while (day > 0)
//	{
//
//		s = (SqList*)malloc(sizeof(SqList));
//		s->data = peach;
//		p->next = s;
//		p = s;
//		peach = (peach + 1) * 2;
//		day--;
//	}
//	p->next = NULL;
//	p = head;
//	head = head->next;
//	free(p);
//}
//
//int main()
//{
//	Insert();
//	SqList* p;
//	p = head;
//	int day = 10, sum;
//	while (p != NULL && day > 0)
//	{
//		printf("第%d天还剩:%d个桃子\n", day, p->data);
//		p = p->next;
//		day--;
//		if (day == 1)
//			sum = p->data;
//	}
//	printf("\n猴子共摘了%d个桃子", sum);
//	return 0;
//}

//C
int Insert(int i, int count)
{
	if (i > 1)
		return Insert(i - 1, 2 * (count + 1));
	else
		return count;
}
int main()
{
	int day = 0;

	printf("请输入天数：");
	scanf("%d", &day);

	printf("猴子一共摘了%d个桃子\n", Insert(day, 1));

	return 0;
}