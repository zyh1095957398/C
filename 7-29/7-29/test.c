#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////指针笔试题
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d \n", *(a + 1), *(ptr - 1));
//
//	return 0;
//}// 答案 2 , 5
//
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//// p = 0*100000
//int main()
//{
//	printf("%p\n", p);
//	printf("%p\n", p + 0 * 1);
//	printf("%p\n", (unsigned long)p + 0 * 1);
//	printf("%p\n", (unsigned int*)p + 0 * 1);
//
//	return 0;
//}//0*100000  0*0000000000100000  0*00100000
//
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x %x ", ptr1[-1], *ptr2);
//
//	return 0;
//}//4 2 错  4 2000000
//
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//
//	return 0;
//}//0 错 1
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//}//0 0 
//
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d ", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}//10  x 错   10  5
//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}//at  正确

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };//c[3],c[2],c[1],c
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

	return 0;
}//new first point enter