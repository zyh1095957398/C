#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	
	scanf("%d", &e);

	a = e / 1000 + 5;
	b = e / 100 % 10 + 5;
	c = e % 100 / 10 + 5;
	d = e % 10 + 5;
	a = a % 10;
	b = b % 10;
	c = c % 10;
	d = d % 10;
	printf("%d %d %d %d\n", d, c, b, a);

	return 0;
}

int main()
{
	int AH = 0;
	int AM = 0;
	int AS = 0;
	int BH = 0;
	int BM = 0;
	int BS = 0;
	int t = 0;
	int s = 0;
	
	scanf("%d%d%d%d%d%d", &AH, &AM, &AS, &BH, &BM, &BS);
	t = AM + BM; 
	s = AS + BS;
	if (s >= 60)
	{
		t += 1;
		s = s - 60;
	}
	if (t >= 60)
	{
		AH += 1;
		t = t - 60;
	}

	printf("%d %d %d", AH + BH, t, s);
}

int main()
{
	int n = 0;
	int k = 0;

	scanf("%d%d", &n, &k);
	printf("%d", (n >> (k - 1)) & 1);

	return 0;
}
