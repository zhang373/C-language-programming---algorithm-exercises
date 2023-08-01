/*编写程序，输入任意的3个小数；将这3个小数相加，将相加的结果以及按四舍五入方法转换成整数后的结果显示输出。

输入：3个小数，空格分隔；
输出：和，四舍五入后的整数，1行显示，空格分隔*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	float a = x + y + z;
	int w = (x + y + z + 0.5);
	printf("%g %d",a, w);/*能用g的就别用f*/
	return 0;
}
