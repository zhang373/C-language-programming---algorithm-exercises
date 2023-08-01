/*
输入一个整数n(n>=2)，判断n是否为素数。是素数输出 "YES", 否则输出 "NO"。

样例输入：
7
样例输出：
YES*/




int sushuma(int a);

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


int main()
{
	int a;
	scanf("%d", &a);
	if (a >= 2) 
	{
		if (sushuma(a) == 1)
		{
			printf("YES");
		}
		if (sushuma(a) == 0)
		{
			printf("NO");
		}
	}
	return 0;
}

int sushuma(int a)
{
	if (a == 1 || a == 2 || a == 3)
	{
		return 1;
	}
	if (a >= 4)
	{
		int i = 2;
		while (i <= a)
		{
			if (a % i != 0)
			{
				i++;
				if (i == a)
				{
					return 1;
				}
				
			}
			else
			{
				return 0;
			}
		}
	}
}


