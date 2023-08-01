/*"一个数组A中存有n（n>0）个整数，在不允许使用另外数组的前提下，将每个整数，循环向右移m（m>=0）个位置，
即将A中的数据由（A0A1……An-1）变换为（An-m…… An-1A0A1……An-m-1）（最后m个数循环移至A的最前面的m个数）。
输入n ( 1<=n<=100)、m（m>=0）及n个整数，输出循环右移m位以后的整数序列。

输入：

占二行，其中

第1行输入n和m两个数，n和m之间用空格分隔。

第2行输入数组A中的n个数，数据间用空格分隔。

输出：

占一行，数据间用一个空格分隔。

样例：

10 5

1 2 3 4 5 6 7 8 9 0



样例输入：
1 1
1
样例输出：
1*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,m;
	(void)scanf("%d%d", &n,&m);
	int a[10086];
	int i = 0;
	(void)scanf("%d", &a[i]);
	i++;
	while (i <= n - 1)
	{
		(void)scanf("%d", &a[i]);
		i++;
	}
	int j = 0;
	int c = n;
	while (j<=n-m-1)
	{
		a[c] = a[j];
		c++;
		j++;
	}
	j = 0;
	while (j+m<=n-1)
	{
		a[j] = a[j + m];
			j++;
	}
	j = m;
	while (j <= n - 1)
	{
		a[j] = a[j + m];
		j++;
	}
	
	int stop = 100;
	j = 0;
	while (j <= n - 1)
	{
		if (stop != 100)
		{
			printf(" %d", a[j]);
			j++;
		}
		if (stop == 100)
		{
			printf("%d", a[j]);
			j++;
			stop = 10086;
		}
	}
	return 0;
}
