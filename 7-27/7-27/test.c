#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void enmu()
//{
//	printf("******************************\n");
//	printf("****    1.Add    2.Sub    ****\n");
//	printf("****    3.Mul    4.Div    ****\n");
//	printf("****    0.Exit            ****\n");
//	printf("******************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int set = 0;
//	int m = 0;
//	int n = 0;
//	int (*Fun[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do 
//	{
//		enmu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input > 0 && input < 5)
//		{
//			printf("��������������: ");
//			scanf("%d%d", &m, &n);
//			set = Fun[input](m, n);
//			printf("%d\n", set);
//		}
//		else if (input == 0)
//			printf("�˳���");
//		else
//			printf("�������\n");
//
//	} while (input);
//}
//
//void enmu()
//{
//	printf("******************************\n");
//	printf("****    1.Add    2.Sub    ****\n");
//	printf("****    3.Mul    4.Div    ****\n");
//	printf("****    0.Exit            ****\n");
//	printf("******************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Parr(int (*Fun[])(int, int),int input)
//{
//	int set = 0;
//	int m = 0;
//	int n = 0;
//	printf("��������������: ");
//	scanf("%d%d", &m, &n);
//	set = Fun[input](m, n);
//	printf("%d\n", set);
//}
//int main()
//{
//	int input = 0;
//	int (*Fun[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do 
//	{
//		enmu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input > 0 && input < 5)
//			Parr(Fun,input);
//		else if (input == 0)
//			printf("�˳���");
//		else
//			printf("�������\n");
//
//	} while (input);
//}
//
////һ������������������ֻ����һ�Σ��ҳ�����������
//void one_bit(int arr[], int set)
//{
//	int tmp = 0;
//	int i = 0;
//	int j = 0;
//	int str = 0;
//
//	for (i = 0; i < set; i++)
//	{
//		tmp = arr[i];
//		str = 0;
//		for (j = 0; j < set; j++)
//		{
//			if (tmp == arr[j])
//				str++;
//		}
//		if (str == 1)
//			printf("%d ", tmp);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,4,3,5,8,0,2,1 };
//	int set = sizeof(arr) / sizeof(arr[0]);
//
//	one_bit(arr, set);
//
//	return 0;
//}
//
////һ��Ǯһƿˮ��������ƿ�ӻ�һƿˮ
//int main()
//{
//	int money = 0;
//	int n = 0;
//	int emp_bottle = 0;
//	int sum = 0;
//
//	printf("��������Ҫ��ˮ��Ǯ -> ");
//	scanf("%d", &money);
//	n = money;
//	while (n)
//	{
//		sum += n;
//		emp_bottle += n;
//		n = emp_bottle / 2;
//		emp_bottle %= 2;
//	}
//	printf("һ���ܺ�%dƿ��ˮ��\n", sum);
//
//	return 0;
//}
//
////ģ��stcpy
//void my_strcpy(const char* arr1, char* arr2, int len)
//{
//	int i = 0;
//	int tmp = len;
//
//	for (i = 0; i < tmp; i++)
//	{
//		arr2[i] = arr1[i];
//	}
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[10] = { 0 };
//	int len = strlen(arr1)+1;
//
//	my_strcpy(arr1, arr2, len);
//	printf("%s ", arr2);
//
//
//	return 0;
//}
//
//
////ģ��strcmp
//int main()
//{
//	char s1[22] = { 'h', 'e', 'l', 'l', 'o', ' ', 'b', 'i', 't', '!', ' ' };
//	char s2[] = "i am fine.";
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	int i = 0;
//	int j = 0;
//
//	for (i = len1; i < len1 + 1 + len2; i++)
//	{
//		if (j < len2 + 1)
//		{
//			s1[i] = s2[j];
//			j++;
//		}
//	}
//	printf("%s\n", s1);
//
//	return 0;
//}
//
//ģ��strcmp
//void my_strcmp(char* s1, char* s2)
//{
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	int i = 0;
//	int j = 0;
//
//	for (i = len1; i < len1 + 1 + len2; i++)
//	{
//		if (j < len2 + 1)
//		{
//			*(s1 + i) = *(s2 + j);
//			j++;
//		}
//	}
//}
//int main()
//{
//	char s1[22] = { 'h', 'e', 'l', 'l', 'o', ' ', 'b', 'i', 't', '!', ' ' };
//	char s2[] = "I am fine.";
//
//	my_strcmp(s1, s2);
//	printf("%s\n", s1);
//
//	return 0;
//}