#ifndef GRADUATE
#define GRADUATE
#include "stdio.h"
#include "string.h"
#define FILENAME "graduate.dat"
#include "stdlib.h"
#define HH printf("%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n",\
                    "ѧ��","����","�Ա�","����","����","��ҵѧԺ","רҵ�༶","��ҵ����","�绰")
struct graduate             
{
    int id;
    char name[8];
	char sex[20];
	int year[20];
    char xueyuan[20];
    char banji[20];
	char jiguan[20];
	char fx[20];
	char phone[20]; 
};
static int n;
void menu();
void add(struct graduate stu[]);
void show(struct graduate stu[],int i);
void showAll(struct graduate stu[]);
void modify(struct graduate stu[]);
void del(struct graduate stu[]);
void search(struct graduate stu[]);
void sort(struct graduate stu[]);

#endif 

