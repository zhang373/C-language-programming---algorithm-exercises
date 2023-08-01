/*从键盘输入任意3个整数，然后输出这3个数的平均值。

输入：3个整数，用空格分隔。

输出：平均数（实数，提示：输出平均值时请使用格式符 “%g”）*/



#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>


int main()
{
	int x, y, z;
	scanf("%d %d %d",&x,&y,&z);
	float w = (x + y + z) / 3;
	printf("%f", w);
	return 0;
}