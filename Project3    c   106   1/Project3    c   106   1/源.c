/*第 13 周 / 编程题 - C106-新兵报数问题
某部队进行新兵队列训练，将新兵从1开始按顺序依次编号，并排成一行横队，训练的规则如下：
从头开始1至2报数，凡报到2的出列，剩下的向小序号方向靠拢，
再从头开始进行1至3报数，凡报到3的出列，剩下的向小序号方向靠拢，
继续从头开始进行1至2报数，以后从头开始轮流进行1至2报数、1至3报数直到剩下的人数不超过三人为止。
编写程序，输入数N为最开始的新兵人数（20 < N < 6000），输出剩下的新兵最初的编号。

样例输入：
21
样例输出：
1 7 19*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<math.h>


int main()
{
	int n;
	scanf("%d", &n);
	typedef struct solder
	{
		int id;
		int zhuangtai;
	}sol;
	sol solder[6005];
	int i = 0;
	while (i <n)
	{
		solder[i].id = i+1;
		solder[i].zhuangtai = 0;
		i++;
	}

	i = 0;
	int count = 0;
	while (1)
	{
		if (n == 3)
		{
			count = 3;
			goto k;
		}
		i = 0;
		count = 0;
		while (i < n)
		{
			if (solder[i].zhuangtai == 0)
			{
				count++;
				if (count % 2 == 0)
				{
					solder[i].zhuangtai = 1;
				}
			}
			i++;
		}
		i = 0;
		count = 0;
		while (i < n)
		{
			if (solder[i].zhuangtai == 0)
			{
				count++;
			}
			i++;
		}
		if (count <= 3)
		{
			goto k;
		}


		i = 0;
		count = 0;
		while (i < n)
		{
			if (solder[i].zhuangtai == 0)
			{
				count++;
				if (count % 3 == 0)
				{
					solder[i].zhuangtai = 1;
				}
			}
			i++;
		}
		i = 0;
		count = 0;
		while (i < n)
		{
			if (solder[i].zhuangtai == 0)
			{
				count++;
			}
			i++;
		}
		if (count <= 3)
		{
			goto k;
		}



	}





	sol out[3];
k:	if (count == 1)
{
	i = 0;
	while (i < n)
	{
		if (solder[i].zhuangtai == 0)
		{
			out[0] = solder[i];
		}
		i++;
	}
	printf("%d", out[0].id);
}

int k = 0;
if (count == 2)
{
	i = 0;
	i = 0;
	while (i < n)
	{
		if (solder[i].zhuangtai == 0)
		{
			out[k] = solder[i];
			k++;
		}
		i++;
	}
	printf("%d %d", out[0].id, out[1].id);
}

k = 0;
if (count == 3)
{
	i = 0;
	i = 0;
	while (i < n)
	{
		if (solder[i].zhuangtai == 0)
		{
			out[k] = solder[i];
			k++;
		}
		i++;
	}
	printf("%d %d %d", out[0].id, out[1].id,out[2].id);
}
	return 0;
}