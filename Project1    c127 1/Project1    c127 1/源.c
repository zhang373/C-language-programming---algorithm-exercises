/*第 13 周 / 编程题 - C127-求多项式的值
编写程序，计算下列多项式的值:

poly(n,x)=1, 当 n=0；

poly(n,x)=x, 当 n=1；

poly(n,x)=((2*n-1)*x* poly(n-1,x)-(n-1)* poly(n-2,x))/n, 当 n>1；

输入：n和x，格式："%d%lf"。

输出：第n个多项式在x处的值，格式："%lf\n"。



样例输入：
0 12.5
样例输出：
1.000000*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>


int main()
{
	return 0;
}