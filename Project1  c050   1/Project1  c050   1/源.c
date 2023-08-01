/*编写程序检验由三边能否构成三角形，检验方法是任意两边和均要大于第三边。

输入:三边长度
输出：若果可以构成，输出YES，否则输出ERROR DATA

样例输入：
1 1 2
样例输出：
ERROR DATA*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("%g%g%g", a, b, c);
	}
	else
	{
		printf("ERROR DATE");
	}
	return 0;
}