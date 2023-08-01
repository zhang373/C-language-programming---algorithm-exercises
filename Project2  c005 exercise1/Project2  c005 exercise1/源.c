/*输入一个八进制数，输出中间四位和中间四位加上1024，中间的空一个格子！*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int x,y,z;
	scanf("%d",&x);
	y = x/100;/*整数，排除最后两位*/
	z = y % 10000;/*取余，保留中间四位*/
	int w = z + 1024;
	printf("%d %d", z, w);/*显示并输出*/
	return 0;
}
