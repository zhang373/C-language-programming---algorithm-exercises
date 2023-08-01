/*输入6个整数，用空格分隔。找出这6个整数中的所有素数，并对这些素数进行从小到大排序。若未找到素数，输出“NULL”。



样例输入：
5 6 7 8 9 100
样例输出：
5 7*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int shibushisushu(int a);
void paixv(int* b, int youmeiyou);
int main()
{
	int a[6];
	int i = 0;
	int x;
	while (i <= 5)
	{
		scanf("%d", &x);
		a[i] = x;
		i++;
	}

	int b[6];
	int j = 0; int youmeiyou = 0;
	while (j <= 5)
	{
		if (shibushisushu(a[j]) == 1)
		{
			b[youmeiyou] = a[j];
			youmeiyou++;
		}
		j++;
	}
	if (youmeiyou == 0)
	{
		printf("NULL");
	}


	if (youmeiyou == 1)
	{
		printf("%d", b[0]);
	}

	int gan = 100;
	if (youmeiyou >= 2)
	{
		paixv(b, youmeiyou);
		int k = 0;
		while ((0)< youmeiyou)
		{
			if (gan != 100)
			{
				printf(" %d", b[youmeiyou-1]);
			}
			if (gan == 100)
			{
				printf("%d", b[youmeiyou-1]);
				gan--;
			}
			youmeiyou--;;
		}
	}
	return 0;
}

int shibushisushu(int a)    /*是就是1 不是就是0*/
{
	if (a >= 4)
	{
		int i = 2; int j = 2;
		while (i <= a)
		{
			while (j <= a)
			{
				if (i * j != a)
				{
					if (i == a && j == a)
					{
						return 1;
					}
				}
				else
				{
					goto k;
				}

				j++;
			}
			i++;
			j = 2;

		}
	}
	if (a == 1 || a == 2 || a == 3)
	{
		return 1;
	}
k:return 0;
}


void paixv(int* a, int youmeiyou)
{
	for (int i = 0; i < youmeiyou; i++)
	{
		for (int j = youmeiyou-1; j > i; j--)
		{
			if (a[j ] > a[j-1])
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}
