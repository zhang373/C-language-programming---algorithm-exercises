/* �� 11 �� / ����� - C081-��������������ַ���
"��д���򣬰����й�����������ַ�����
���������һ���ַ����������������ַ��������ٳ����������ַ�..., 
�����������ַ�����������ַ������Ȳ�����100��

���룺һ���ַ���

������ո���������ַ�������һ���ո�����

�������������

student

t nt ent dent udent tudent student

�������룺
a
���������
a*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>


void print(int start, int end,char input[]);
int main()
{
	char input[105];
	gets(input);
	int end = strlen(input);
	int start = end - 1;
	int measure = 100;
	while (start >= 0)
	{
		if (measure != 100)
		{
			printf(" ");
		}
		else
		{
			measure--;
		}
		print(start, end, input);
		start--;
	}
	return 0;
}

void print(int start, int end,char input[])
{
	int i = start;
	while (i < end)
	{
		printf("%c", input[i]);
		i++;
	}
}