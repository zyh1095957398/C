#include <iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;
 
typedef struct Node
{
    int data;
    struct Node *next;
} SqList;
SqList *head;
void Insert()
{
    SqList *s,*p;
    int day=10;
    int peach=1;
    head=(SqList *)malloc(sizeof(SqList));
    p=head;
    while(day>0)
    {
 
        s=(SqList *)malloc(sizeof(SqList));
        s->data=peach;
        p->next=s;
        p=s;
        peach=(peach+1)*2;
        day--;
    }
    p->next=NULL;
    p=head;
    head=head->next;
    free(p);
}
int main()
{
    Insert();
    SqList *p;
    p=head;
    int day=10,sum;
    while(p!=NULL&&day>0)
    {
        printf("第%d天还剩:%d个桃子\n",day,p->data);
        p=p->next;
        day--;
        if(day==1)
       sum=p->data;
    }
 printf("\n猴子共摘了%d个桃子",sum);
    return 0;
}
