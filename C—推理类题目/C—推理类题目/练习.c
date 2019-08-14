#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int pencil_box = 0;
//
//	for (pencil_box = 0; pencil_box < 3; pencil_box++)
//	{
//		if ((pencil_box != 0) +
//			(pencil_box != 1) +
//			(pencil_box == 0) == 1)
//		{
//			if (pencil_box == 0)
//				printf("铅笔盒在左边抽屉。\n");
//			if (pencil_box == 1)
//				printf("铅笔盒在中间抽屉。\n");
//			if (pencil_box == 2)
//				printf("铅笔盒在右边抽屉。\n");
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a, b, c, d, l1, l2, l3;
//
//	for (a = 1; a <= 4; a++)
//	{
//		for (b = 1; b <= 4; b++)
//		{
//			if (a == b)
//				continue;
//			for (c = 1; c <= 4; c++)
//			{
//				if (a == c || b == c)
//					continue;
//				d = 1 + 2 + 3 + 4 - a - b - c;
//				l1 = ((c == 1) ^ (a == 3));
//				l2 = ((b == 1) ^ (d == 4));
//				l3 = ((d == 2) ^ (c == 3));
//				if (l1 + l2 + l3 == 3 && a + b + c + d == 10)
//					printf("A的名次为%d\nB的名次为%d\nC的名次为%d\nD的名次为%d\n"
//						, a, b, c, d);
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;//a 亚洲
//	int b = 0;//b 欧洲
//	int c = 0;//c 美洲
//	int d = 0;//d 非洲
//	int e = 0;//e 大洋洲
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if(((b == 3) ^ (c == 2)) +
//						   ((a == 4) ^ (e == 2)) +
//						   ((a == 1) ^ (d == 5)) +
//						   ((d == 4) ^ (e == 3)) +
//						   ((b == 2) ^ (c == 5)) == 5)
//						{
//							if(a*b*c*d*e == 120)
//								printf("%d 代表 -> 亚洲\n%d 代表 -> 欧洲\n%d 代表 -> 美洲\n%d 代表 -> 非洲\n%d 代表 -> 大洋洲\n"
//									, a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;//甲
//	int b = 0;//乙
//	int c = 0;//丙
//
//	for (a = 1; a <= 3; a++)
//	{
//		for (b = 1; b <= 3; b++)
//		{
//			for (c = 1; c <= 3; c++)
//			{
//				if (a != 3 && c != 1 && c != 3)
//				{
//					if (a * b * c == 6)
//					{
//						printf("甲得到 —> %d\n乙得到 —> %d\n丙得到 —> %d\n"
//							, a, b, c);
//						printf("1——足球票\n2——拳击票\n3——篮球票\n");
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

