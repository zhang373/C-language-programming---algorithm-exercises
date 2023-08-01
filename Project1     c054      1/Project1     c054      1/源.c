/*有一分数序列如下： 2 / 1, 3 / 2, 5 / 3, 8 / 5, 13 / 8, 21 / 13, … 
即后一项的分母为前一项的分子，后项的分子为前一项分子与分母之和，求其前n项之和。
输入：项数n（整数）
输出：前n项之和（实数，注：保留4位小数）
cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	double a, b, c, d;
	a = 2; b = 1;
	int i = 1;
	c = 2;
	while (i < n)
	{
		double e = a;
		a = e + b;
		b = e;
		d = a / b;
		c = d + c;
		i++;
	}
	printf("%.4lf", c);
	return 0;
}