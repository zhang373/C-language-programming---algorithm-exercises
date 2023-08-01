/*输入总秒数，转换为相应的时、分、秒。提示：在输出时，请使用下面的格式（变量名不要求一样）printf("%d:%.2d:%.2d\n", h, m, s)

输入：整数
输出：时分秒，整数，西文冒号分隔。*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int x;
	scanf("%d", &x);
	int y = x / 3600;
	int z = (x % 3600) / 60;
	int w = ((x % 3600) % 60) / 1;
	printf("%d:%.2d:%.2d\n", y, z, w);
	return 0;
}