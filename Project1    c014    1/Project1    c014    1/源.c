/*编程，找出[m,n]范围内是7的倍数或带7的全部正整数，m和n为正整数。

*/



#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>


int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int k;
	k = m;
	int i = 0;
	int a, b, c, d;
	int count = 0;
	int tmd = 0;
	while (k <= n)
	{
		if ((double)(k / 7.0) == (int)(k / 7.0))
		{
			if (tmd = 100)
			{
				printf("%d是7的倍数", k);
				printf("\n");
				tmd--;
			}
			else
			{
				printf(" %d是7的倍数", k);
			}
			while (k / (int)pow(10, i) != 0)
			{
				i++;
			}
			b = k;
			while (i != 0)
			{
				a = b / ((int)pow(10, (i - 1)));
				b = k - a * ((int)pow(10, (i - 1)));
				if (a == 7)
				{
					
						printf("%d是带7的数", k);
						printf("\n");
					
					break;
				}
				i = i - 1;
			}
			i = 0;

		}
		else
		{
			while (k / (int)pow(10, i) != 0)
			{
				i++;
			}
			b = k;
			while (i != 0)
			{
				a = b/ ((int)pow(10, (i - 1)));
				b=k-a* ((int)pow(10, (i - 1)));
				if (a == 7)
				{
					
						printf("%d是带7的数", k);
						printf("\n");
					
					break;
				}
				i = i - 1;
			}
			i = 0;
		}
		k++;
	}
	return 0;
}