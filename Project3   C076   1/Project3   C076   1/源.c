/* 第 12 周 / 编程题 - C076-按规则排序
"有一个包含奇数个项的整数序列，请编程按照以下规则排序：

最大值排在中间，最小值排在最左，中值排在最右，其它值清为0。

输入2行，第一行n表示要输入的数的个数，n是奇数。第二行输入的n个数。

输出，排序后的数组，数据空格分隔，最后一个数据后面没有空格。

样例1：

输入

5

12 20 9 88 32

输出

9 0 88 0 20



样例2：

输入

3 

66 10 30

输出

10 66 30

样例输入：
9
99 1 2 3 4 5 6 7 8
样例输出：
1 0 0 0 99 0 0 0 5
*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>
int main()
{
	int n;
	(void)scanf("%d", &n);
	if (n >= 3)
	{
		int i = 0;
		int input[100];
		while (i < n)
		{
			(void)scanf("%d", &input[i]);
			i++;
		}

		//max
		int max = input[0];
		i = 1;
		while (i < n)
		{
			if (input[i] > max)
			{
				max = input[i];
			}
			i++;
		}
		//min
		int min = input[0];
		i = 1;
		while (i < n)
		{
			if (input[i] < min)
			{
				min = input[i];
			}
			i++;
		}

		//sour
		for (int ii = 0; ii < n; ii++)
		{
			for (int jj = n - 1; jj > ii; jj--)
			{
				if (input[jj] < input[jj - 1])
				{
					int t = input[jj];
					input[jj] = input[jj - 1];
					input[jj - 1] = t;
				}

			}
		}

		//middle
		int middle = input[(n - 1) / 2];

		i = 0;
		while (i < n)
		{
			if (i != 0 && i != n - 1 && i != (n - 1) / 2)
			{
				input[i] = 0;
			}
			i++;
		}
		input[0] = min;
		input[n - 1] = middle;
		input[(n - 1) / 2] = max;

		i = 0;
		int flag = 100;
		while (i < n)
		{
			if (flag == 100)
			{
				printf("%d", input[i]);
				flag--;
			}
			else
			{
				printf(" %d", input[i]);
			}
			i++;
		}
	}
	if (n == 1)
	{
		int input;
		scanf("%d", &input);
		printf("%d %d %d", input, input, input);
	}
	return 0;
}