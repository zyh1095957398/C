#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//�ж��ֽڴ洢�ķ�ʽ ���orС��
//void my_bit_stor()
//{
//	int i = 1;
//	char* pc = &i;
//
//	if (*pc == 1)
//	{
//		printf("С�ˡ�\n");
//	}
//	if (*pc == 0)
//	{
//		printf("��ˡ�\n");
//	}
//}
//union Un
//{
//	int a;
//	char c;
//};
//void my_bit_stor()
//{
//	union Un str;
//	str.a = 1;
//
//	if(str.c == 1)
//		printf("С�ˡ�\n");
//	if(str.c == 0)
//		printf("��ˡ�\n");
//}
//int main()
//{
//	my_bit_stor();
//
//	return 0;
//}
//
////����
//void left_move(char* arr, int len, int n)
//{
//	char tmp = 0;
//	int i = 0;
//	int m = 0;
//
//	for (m = 0; m < n; m++)
//	{
//		tmp = arr[0];
//		for (i = 0; i < len; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDE";
//	int n = 0;
//	int len = strlen(arr);
//
//	scanf("%d", &n);
//	left_move(arr, len, n);
//	printf("%s", arr);
//
//	return 0;
//}
//
//�ж�һ���ַ����Ƿ�����һ���ַ����ƶ�����ַ���
//int opp_move(char* s1, char* s2, int len)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int n = 0;
//	int count = 0;
//
//	for (i = 0; i < len; i++)
//	{
//		count = 0;
//		for (j = 0; j < len; j++)
//		{
//			count = s1[j] ^ s2[j];
//		}
//		if (count == 0)
//			return n;
//		else
//		{
//			tmp =s1[0];
//			for (j= 0; j < len; j++)
//			{
//				s1[j] = s1[j + 1];
//			}
//			s1[len - 1] = tmp;
//		}
//		n++;
//	}
//
//	return 0;
//}
//int main()
//{
//	char s1[] = "ABCDEA";
//	char s2[] = "AABCDE";
//	int len = strlen(s1);
//	int n = 0;
//
//	n = opp_move(s1, s2, len);
//	if(n == 0)
//		printf("s1�޷����Ʊ��s2");
//	else
//		printf("s1����%d���s2", n);
//
//	return 0;
//}
