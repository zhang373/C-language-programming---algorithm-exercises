/*求一组数中的最大值，然后统计该最大值在这组数中出现的次数。

  输入：元素个数n和n个整数。n<200。

  输出：最大值及出现的次数。数据间以一个逗号隔开。

样例输入：
1 2
样例输出：
2,1*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[10086];
	int i = 0;
	while (i < n)
	{
		int x;
		scanf("%d", &x);
		a[i] = x;
		i++;
	}
	int count = 1;

	if (i == 1)
	{
		printf("%d,1", a[0]);
	}
	if (i >= 2)
	{
		 count = 1;
		int t = a[0];
		int round = 0;
		int measure = 0;
		while (round < n - 1)
		{

			if (t >= a[measure + 1])
			{
				if (t == a[measure+1])
				{
					count++;
				}
			}
			if (t < a[measure + 1])
			{
				t = a[measure + 1];
				count = 1;
			}
			round++;
			measure++;
		}
		printf("%d,%d",t, count);
	}
	
	

	return 0;
}