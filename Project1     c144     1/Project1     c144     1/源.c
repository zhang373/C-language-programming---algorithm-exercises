/* �� 12 �� / ����� - C144-�ַ����в����ַ�λ��
����һ���ַ����ַ����еĵ�һ��λ�ò�������λ�á�λ�ô�0��ʼ

���������ʽ��

���룺�����ҵ��ַ�������Ҫ���ҵ��ַ������ܺ��пո񡣣�����ʱ�������ҵ��ַ�����������ҵ��ַ���*�Ÿ�����

���������ַ���*��Ҫ���ҵ��ַ���

������ַ���λ�ã����ж����ͬ���ַ���ֻ���ҵ�һ�������û�����-1����



�������룺
fbhby Wml*W
���������
6*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>


void change(char input[]);
int main()
{
	char input[200];
	gets(input);
	int measure = strlen(input);
	char check;
	check = input[measure - 1];
	input[measure - 2] = '\0';

	change(input);
	if ((int)check<= 'Z' && (int)check >= 'A')
	{
		check = (char)((int)check - 'A' + 'a');
	}

	int flag=0;
	int out=0;
	int i = 0;
	while (i < strlen(input))
	{
		if (input[i] == check)
		{
			out = i;
			
			flag++;
			break;
		}
		i++;
	}
	if (flag)
	{
		printf("%d", out);
	}
	else
	{
		printf("-1");
	}
	return 0;
}


void change(char input[])
{
	int measure = strlen(input);
	int i = 0;
	while (i < measure)
	{
		if ((int)input[i] <= 'Z' && (int)input[i] >= 'A')
		{
			input[i] = (char)((int)input[i] - 'A' + 'a');
		}
		i++;
	}
}