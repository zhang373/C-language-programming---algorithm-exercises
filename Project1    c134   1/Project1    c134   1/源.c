/* 第 11 周 / 编程题 - C134-最大最小和平均值
编写函数，寻找具有n个元素的一维数组中的最大值和最小值，并返回数组元素的平均值，函数原形如下：

double fun(int a[],int n,int *max,int *min);

输入输出格式：

输入：用户输入的n+1个数，用空格分隔。第一个数为数组元素个数n。

输出：3个数字：第一个数字为数组中的最大元素值，第二个数字为数组中的最小元素值，第三个数字为数组元素的平均值（保留小数点后6位有效数字)。3个数用空格分开。

样例输入：
3 10 15 -10
样例输出：
15 -10 5.000000
*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

double sum(float input[], int n);
void paixv(double tt[], int n);
int main()
{
	int n;
	scanf("%d", &n);
	double input[200];
	int i=0;
	while (i < n)
	{
		double r;
		scanf("%lf",&r );
		input[i] = r;
		i++;
	}
	
	i = 0;
	double tt[200];
	while (i < n)
	{
		tt[i] = input[i];
		i++;
	}

	paixv(tt, n);
	printf("%g %g", tt[0], tt[n - 1]);

	double all= sum(input,n);
	printf(" %.6lf", all / ((double)n));

	return 0;
}

void paixv(double tt[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; i < j; j--)
		{
			if (tt[j] > tt[j - 1])
			{
				double t = tt[j];
				tt[j] = tt[j - 1];
				tt[j - 1] = t;
			}
		}
	}
}


double sum(double input[], int n)
{
	int i = 0;
	double sum = 0;
	while (i < n)
	{
		sum = sum + input[i];
		i++;
	}
	return sum;
}
