#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
	int* tmp = nums1;
	int* rmp = nums2;
	int i = (nums1Size + nums2Size) / 2;
	int c = *nums2;
	int a = nums1Size;
	int b = nums2Size;

	if (a == 0)
	{

	}
	while (i--)
	{
		if ((*tmp < *rmp) && a && b)
		{
			c = *tmp++;
			a--;
			continue;
		}
		if ((*tmp > *rmp) && a && b)
		{
			c = *rmp++;
			b--;
			continue;
		}
		if (a == 0)
		{
			c = *rmp++;
		}
		if (b == 0)
		{
			c = *tmp++;
		}
	}
	i = (nums1Size + nums2Size) % 2;
	if (a == 0)
	{
		if (i)
		{
			return *rmp;
		}
		else
		{
			return ((double)c + (double)*rmp) / 2;
		}
	}
	if (b == 0)
	{
		if (i)
		{
			return *tmp;
		}
		else
		{
			return ((double)c + (double)* tmp) / 2;
		}
	}
	if (i)
	{
		int s = *tmp < *rmp ? *tmp : *rmp;
		return (double)s;
	}
	else
	{
		int s = *tmp < *rmp ? *tmp : *rmp;
		return ((double)c + (double)s) / 2;
	}
}
int main()
{
	int nums1[] = { 1, 2 };
	int nums2[] = { 3, 4 };
	int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
	int nums2Size = sizeof(nums2) / sizeof(nums2[0]);

	printf("%.1lf", findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size));

	return 0;
}