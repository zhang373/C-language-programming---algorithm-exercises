/* �� 12 �� / ����� - C076-����������
"��һ����������������������У����̰������¹�������

���ֵ�����м䣬��Сֵ����������ֵ�������ң�����ֵ��Ϊ0��

����2�У���һ��n��ʾҪ��������ĸ�����n���������ڶ��������n������

��������������飬���ݿո�ָ������һ�����ݺ���û�пո�

����1��

����

5

12 20 9 88 32

���

9 0 88 0 20



����2��

����

3 

66 10 30

���

10 66 30

�������룺
9
99 1 2 3 4 5 6 7 8
���������
1 0 0 0 99 0 0 0 5
*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>
int main()
{
	int n;
	(void)scanf("%d", &n);
	if (n >= 3)
	{
		int i = 0;
		int input[100];
		while (i < n)
		{
			(void)scanf("%d", &input[i]);
			i++;
		}

		//max
		int max = input[0];
		i = 1;
		while (i < n)
		{
			if (input[i] > max)
			{
				max = input[i];
			}
			i++;
		}
		//min
		int min = input[0];
		i = 1;
		while (i < n)
		{
			if (input[i] < min)
			{
				min = input[i];
			}
			i++;
		}

		//sour
		for (int ii = 0; ii < n; ii++)
		{
			for (int jj = n - 1; jj > ii; jj--)
			{
				if (input[jj] < input[jj - 1])
				{
					int t = input[jj];
					input[jj] = input[jj - 1];
					input[jj - 1] = t;
				}

			}
		}

		//middle
		int middle = input[(n - 1) / 2];

		i = 0;
		while (i < n)
		{
			if (i != 0 && i != n - 1 && i != (n - 1) / 2)
			{
				input[i] = 0;
			}
			i++;
		}
		input[0] = min;
		input[n - 1] = middle;
		input[(n - 1) / 2] = max;

		i = 0;
		int flag = 100;
		while (i < n)
		{
			if (flag == 100)
			{
				printf("%d", input[i]);
				flag--;
			}
			else
			{
				printf(" %d", input[i]);
			}
			i++;
		}
	}
	if (n == 1)
	{
		int input;
		scanf("%d", &input);
		printf("%d %d %d", input, input, input);
	}
	return 0;
}