#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#define FILENAME "graduate.dat"
#include "stdlib.h"
#define HH printf("%-10d%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n","学号","姓名","性别","年龄","籍贯","毕业学院","专业班级","毕业方向","电话")
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
	printf("\t\t\t\t --------------毕业生信息管理系统------------- \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  1 添加记录                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  2 显示记录                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  3 修改记录                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  4 删除记录                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  5 查找记录                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  6 排序记录                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  7 保存记录                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t                  0 退出系统                   \n");
	printf("\t\t\t\t|                                             |\n");
	printf("\t\t\t\t --------------------------------------------- \n");
	printf("\t\t\t\t|*********************************************|\n");
	printf("\t\t\t请选择(0-7):");
}
void add(struct graduate stu[])
{
	int i,id=0;
	char quit;
	do
	{
		printf("----------------------------------\n");
		printf("学号：");
		scanf("%d",&id);
		for(i=0;i<n;i++)
		{
			if(id==stu[i].id)
			{
				printf("此学号存在！\n");
				return;
			}
		}
		stu[i].id=id;
		printf("姓名：");
		scanf("%s",&stu[i].name); 
		printf("性别：");
		scanf("%s",&stu[i].sex);
		printf("年龄：");
		scanf("%s",&stu[i].year);
		printf("籍贯：");
		scanf("%s",&stu[i].jiguan);
		printf("毕业院校：");
		scanf("%s",&stu[i].xueyuan);
		printf("专业班级：");
		scanf("%s",&stu[i].banji);
		printf("毕业方向：");
		scanf("%s",&stu[i].fx);
		printf("电话：");
		scanf("%s",&stu[i].phone);
		printf("----------------------------------\n");
		n++;
		printf("是否继续添加?(Y/N)");
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
	printf("修改学生的记录。\n");
	printf("请输入学生的姓名：");
	scanf("%s",&name);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,stu[i].name)==0)
		{
			getchar();
			printf("找到该生的记录，如下所示：\n");
			HH;
			show(stu,i);
			printf("是否修改？(Y/N)\n");
			scanf("%s",&ch);
			if(ch=='Y'||ch=='y')
			{
				getchar();
				printf("姓名：");
				scanf("%s",&stu[i].name);
				printf("性别：");
				scanf("%s",&stu[i].sex);
				printf("年龄：");
				scanf("%s",&stu[i].year);
				printf("籍贯：");
				scanf("%s",&stu[i].jiguan);
				printf("毕业学院：");
				scanf("%s",&stu[i].xueyuan);
				printf("专业班级：");
				scanf("%s",&stu[i].banji);
				printf("电话：");
				scanf("%s",&stu[i].phone);
				printf("毕业方向：");
				scanf("%s",&stu[i].fx);
				printf("修改完毕。\n"); 
			 } 
			 return;
		}
	}
	printf("没有找到该生的记录。\n");
	 
}
void del(struct graduate stu[])
{
	int id,i;
	char ch;
	printf("删除毕业生的记录。\n");
	
	printf("请输入学号：");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
		if(id==stu[i].id)
		{
			getchar();
		    printf("找到该生的记录，如下所示：\n");
		    HH;
		    show(stu,i);
		    printf("是否删除?(Y/N)\n");
		    scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
		    {
			    for(;i<n;i++)
			       stu[i]=stu[i+1];
			    n--;
			    printf("删除成功！"); 	
		    }
        }
				  		
    }	  	    
 printf("没有找到该生的记录！\n");
}
void search(struct graduate stu[])
{
	char name[8];
	int i;
	printf("查找毕业生的纪录。\n");
	printf("请输入毕业生的姓名：");
	scanf("%s",name);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,stu[i].name)==0)
		{
			printf("找到该生的记录，如下所示：\n");
			HH;
			show(stu,i);
			return; 
		}
	}
	printf("没有找到该生的记录。\n");
}
void sort(struct graduate stu[])
{
	int i,j;
	struct graduate t;
	printf("按学号进行排序，");
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
	printf("排序结果如下：\n");
	show_z(stu);
}
void save(struct graduate stu[])
{
	int i;
	FILE* fp;
	fp=fopen("test.txt","w");
	fprintf(fp,"学号,姓名,性别,年龄,籍贯,毕业院校,专业班级,电话,毕业方向\n");
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
				printf("请输入0~6之间的数字\n");
				break;
		}
		if(quit==1)
		break;
		printf("请按任意键返回主菜单！\n");
		getchar();
		getchar(); 
	}
	printf("程序结束！\n");
	return 0;
}




