/*若一个自然数是素数，且它的各位数字的位置经过任意对换后仍为素数，则称其是绝对素数。例如13和31都是素数，所以它们也是绝对素数。输入1个两位正整数，判断其是否为绝对素数。如果是，则输出YES，否则输出NO。

样例输入：
17
样例输出：
YES*/


int sushuma(int a);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int x;
	scanf("%d", &x);
	int y = (x % 10) * 10 + x / 10;
	if (sushuma(x) == 1 && sushuma(y) == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
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