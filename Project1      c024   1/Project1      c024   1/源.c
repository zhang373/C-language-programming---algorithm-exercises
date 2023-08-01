/*很久以前，购物还经常找回硬币。把n张1元纸币换成一分、二分和五分面值的硬币，假设每种至少一枚，问有多少种换法？n值由用户从键盘输入 output:换法的数量。 

输入：整数n

输出：一个整数



样例输入：
2
样例输出：
1921*/

#define _CRT_SECURE_NO_WARNINGS   /*类似于勾股数内道，让所有数字都循环一边，如果count==100x这玩意就成立，，狠劲用计算机就行*/
#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	int x;
	scanf("%d", &x);
	x = 100 * x;
	int count = 0;
	int i = 1;/*i stands for 5*/
	int j = 1;/*j stands for 2*/
	int k = 1;/*k stands for 1*/
	int sum = i * 5 + j * 2 + k * 1 ;
	while (i * 5   <= x)
	{
		while (j * 2 <= x)
		{
			while(k * 1 <= x)
			{
				sum = i * 5 + j * 2 + k * 1;
				if (sum == x)
				{
					count++;
				}
				k++;
			}
			j++;
			k = 1;
		}
		i++;
		j = 1;
	}

	printf("%d", count);
	return 0;
}