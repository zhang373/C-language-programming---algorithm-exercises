/*��̣���һ������4���������ֽ�Ϊ������������֮�ͣ�����ʾȫ���ֱ�����

�������룺
6
���������
6=1+2+3*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int w;
	int h;
	int x;
	scanf("%d", &x);
	int t = 0;
	int a[100];/*����i����ʼ����*/   /*w*/
	int b[100];/*����j�����飬�κ�ge'shu*/   /*h*/
	int i = 1;
	int s = 0;
	int n = 1;
	int stop = 12345566723872564325;
	while (i < x)
	{
		int j = i;
		while (j < x)
		{
			s = s + j;
			j++;
			if (s == x)
			{
				 a[t] = i;
				  b[t]= n;
				 t++;
			}
			n++;
		}
		i++;
		s = 0;
		n = 1;
	}
	int r = 1;
	int measure = 0;
	while (measure < t )
	{
		printf("%d=", x);
		int count = 100;
		printf("%d", a[measure]);
		int panduan = 1;
		while (panduan < b[measure])
		{
			a[measure]++;
			printf("+%d", a[measure]);
			panduan++;
		}
		if (r < t)
		{
			printf("\n");
			r++;
		}
		measure++;
	}

	return 0;
}