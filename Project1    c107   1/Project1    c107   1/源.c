/*输入两个整型数组（假设数组的大小为不超过10）的各个元素，输出不是两个数组共有的元素，并从小到大排序输出。

输入：两个数组的元素（小于10个），数组中第一个数据指示元素的个数.

输出：两个数组的元素中非共有的元素,并且从小到大进行排序.



样例输入：
7 1 2 3 4 5 6 7 6 5 6 7 8 9 0
样例输出：
0 1 2 3 4 8 9
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	int a[15];
	int b[15];
	
	int m; scanf("%d", &m);
	int i = 0;/*i为数组a的个数*/
	while (i < m)
	{
		int x;
		scanf("%d", &x);
		a[i] = x;
		i++;
	}
	int j = 0;/*j为数组b的个数*/
	int n; scanf("%d", &n);
	while (j < n)
	{
		int x;
		scanf("%d", &x);
		b[j] = x;
		j++;
	}
	int c[10];
	{
		int f = 0;
		while (f < 10)
		{
			c[f] = 0;
			f++;
		}
	}
	int count = 0;
	while (count < i)
	{
		int l = a[count];
		c[l]++;
		count++;
	}
	count = 0;
	int d[10];
	{
		int f = 0;
		while (f < 10)
		{
			d[f] = 0;
			f++;
		}
	}
	while (count < j)
	{
		int l = b[count];
		d[l]++;
		count++;
	}

	int measure = 0;
	int stop = 100;
	int x = 0;
	while (measure < 10)
	{
		if (((c[measure] == 0 && d[measure] != 0) || (c[measure] != 0 && d[measure] == 0))&& stop != 100)
		{
			printf(" %d", measure);
			x++;
			goto k;
		}

		if (((c[measure] == 0 && d[measure] != 0) || (c[measure] != 0 && d[measure] == 0)) && stop == 100)
		{
			printf("%d", measure);
			stop--;
			x++;
		}
		k:measure++;
	}
	if (x == 0)
	{
		printf("NO");
	}
	return 0;
}