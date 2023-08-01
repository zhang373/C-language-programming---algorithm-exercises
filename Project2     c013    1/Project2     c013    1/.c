/*编程，将一个大于4的正整数分解为连续的正整数之和，请显示全部分别结果。

样例输入：
6
样例输出：
6=1+2+3*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int x;
	scanf("%d", &x);
	int m = 1;
	int i = 1;/*i为起始值*/
	int sum = 0;
	int j,v;
	while (i < (x / 2))
	{
		while (sum != x && sum <= x)
		{
			sum = sum + m;
			m = m + 1;
			if (sum == x)
			{
				 j = m-i;/*j表示加了多少个*/
				 v = i;
			}
			
		}
		i++;
		sum = 0;
		m = i;

	}
	i = v;
	int count = 100;
	printf("%d=", x);
	int k = 1;
	int w = i;
	while (k <= j)
	{
		if (count != 100)
		{
			printf("+%d", w);
			w++;
		}
		if (count == 100)
		{
			printf("%d", w);
			count--;
			w++;
		}
		k++;
	}

	return 0;
}