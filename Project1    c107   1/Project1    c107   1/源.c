/*���������������飨��������Ĵ�СΪ������10���ĸ���Ԫ�أ���������������鹲�е�Ԫ�أ�����С�������������

���룺���������Ԫ�أ�С��10�����������е�һ������ָʾԪ�صĸ���.

��������������Ԫ���зǹ��е�Ԫ��,���Ҵ�С�����������.



�������룺
7 1 2 3 4 5 6 7 6 5 6 7 8 9 0
���������
0 1 2 3 4 8 9
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	int a[15];
	int b[15];
	
	int m; scanf("%d", &m);
	int i = 0;/*iΪ����a�ĸ���*/
	while (i < m)
	{
		int x;
		scanf("%d", &x);
		a[i] = x;
		i++;
	}
	int j = 0;/*jΪ����b�ĸ���*/
	int n; scanf("%d", &n);
	while (j < n)
	{
		int x;
		scanf("%d", &x);
		b[j] = x;
		j++;
	}
	int c[10];
	{
		int f = 0;
		while (f < 10)
		{
			c[f] = 0;
			f++;
		}
	}
	int count = 0;
	while (count < i)
	{
		int l = a[count];
		c[l]++;
		count++;
	}
	count = 0;
	int d[10];
	{
		int f = 0;
		while (f < 10)
		{
			d[f] = 0;
			f++;
		}
	}
	while (count < j)
	{
		int l = b[count];
		d[l]++;
		count++;
	}

	int measure = 0;
	int stop = 100;
	int x = 0;
	while (measure < 10)
	{
		if (((c[measure] == 0 && d[measure] != 0) || (c[measure] != 0 && d[measure] == 0))&& stop != 100)
		{
			printf(" %d", measure);
			x++;
			goto k;
		}

		if (((c[measure] == 0 && d[measure] != 0) || (c[measure] != 0 && d[measure] == 0)) && stop == 100)
		{
			printf("%d", measure);
			stop--;
			x++;
		}
		k:measure++;
	}
	if (x == 0)
	{
		printf("NO");
	}
	return 0;
}