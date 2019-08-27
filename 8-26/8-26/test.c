#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int getfloor(double x)
{
	int z;
	if (x > 0)
		z = (int)x;
	else
	{
		if (x == 0)
			z = 0;
		else
			z = (int)x;
		z = z - 1;
	}
	return z;
}

int main()
{
	double  x = 0;

	scanf("%lf", &x);
	printf("%d", getfloor(x));

	return 0;
}

int xchg(unsigned char x)
{
	char up = x << 4;
	char low = x >> 4;

	return (int)(up + low);
}

int main()
{
	int x = 0;

	scanf("%d", &x);
	printf("%d", xchg(x));

	return 0;
}

µİ¹éÄæĞòÊä³ön
void Reverse(int n)
{
	if (!n)
		return;
	printf("%d", n % 10);
	Reverse(n / 10);
}
int main()
{
	int n = 0;
	printf("Enter n:");
	scanf("%d", &n);
	Reverse(n);
	printf("\n");

	return 0;
}