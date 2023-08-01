#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main()
{
	double i = 1;
	double k = 1;
	int n;
	scanf("%d", &n);
	double s, w;
	double z = 0;
	while (k <= n)
	{
		w = 1 / (0+ i);
		s = ((int)pow((-1), k+1) * w);
		z = s + z;
		i=i+2;
		k++;
	}
	printf("%lf", z);
	return 0;
}