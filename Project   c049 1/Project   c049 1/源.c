/*输入一个大写英文字母， 输出与其相邻的字母串（将字母A-Z看作是收尾相接的环状排列）。

输入: 大写英文字母
输出:该字母前面的字母，该字母，该字母后面的字母。（三字母间无间隔）

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	char x;
	scanf("%c", &x);
	if ((int)x == 'A')
	{
		printf("ZAB");
	}
	if ((int)x == 'Z')
	{
		printf("YZA");
	}
	if ((int)x != 'A' && (int)x != 'Z')
	{
		int y = ((int)x) - 1; int w = ((int)x) + 1;
		printf("%c%c%c", y, x, w);
	}
	return 0;
}