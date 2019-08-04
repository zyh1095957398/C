#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//쳲������� �ݹ鼰�ǵݹ�
int recursion(int n)
{
	if (n <= 2)
		return 1;
	else
	    return recursion(n-1)+recursion(n-2);
}
int non_recursion(int n) 
{
	int sum = 0;
	int i = 0;
	int s = 0;
	int a = 1;

	for (i = 3; i <= n; i++)
	{
		sum = s + a;
		s = a;
		a = sum;
	}
	if (n > 2)
	{
		return sum;
	}
	else if (n<= 2)
	    return 1;

}
int main()
{
	int n;

	scanf("%d", &n);
	printf("���%d��쳲���������\n",n);
	printf("�ݹ鷽ʽ��");
	recursion(n);
	printf("%d", recursion(n));
	printf("\n");
	printf("�ǵݹ鷽ʽ��");
	non_recursion(n);
	printf("%d", non_recursion(n));

	return 0;
}

//��n^k
int power(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else
		return n * power(n, k - 1);
}
int main()
{
	int n;
	int k;

	scanf("%d%d", &n, &k);
	power(n, k);
	printf("%d", power(n, k));

	return 0;
}

//����λ��֮��
int DigitSum(int n)
{
	int sum = 0;

	while (n)
	{
		sum += n % 10;
		n = n / 10;
	}

	return sum;
}
int main()
{
	int n;

	scanf("%d", &n);
	DigitSum(n);
	printf("%d", DigitSum(n));
	return 0;
}

//�ַ�����������
void reverse_string(char* arr, int left, int right)
{
	char tmp = 0;
	if (left <= right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		return reverse_string(arr, ++left, --right);
	}
}
int main()
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz";
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[1]) - 2;

	printf("%s\n", arr);
	reverse_string(arr, left,right);
	printf("%s\n", arr);

	return 0;
}

//�����ַ�������  �ݹ鼰�ǵݹ�
int my_strlen(char* arr)
{
	if (*arr == '\0')
		return 0;
	else
		return 1 + my_strlen(arr+1);
}
int non_my_strlen(char* arr)
{
	int sum = 0;

	while (*arr != '\0')
	{
		sum++;
		arr++;
	}

	return sum;
}
int main()
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz";

	//printf("%d\n", strlen(arr));
	printf("�õݹ鷽ʽ���ַ������ȣ�");
	printf("%d\n", my_strlen(arr));
	printf("�÷ǵݹ鷽ʽ���ַ������ȣ�");
	printf("%d\n", non_my_strlen(arr));

	return 0;
}

//ʵ��n�Ľ׳�  �ݹ鼰�ǵݹ�
int factorial(int n)
{
	if (n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int non_factorial(int n)
{
	int sum = 1;
	int i = 0;

	if (n <= 1)
		return sum;

	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
int main()
{
	int n = 0;

	scanf("%d", &n);
	printf("�õݹ鷽ʽ��");
	printf("%d\n",factorial(n));
	printf("�÷ǵݹ鷽ʽ��");
	printf("%d\n", non_factorial(n));

	return 0;
}

//��ӡһ��������ÿһλ  1
void my_digit(int n, int m)
{
	if (n / 10 == 0 && n % 10 == 0)
		printf("\n");
	else
	{
		printf("%d ", n / m);
		return my_digit(n % m, m / 10);
	}
	printf("\n");
}
void my_digit1(int n)
{
	if (n / 10 == 0 && n % 10 == 0)
		printf("\n");
	else
	{
		printf("%d ", n % 10);
		return my_digit1(n / 10);
	}
}
int main()
{
	int n;
	int count = -1;
	int tmp = 0;

	scanf("%d", &n);
	tmp = n;
	while (tmp)
	{
		count++;
		tmp /= 10;
	}
	tmp = pow(10,count);
	my_digit(n,tmp);
	my_digit1(n);

	return 0;
}

��ӡһ��������ÿһλ  2
void my_digit(int n)
{
	if (n > 9)
	{
		my_digit(n / 10);
	}
	printf("%d ",n%10);
}
void my_digit1(int n)
{
	if (n / 10 == 0 && n % 10 == 0)
		printf("\n");
	else
	{
		printf("%d ", n % 10);
		return my_digit1(n / 10);
	}
}
int main()
{
	int n;

	scanf("%d", &n);
	my_digit(n);
	printf("\n");
	my_digit1(n);

	return 0;
}