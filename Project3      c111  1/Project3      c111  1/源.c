/* �� 12 �� / ����� - C111-��ȡ�ַ����е����������
������ĸ�����ֺͿո���ɵ��ַ�������ȡ�ַ����е�������������ַ����еķ������ַ���Ϊ�ָ����
������ݼ���Ӣ�Ķ��ŷָ���ĩβû�ж��š�������������ֵ�����ַ�����û������ʱ�������NO����
������ַ������Ȳ�����80�� 

�����ʽ��ռһ�У������ַ�����

�����ʽ��ռ���С���һ�У������ݼ���һ��Ӣ�Ķ��ŷָ����ڶ��У����ǵĺ�ֵ��



�������룺
1 2 3
���������
1,2,3
6
*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<math.h>


int change(char in[]);
int main()
{
	char input[205];
	gets(input);
	int i = 0;
	int measure = strlen(input);
	while (i < measure)
	{
		if ((int)input[i] >= '0' && (int)input[i] <= '9')
		{

		}
		else
		{
			input[i] = ' ';
		}
		i++;
	}

	i = 0; int j = 0; int k = 0;
	char output[100][100];
	while (i < measure)
	{
		
		if (input[i] != ' ')
		{
			output[j][k] = input[i];
			k++;
		}
		else
		{
			output[j][k] = '\0';
			j++;
			k = 0;
		}
		i++;
	}
	output[j ][k] = '\0';

	int out[100];
	i = 0;
	k = 0;
	while (i <= j)
	{
		if (strlen(output[i]) != 0)
		{
			out[k] = change(output[i]);
			k++;
		}
		i++;
	}

	if (k > 0)
	{
		i = 0;
		int flag = 100;
		while (i < k)
		{
			if (flag == 100)
			{
				printf("%d", out[i]);
				flag++;
			}
			else
			{
				printf(",%d", out[i]);
			}
			i++;
		}
	}
	else
	{
		printf("NO");
	}
	
	//sum
	i = 0;
	int sum = 0;
	while (i < k)
	{
		sum = sum + out[i];
		i++;
	}
	if (k > 0)
	{
		printf("\n");
		printf("%d", sum);
	}
	return 0;
}

int change(char in[])
{
	int measure = strlen(in);
	int i = 0;
	int weishu = measure-1;
	int sum = 0;
	while (i < measure)
	{
		sum = sum + ((int)in[i] - '0') * (int)pow(10, weishu);
		i++;
		weishu--;
	}
	return sum;
}