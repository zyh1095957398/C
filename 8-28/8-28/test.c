#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void quicksort(int* arr, int left, int right)
{
	if (left >= right)
		return;
	int i = left;
	int j = right;
	int key = *(arr + i);
	while (i < j)
	{
		while ((i < j) && (key <= arr[j]))
			j--;
		*(arr + i) = *(arr + j);
		while ((i < j) && (key >= arr[i]))
			i++;
		*(arr + j) = *(arr + i);
	}
	*(arr + i) = key;
	quicksort(arr, left, i - 1);
	quicksort(arr, i + 1, right);
}

int main()
{
	int i = 0;
	int n = 0;
	int arr[100] = { 0 };
	int d = 0;
	int e = 0;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("\n%d %d", &d, &e);
	quicksort(arr, d - 1, e - 1);

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}

int main()
{
	int i = 0;
	int a[20] = { 0 };
	int b[20] = { 0 };
	int n = 0;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i] + b[i]);
	}
	
	return 0;
}
