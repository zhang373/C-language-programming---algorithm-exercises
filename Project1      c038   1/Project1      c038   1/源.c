/*闰年计算。程序输入一个正整数Y，以及另一个正整数N，以一个空格分隔。计算从Y年开始后的第N个闰年是哪一年（如果Y本身是闰年，则Y之后的第一个闰年是Y）。

样例输入：
2005 3
样例输出：
2016*/


int runnianma(int a);
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
	int y; int n;
	scanf("%d%d", &y, &n);
	int count = 0;
	int i;
	if (runnianma(y) == 1)
	{
		i = y + 1;
		count = 1;
	}
	if (runnianma(y) == 0)
	{
		i = y+1;
	}

	while (count < n)
	{
		if (runnianma(i) == 1)
		{
			count++;
		}
		i++;
	}
	printf("%d", i - 1);
	return 0;
}

int runnianma(int a)
{
	if (a % 100 != 0)
	{
		if (a % 4 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (a % 400 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}