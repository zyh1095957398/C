#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#define FILENAME "graduate.dat"
#include "stdlib.h"
#define HH printf("%-10d%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n","ѧ��","����","�Ա�","����","����","��ҵѧԺ","רҵ�༶","��ҵ����","�绰")
struct graduate             
{
    int id;
    char name[8];
	char sex[20];
	char year[20];
    char xueyuan[20];
    char banji[20];
	char jiguan[20];
	char phone[20];
	char fx[20]; 
};
static int n=0;
void menu();
void add(struct graduate stu[]);
void show(struct graduate stu[],int i);
void modify(struct graduate stu[]);
void del(struct graduate stu[]);
void search(struct graduate stu[]);
void sort(struct graduate stu[]);
void save(struct graduate stu[]);
void menu()
{
	system("cls");
	system("color 0a");
	printf("\n");
	printf("\t\t\t\t|*********************************************|\n");
	printf("\t\t\t\t --------------��ҵ����Ϣ����ϵͳ------------- \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  1 ��Ӽ�¼                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  2 ��ʾ��¼                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  3 �޸ļ�¼                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  4 ɾ����¼                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  5 ���Ҽ�¼                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  6 �����¼                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  7 �����¼                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  0 �˳�ϵͳ                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t --------------------------------------------- \n");
	printf("\t\t\t\t|*********************************************|\n");
	printf("\t\t\t��ѡ��(0-7):");
}
void add(struct graduate stu[])
{
	int i,id=0;
	char quit;
	do
	{
		printf("----------------------------------\n");
		printf("ѧ�ţ�");
		scanf("%d",&id);
		for(i=0;i<n;i++)
		{
			if(id==stu[i].id)
			{
				printf("��ѧ�Ŵ��ڣ�\n");
				return;
			}
		}
		stu[i].id=id;
		printf("������");
		scanf("%s",&stu[i].name); 
		printf("�Ա�");
		scanf("%s",&stu[i].sex);
		printf("���䣺");
		scanf("%s",&stu[i].year);
		printf("���᣺");
		scanf("%s",&stu[i].jiguan);
		printf("��ҵԺУ��");
		scanf("%s",&stu[i].xueyuan);
		printf("רҵ�༶��");
		scanf("%s",&stu[i].banji);
		printf("��ҵ����");
		scanf("%s",&stu[i].fx);
		printf("�绰��");
		scanf("%s",&stu[i].phone);
		printf("----------------------------------\n");
		n++;
		printf("�Ƿ�������?(Y/N)");
		scanf("\t%c",&quit);
	} while(quit!='N'); 
}
void show(struct graduate stu[],int i)
{
	printf("%-10d",stu[i].id);
	printf("%-10s",stu[i].name);
	printf("%-10s",stu[i].sex);
	printf("%-10s",stu[i].year);
	printf("%-10s",stu[i].jiguan);
	printf("%-10s",stu[i].xueyuan);
	printf("%-10s",stu[i].banji);
	printf("%-10s",stu[i].fx);
	printf("%-10s\n",stu[i].phone);
}	
void show_z(struct graduate stu[])
{
	HH;
	for(int i=0;i<n;i++)show(stu,i);
}
/*void show_z(struct graduate stu[])
{
	int i;
	HH;
	for(i=0;i<n;i++)
	{
		show(stu,i);    	
	}
}*/
void modify(struct graduate stu[])
{
    char name[8],ch;
	int i;
	printf("�޸�ѧ���ļ�¼��\n");
	printf("������ѧ����������");
	scanf("%s",&name);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,stu[i].name)==0)
		{
			getchar();
			printf("�ҵ������ļ�¼��������ʾ��\n");
			HH;
			show(stu,i);
			printf("�Ƿ��޸ģ�(Y/N)\n");
			scanf("%s",&ch);
			if(ch=='Y'||ch=='y')
			{
				getchar();
				printf("������");
				scanf("%s",&stu[i].name);
				printf("�Ա�");
				scanf("%s",&stu[i].sex);
				printf("���䣺");
				scanf("%s",&stu[i].year);
				printf("���᣺");
				scanf("%s",&stu[i].jiguan);
				printf("��ҵѧԺ��");
				scanf("%s",&stu[i].xueyuan);
				printf("רҵ�༶��");
				scanf("%s",&stu[i].banji);
				printf("�绰��");
				scanf("%s",&stu[i].phone);
				printf("��ҵ����");
				scanf("%s",&stu[i].fx);
				printf("�޸���ϡ�\n"); 
			 } 
			 return;
		}
	}
	printf("û���ҵ������ļ�¼��\n");
	 
}
void del(struct graduate stu[])
{
	int id,i;
	char ch;
	printf("ɾ����ҵ���ļ�¼��\n");
	
	printf("������ѧ�ţ�");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
		if(id==stu[i].id)
		{
			getchar();
		    printf("�ҵ������ļ�¼��������ʾ��\n");
		    HH;
		    show(stu,i);
		    printf("�Ƿ�ɾ��?(Y/N)\n");
		    scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
		    {
			    for(;i<n;i++)
			       stu[i]=stu[i+1];
			    n--;
			    printf("ɾ���ɹ���"); 	
		    }
        }
				  		
    }	  	    
 printf("û���ҵ������ļ�¼��\n");
}
void search(struct graduate stu[])
{
	char name[8];
	int i;
	printf("���ұ�ҵ���ļ�¼��\n");
	printf("�������ҵ����������");
	scanf("%s",name);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,stu[i].name)==0)
		{
			printf("�ҵ������ļ�¼��������ʾ��\n");
			HH;
			show(stu,i);
			return; 
		}
	}
	printf("û���ҵ������ļ�¼��\n");
}
void sort(struct graduate stu[])
{
	int i,j;
	struct graduate t;
	printf("��ѧ�Ž�������");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(stu[i].id>stu[j].id)
		    {
			  t=stu[i];
			  stu[i]=stu[j];
			  stu[j]=t;
		    }
		}	
	} 
	printf("���������£�\n");
	show_z(stu);
}
void save(struct graduate stu[])
{
	int i;
	FILE* fp;
	fp=fopen("test.txt","w");
	fprintf(fp,"ѧ��,����,�Ա�,����,����,��ҵԺУ,רҵ�༶,�绰,��ҵ����\n");
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%-10d %-10s %-10s %-10s %-10s %-15s %-10s %-10s %-10s\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].year,stu[i].jiguan,stu[i].xueyuan,stu[i].banji,stu[i].phone,stu[i].fx);
	}
    fclose(fp);
}
void duru(struct graduate stu[])
{
	FILE* fp;
	fp=fopen("test.txt","r");
	char s[256];
	fgets(s,256,fp);
	int i=0;
	
	while(fscanf(fp,"%d%s%s%s%s%s%s%s%s",&stu[i].id,stu[i].name,stu[i].sex,stu[i].year,stu[i].jiguan,stu[i].xueyuan,stu[i].banji,stu[i].phone,stu[i].fx)!=EOF)	
	{
		i++;
	}
	n=i;
   fclose(fp);
}

int main()
{

	struct graduate stu[50];
	int select,quit=0;
	duru(stu);
	while(1)
	{
		menu();
		scanf("%d",&select);
		switch(select)
		{
			
			case 1:add(stu);break;
			case 2:show_z(stu);break;
			case 3:modify(stu);break;
			case 4:del(stu);break;
			case 5:search(stu);break;
			case 6:sort(stu);break;
			case 7:save(stu);break;
			case 0:quit=1;break;
			default:
				printf("������0~6֮�������\n");
				break;
		}
		if(quit==1)
		break;
		printf("�밴������������˵���\n");
		getchar();
		getchar(); 
	}
	printf("���������\n");
	return 0;
}




