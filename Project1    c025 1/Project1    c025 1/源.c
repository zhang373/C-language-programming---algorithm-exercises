/*计算级数

   2/1, -3/2, 5/3, -8/5,...

的前n项和。

   级数的特点是：（1）若先不考虑符号，则前一项的分子是后一项的分母，前一项的分子分母之和为后一项的分子。（2）级数各项的正负号交错。

输入：项数n,   0<n<100.

输出：前n项的和，格式"%f"。



样例输入：
1
样例输出：
2.000000*/
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	double s = 2;
	double t;
	double a = 2;
	double b = 1;
	while (i < n)
	{
		double c1 = a;
		double c2 = b;
		b = c1;
		a = c1 + c2;
		t = pow((-1),(i))*(a/b);
		s = s + t;
		i++;
	}
	printf("%f", s);
	return 0;
}