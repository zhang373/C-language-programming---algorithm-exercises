/*����3���������������Լ������С��������

���룺3��������
��������Լ������С���������ո�ָ�



�������룺
2 5 8
���������
1 40*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int x;
	int y;
	int z;
	int max, min;
	scanf("%d%d%d", &x, &y, &z);
	if (x >= y && x >= z)
	{
		max = x;
	}
	if (y >= z &&y >= x)
	{
		max = y;
	}
	if (z >= y && z >= x)
	{
		max = z;
	}
	if (x <= y && x <= z)
	{
		min = x;
	}
	if (y <= z && y <= x)
	{
		min = z;
	}
	if (z <= y && z <= x)
	{
		min = z;
	}/*��֪�����Сֵ*/
	while (max % x != 0 || max % y != 0 || max % z != 0)
	{
		max++;
	}
	
	while (x % min != 0 || y % min != 0 || z % min != 0)
	{
		min--;
	}
	printf("%d",min);
	printf(" %d", max);
	return 0;
}