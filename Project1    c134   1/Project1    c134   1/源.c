/* �� 11 �� / ����� - C134-�����С��ƽ��ֵ
��д������Ѱ�Ҿ���n��Ԫ�ص�һά�����е����ֵ����Сֵ������������Ԫ�ص�ƽ��ֵ������ԭ�����£�

double fun(int a[],int n,int *max,int *min);

���������ʽ��

���룺�û������n+1�������ÿո�ָ�����һ����Ϊ����Ԫ�ظ���n��

�����3�����֣���һ������Ϊ�����е����Ԫ��ֵ���ڶ�������Ϊ�����е���СԪ��ֵ������������Ϊ����Ԫ�ص�ƽ��ֵ������С�����6λ��Ч����)��3�����ÿո�ֿ���

�������룺
3 10 15 -10
���������
15 -10 5.000000
*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

double sum(float input[], int n);
void paixv(double tt[], int n);
int main()
{
	int n;
	scanf("%d", &n);
	double input[200];
	int i=0;
	while (i < n)
	{
		double r;
		scanf("%lf",&r );
		input[i] = r;
		i++;
	}
	
	i = 0;
	double tt[200];
	while (i < n)
	{
		tt[i] = input[i];
		i++;
	}

	paixv(tt, n);
	printf("%g %g", tt[0], tt[n - 1]);

	double all= sum(input,n);
	printf(" %.6lf", all / ((double)n));

	return 0;
}

void paixv(double tt[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; i < j; j--)
		{
			if (tt[j] > tt[j - 1])
			{
				double t = tt[j];
				tt[j] = tt[j - 1];
				tt[j - 1] = t;
			}
		}
	}
}


double sum(double input[], int n)
{
	int i = 0;
	double sum = 0;
	while (i < n)
	{
		sum = sum + input[i];
		i++;
	}
	return sum;
}
