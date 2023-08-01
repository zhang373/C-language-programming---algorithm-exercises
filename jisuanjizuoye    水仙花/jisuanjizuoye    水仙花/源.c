/**//*水仙花数”是指一个三位正整数，其各位数字的立方和确好等于该数本身，如：153＝1^3＋5^3＋3^3 （其中^表示乘方，5^3表示5的3次方），则153是一个“水仙花数”。
    输入n, m，100<=n,m<1000, 求出[n,m]之间的水仙花数。若该区间没有水仙花数，输出-1.
    输入：n,m，用空格隔开。
    输出：若干水仙花数，用空格隔开。*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int n, m;
	int h = 1;
	int count = 100;
	scanf("%d%d", &n, &m);
	int k = n;
	while (k <= m)
	{
		int a = k / 100; 
		int b = (k % 100) / 10;
		int c = ((k % 100) % 10) / 1;
		if ((int)pow(a, 3)+ (int)pow(b, 3) + (int)pow(c, 3) == k)
		{
			if (count ==100)
			{
				printf("%d", k);
				h = k;
				count = count - 1;
			}
			else
			{
				printf(" %d", k);
			}
		}
		k++;
	}
	if (h == 1)
	{
		printf("-1");
	}
	return 0;
}