/*��һ����Ȼ���������������ĸ�λ���ֵ�λ�þ�������Ի�����Ϊ������������Ǿ�������������13��31������������������Ҳ�Ǿ�������������1����λ���������ж����Ƿ�Ϊ��������������ǣ������YES���������NO��

�������룺
17
���������
YES*/


int sushuma(int a);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int x;
	scanf("%d", &x);
	int y = (x % 10) * 10 + x / 10;
	if (sushuma(x) == 1 && sushuma(y) == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}


int sushuma(int a)
{
	if (a == 1 || a == 2 || a == 3)
	{
		return 1;
	}
	if (a >= 4)
	{
		int i = 2;
		while (i <= a)
		{
			if (a % i != 0)
			{
				i++;
				if (i == a)
				{
					return 1;
				}
			}
			else 
			{
				return 0;
			}
		}
	}
}