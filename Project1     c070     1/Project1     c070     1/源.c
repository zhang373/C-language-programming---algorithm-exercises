/*"��̣�����ͬʱ�ڵ�һ������͵ڶ��������е�ȫ��Ԫ�ء�

������������a��Ԫ�ظ���������������a�ĸ���Ԫ�ص�ֵ��������������b��Ԫ�ظ���������������b�ĸ���Ԫ�ص�ֵ�����ͬʱ�����������ȫ��Ԫ�ء�



�������룺

3

1 2 3

5

1 3 5 7 9



���������

1 3



�������룺
3
1 2 3
5
1 3 5 7 9
���������
1 3*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int m; scanf("%d", &m);
	int a[100];
	int o = 0;
	while (o < m)
	{
		int x;
		scanf("%d", &x);
		a[o] = x;
		o++;
	}
	int n; scanf("%d", &n);
	int b[100];
	int u = 0;
	while (u < n)
	{
		int x;
		scanf("%d", &x);
		b[u] = x;
		u++;
	}
	int i = 0;
	int j = 0; 
	int c[10086];
	int measure=0;
	while (i < m)
	{
		while (j < n)
		{
			if (a[i] == b[j])
			{
				c[measure] = a[i];
				measure++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	j = 0;
	int stop = 10086;
	while (j < measure)
	{
		
		if (stop != 10086)
		{
			printf(" %d", c[j]);
			j++;
		}
		if (stop == 10086)
		{
			printf("%d", c[j]);
			stop = 1;
			j++;
		}
	}
	return 0;
}