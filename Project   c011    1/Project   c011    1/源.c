/*编程判断任意一个正整数各位数字之和是奇数还是偶数。如果是奇数输出1，偶数输出0*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main()
{
	int i = 1;
	int a;
	scanf("%d", &a);
	while (a / (int)pow(10, i)!=0)
	{
		i++;
	}
	int z, count, b,c;
	c = a;
	z = 0;
	count = 0;
	while (i != 0)
	{
		b = (int)(c / (int)pow(10, i-1));
		z = b * (((int)pow(10, i-1)));
		c = c - z;
		count = count + b;
		i = i - 1;
	}
	if ((((double)count) / 2) == (((int)count) / 2))
	{
		printf("0");
	}
	else
	{
		printf("1");
	}
	return 0;
}