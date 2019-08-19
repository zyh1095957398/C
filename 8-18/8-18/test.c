#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int* twoSum(int* nums, int numsSize, int target, int* returnSize)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		for (j = i + 1; j < numsSize; j++)
//		{
//			if ((*(nums + i) + *(nums + j)) == target)
//			{
//				*returnSize = i;
//				*(returnSize + 1) = j;
//			}
//		}
//	}
//	return returnSize;
//}
//
//int main()
//{
//	int nums[] = { 2,7,11,15 };
//	int target = 9;
//	int returnSize[2] = { 0 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int i = 0;
//
//	twoSum(nums, numsSize, target, returnSize);
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d ", returnSize[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

int lengthOfLongestSubstring(char* s) {
	int count = 1;
	int i = 0;

	if (*s)
	{
		while (*(s + i))
		{
			i++;
			for (int j = 0; j < i; j++)
			{
				if (*(s + j) == *(s + i))
				{
					s = s + 1;
					if (i > count)
					{
						count = i;
					}
					i = 0;
					break;
				}
			}
		}
		if (count >= i)
			return count;
		else
			return i;
	}
	else
		return 0;
}
int main()
{
	char s[] = "abac";

	printf("%d\n", lengthOfLongestSubstring(s));

	return 0;
}