/*�ܾ���ǰ�����ﻹ�����һ�Ӳ�ҡ���n��1Ԫֽ�һ���һ�֡����ֺ������ֵ��Ӳ�ң�����ÿ������һö�����ж����ֻ�����nֵ���û��Ӽ������� output:������������ 

���룺����n

�����һ������



�������룺
2
���������
1921*/

#define _CRT_SECURE_NO_WARNINGS   /*�����ڹ������ڵ������������ֶ�ѭ��һ�ߣ����count==100x������ͳ��������ݾ��ü��������*/
#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	int x;
	scanf("%d", &x);
	x = 100 * x;
	int count = 0;
	int i = 1;/*i stands for 5*/
	int j = 1;/*j stands for 2*/
	int k = 1;/*k stands for 1*/
	int sum = i * 5 + j * 2 + k * 1 ;
	while (i * 5   <= x)
	{
		while (j * 2 <= x)
		{
			while(k * 1 <= x)
			{
				sum = i * 5 + j * 2 + k * 1;
				if (sum == x)
				{
					count++;
				}
				k++;
			}
			j++;
			k = 1;
		}
		i++;
		j = 1;
	}

	printf("%d", count);
	return 0;
}