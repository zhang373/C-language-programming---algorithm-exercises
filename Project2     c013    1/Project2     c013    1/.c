/*��̣���һ������4���������ֽ�Ϊ������������֮�ͣ�����ʾȫ���ֱ�����

�������룺
6
���������
6=1+2+3*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int x;
	scanf("%d", &x);
	int m = 1;
	int i = 1;/*iΪ��ʼֵ*/
	int sum = 0;
	int j,v;
	while (i < (x / 2))
	{
		while (sum != x && sum <= x)
		{
			sum = sum + m;
			m = m + 1;
			if (sum == x)
			{
				 j = m-i;/*j��ʾ���˶��ٸ�*/
				 v = i;
			}
			
		}
		i++;
		sum = 0;
		m = i;

	}
	i = v;
	int count = 100;
	printf("%d=", x);
	int k = 1;
	int w = i;
	while (k <= j)
	{
		if (count != 100)
		{
			printf("+%d", w);
			w++;
		}
		if (count == 100)
		{
			printf("%d", w);
			count--;
			w++;
		}
		k++;
	}

	return 0;
}