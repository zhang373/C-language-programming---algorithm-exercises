/*�����ַ��������Ȳ�����200���������ո�������1���ַ���������β�ַ��⣬��������ַ���ascii�뽵�����С�

�������룺
announced
���������
auonnnecd*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>



void sortdown(char in[], int n);
int main()
{
	char input[205];
	gets(input);
	int measure = strlen(input);
	char cutdown[205];
	int i = 1;
	int k = 0;
	while (i < measure - 1)
	{
		cutdown[k] = input[i];
		k++;
		i++;
	}
	cutdown[k] = '\0';
	sortdown(cutdown,k);
	printf("%c", input[0]);
	printf("%s", cutdown);
	printf("%c", input[measure-1]);

	return 0;
}

void sortdown(char in[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if ((int)in[j] > (int)in[j - 1])
			{
				char t = in[j];
				in[j] = in[j - 1];
				in[j - 1] = t;
			}
		}
	}
}