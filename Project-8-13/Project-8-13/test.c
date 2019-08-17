//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int int_int1(int* arr, int sz, int a)
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (a < arr[0])
//			return 0;
//		else if (a > arr[sz - 1])
//			return sz;
//		else if (a > arr[i - 1] && a <= arr[i + 1])
//			return i + 1;
//	}
//	return i;
//}
//int int_int(int* arr, int sz, int a)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (a <= *arr)
//			return 0;
//		else if (a > * (arr + sz - 1))
//			return sz;
//		else if (a > * (arr + i - 1) && a <= *(arr + i + 1))
//			return i + 1;
//	}
//}
//int main()
//{
//	int arr[5] = { 1,3,5,6,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 7;
//	printf("%d\n", int_int(arr, sz, a));
//
//	return 0;
//}

#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {

	int i = 0;

	for (i = 0; i < numsSize - 1; i++)
	{
		if (target <= *(nums + i))
			return i;
	}
	if (target > nums[i])
		return i + 1;
}
int main()
{
	int arr[5] = { 1,3,5,6,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = 77;
	int s = searchInsert(arr, sz, a);
		printf("%d\n", s);

	return 0;
}
