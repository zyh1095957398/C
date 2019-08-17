#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

////字符串逆置
//void exchange_character(char* str)
//{
//	int tmp = str[0];
//	int set = strlen(str);
//
//	str[0] = str[set - 1];
//	str[set - 1] = '\0';
//	if (strlen(str + 1) >= 2)
//		exchange_character(str + 1);
//	str[set - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//
//	exchange_character(arr);
//	printf("%s", arr);
//	return 0;
//}
//
////计算字符串长度 第三种方法
//int my_strlen(char* str)
//{
//	char* tmp = &str[0];
//	
//	while (*str != '\0')
//		str ++;
//		
//	return str - tmp;
//}
//int main()
//{
//	char arr[] = "abcdefghijklmnopqrstuvwxyz";
//
//	printf("%d", my_strlen(arr));
//	return 0;
//}

