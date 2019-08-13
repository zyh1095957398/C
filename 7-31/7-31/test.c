#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

////strlen strcpy strcmp strcat strstr strchr
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	char* tmp = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return tmp;
//}
//char* my_strcat(char* dest, const char* src)
//{
//	char* tmp = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return tmp;
//}
//char* my_strstr(char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* start = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	if (*s2 == '\0')
//		return (char*)start;
//
//	while (*start != '\0')
//	{
//		s2 = str2;
//		s1 = start;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)start;
//		}
//		start++;
//	}
//	return NULL;
//}
//char* my_strchr(const char* str, int c)
//{
//	char tmp = (char)c;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		if (tmp == *str)
//			return (char*)str;
//		str++;
//	}
//	return NULL;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (*str1 && *str2 && *str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[30] = "hhhhhello bit!";
//	char arr2[] = "hello";
//	int set = my_strlen(arr1);
//
//	//my_strcpy(arr1,arr2);
//	//my_strcat(arr1, arr2);
//	//printf("set = %d\n", set);
//
//	//set = my_strcmp(arr1, arr2);
//	/*if (set > 0)
//	{
//		printf("str1 > str2");
//	}
//	else if (set < 0)
//	{
//		printf("str1 < str2");
//	}
//	else
//	{
//		printf("str1 == str2");
//	}*/
//
//	/*char* s = my_strstr(arr1, arr2);
//	if (s == NULL)
//		printf("不存在。\n");
//	else
//		printf("%s", s);*/
//
//	/*char* s = my_strchr(arr1, 'q');
//	if (s == NULL)
//		printf("不存在。\n");
//	else
//		printf("%s", s); */
//
//	return 0;
//}

//strncpy strncat strncmp
char* my_strncpy(char* dest, const char* src, size_t num)
{
	char* tmp = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (num--)
	{
		if (*dest++ = *src++)
		{
			;
		}
		else
			*dest++ = '\0';
	}
	return tmp;
}
char* my_strncat(char* dest, const char* src, size_t num)
{
	char* tmp = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (*dest)
	{
		dest++;
	}
	while (num)
	{
		if (!*src)
			break;
		*dest++ = *src++;
		num--;
	}
	return tmp;
}
int my_strncmp(const char* str1, const char* str2, size_t num)
{
	assert(str1 != NULL);
	assert(str2 != NULL);

	while (num)
	{
		if (*str1 && *str2 && *str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
			return *str1 - *str2;
		num--;
	}
	return 0;
}
int main()
{
	char arr1[20] = "hello world ";
	char arr2[] = "hez";
	int set = 0;
	int n = 0;

	//my_strncpy(arr1, arr2, 3);
	my_strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	/*printf("请输入字符个数：");
	scanf("%d", &n);
	set = my_strncmp(arr1, arr2, n);
	if (set > 0)
		printf("在%d个字符中，arr1 > arr2。", n);
	else if (set < 0)
		printf("在%d个字符中，arr1 < arr2。", n);
	else
		printf("在%d个字符中，arr1 = arr2。", n);*/

	return 0;
}
//
////字符分类函数
////iscntrl    任何控制字符
////isspace    空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
////isdigit    十进制数字 0~9
////isxdigit   十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
////islower    小写字母a~z
////isupper    大写字母A~Z
////isalpha    字母a~z或A~Z
////isalnum    字母或者数字，a~z, A~Z, 0~9
////ispunct    标点符号，任何不属于数字或者字母的图形字符（可打印）
////isgraph    任何图形字符
////isprint    任何可打印字符，包括图形字符和空白字符
//
//int main()
//{
//	//printf("%d", isspace('\f'));
//	printf("%c\n", tolower('A'));
//	printf("%c\n", toupper('a'));
//}
//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (n)
//	{
//		if (*dest == *src)
//		{
//
//		}
//	}
//
//}
//int main()
//{
//    char arr1[20] = "hello world ";
//	char arr2[] = "hiz42342342342342121212313";
//	int set = 0;
//	int n = 0;
//	printf("请输入字符个数：");
//	scanf("%d", &n);
//	memcpy(arr1, arr2, n);
//	printf("%s", arr1);
//
//	return 0;
//}
//
////memcpy memmove memcat memcmp
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* tmp = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (count--)
//	{
//		*((char*)dest) = *((char*)src);
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return tmp;
//}
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* tmp = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*((char*)dest) = *((char*)src);
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return tmp;
//}
//int my_memcmp(const void* str1, const void* str2, size_t count)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (count--)
//	{
//		if (*(char*)str1 == *(char*)str2)
//		{
//			((char*)str1)++;
//			((char*)str2)++;
//		}
//		else
//			return *(char*)str1 - *(char*)str2;
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4 };
//	int arr2[] = { 1,2,4,3 };
//	int n = 0;
//
//	/*printf("请输入字节个数：");
//	scanf("%d", &n);*/
//	//my_memcpy(arr1, arr2, n);
//	//my_memmove(arr1 + 2, arr1,16);
//	//memcat(arr1, arr2, 16);
//	printf("%d", my_memcmp(arr2, arr1, 11));
//
//	return 0;
//}