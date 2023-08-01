/*从键盘输入两个正整数m和n，然后从m + 1开始找出大于m的n个素数。

输入：m, n

输出：n个素数，数据间以一个空格分隔。



样例输入：
1 20
样例输出：
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71
*/

int sushuma(int a);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int m;//start within m
	int n;//sum up=n
	scanf("%d", &m);
	scanf("%d", &n);
	int i = 0;
	int b[10086];
	int t = m+1;
	while (i < n)
	{
		if (sushuma(t) == 1)
		{
			b[i] = t;
			i++;
		}
		t++;
	}


	int j = 0;
	int measure = 100;
	while (j < i)
	{
		if (measure != 100)
		{
			printf(" %d", b[j]);
		}
		if (measure == 100)
		{
			printf("%d", b[j]);
			measure = 99;
		}
		j++;
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
			if (a % i == 0)
			{
				return 0;
			}
		}
	}
	
}
