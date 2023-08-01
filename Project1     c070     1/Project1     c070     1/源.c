/*"编程，查找同时在第一个数组和第二个数组中的全部元素。

首先输入数组a的元素个数，再输入数组a的各个元素的值，接着输入数组b的元素个数，再输入数组b的各个元素的值，输出同时在两个数组的全部元素。



样例输入：

3

1 2 3

5

1 3 5 7 9



样例输出：

1 3



样例输入：
3
1 2 3
5
1 3 5 7 9
样例输出：
1 3*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int m; scanf("%d", &m);
	int a[100];
	int o = 0;
	while (o < m)
	{
		int x;
		scanf("%d", &x);
		a[o] = x;
		o++;
	}
	int n; scanf("%d", &n);
	int b[100];
	int u = 0;
	while (u < n)
	{
		int x;
		scanf("%d", &x);
		b[u] = x;
		u++;
	}
	int i = 0;
	int j = 0; 
	int c[10086];
	int measure=0;
	while (i < m)
	{
		while (j < n)
		{
			if (a[i] == b[j])
			{
				c[measure] = a[i];
				measure++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	j = 0;
	int stop = 10086;
	while (j < measure)
	{
		
		if (stop != 10086)
		{
			printf(" %d", c[j]);
			j++;
		}
		if (stop == 10086)
		{
			printf("%d", c[j]);
			stop = 1;
			j++;
		}
	}
	return 0;
}