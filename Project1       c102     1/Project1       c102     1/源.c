/*求一组数中的最大值，然后统计该最大值在这组数中出现的次数。
输入：元素个数n和n个整数。n < 200。 
输出：最大值及出现的次数。数据间以一个逗号隔开。 
cuishuning 2020/11 */


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	int shu;
	int max;
	scanf("%d", &max);
	int maxnumber = 1;
	while (i <n)
	{
		scanf("%d", &shu);
		if (shu > max)
		{
			max = shu;
			maxnumber=1;
			shu = 10897876;
		}
		if (shu == max)
		{
			maxnumber++;
		}
		i++;
	}
	printf("%d,%d", max, maxnumber);
	return 0;
}