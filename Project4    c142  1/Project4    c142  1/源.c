/*�� 13 �� / ����� - C142-�������
����N��������/��ĸ����ʽ����������������Щ�����ĺ͡�

�����ʽ����һ������һ��������N��<=100����Ȼ����һ��N����������a1/b1 a2/b2������
�������еķ��Ӻͷ�ĸ���ڡ�int���ķ�Χ�ڡ�����и���������ű�������ڷ��ӵ�ǰ�档

�����ʽ����������ʽ�ĺͣ������� ����/��ĸ�������С��������Ǻ͵��������֣�
�����ӡ�<����ĸ�������Ӻͷ�ĸû�й�������
�����������Ϊ0�����������С�����֡�
��������һ���������������������Һ���û�пո��磺

2

1/2 1/2

1



3

-1/2 -1/2 -1/2

-1 1/2

�������룺
5 1/2 -1/2 1/2 1/2 -1/2
���������
1/2*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>
int find(int a, int b);
void change(int out[], char in[]);
int channum(char in[]);
int main()
{

	int n;
	scanf("%d", &n);
	int i = 0;
	char input[100][50];
	while (i < n)
	{
		scanf("%s", &input[i]);
		i++;
	}
	int sumup[2];
	change(sumup, input[0]);
	i = 1;
	while (i < n)
	{
		int trans[2];
		change(trans, input[i]);
		int t = sumup[1];
		sumup[0] = sumup[0] * trans[1] + sumup[1] * trans[0];
		sumup[1] =t * trans[1];
		i++;
	}

	int commonfactor=find(sumup[0], sumup[1]);

	sumup[0] = sumup[0] / commonfactor;
	sumup[1] = sumup[1] / commonfactor;

	if (abs(sumup[0]) > abs(sumup[1]))
	{
		if (sumup[0] < 0)
		{
			if (sumup[0] % sumup[1] == 0)
			{
				int a = sumup[0] / sumup[1];
				printf("%d", a);
			}
			else
			{
				int a = sumup[0] / sumup[1];
				sumup[0] = (abs(sumup[0]) + sumup[1] * a);
				printf("%d %d/%d", a, sumup[0], sumup[1]);
			}
		}
		if (sumup[0] == 0)
		{
			printf("0");
		}
		if (sumup[0] >0)
		{
			if (sumup[0] % sumup[1] == 0)
			{
				int a = sumup[0] / sumup[1];
				printf("%d", a);
			}
			else
			{
				int a = sumup[0] / sumup[1];
				sumup[0] = (abs(sumup[0]) - sumup[1] * a);
				printf("%d %d/%d", a, sumup[0], sumup[1]);
			}
		}
		goto k;
	}
	if (abs(sumup[0]) < abs(sumup[1]))
	{
		if (sumup[0] > 0)
		{
			printf("%d/%d", sumup[0], sumup[1]);
		}
		if (sumup[0] == 0)
		{
			printf("0");
		}
		if (sumup[0] < 0)
		{
			printf("-%d/%d", abs(sumup[0]), sumup[1]);
		}
		goto k;
	}
	if (abs(sumup[0]) ==abs(sumup[1]))
	{
		if (sumup[0] > 0)
		{
			printf("1", sumup[0], sumup[1]);
		}
		if (sumup[0] == 0)
		{
			printf("0");
		}
		if (sumup[0] < 0)
		{
			printf("-1", abs(sumup[0]), sumup[1]);
		}
	}
	k:return 0;
}




void change(int out[], char in[])
{
	char up[20];
	char down[20];
	int measure = strlen(in);
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < measure)
	{
		while (in[i] != '/')
		{
			up[j] = in[i];
			i++;
			j++;
		}
		i++;
		up[j] = '\0';
		while (i < measure)
		{
			down[k] = in[i];
			i++;
			k++;
		}
		down[k] = '\0';
	}
	if (k != 0)
	{
		out[0] = channum(up);
		out[1] = channum(down);
	}
	else
	{
		out[0] = channum(up);
		out[1] = 1;
	}
}


int find(int a, int b)
{
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	int out = 1;
	int i = 1;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
		{
			out = i;
		}
		i++;
	}
	return out;
}


int channum(char in[])
{
	int measure = strlen(in) - 1;
	int sum = 0;
	int i = 0;
	int flag = strlen(in);
	while (i < flag)
	{
		sum = sum + ((in[i]) - '0') * (int)pow(10, measure);
		measure--;
		i++;
	}
	return sum;
}
