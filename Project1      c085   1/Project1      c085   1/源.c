/*
"�����ַ������ַ������������Ǻ�*,ȥ���ַ�����β���Ǻţ�*���������м���Ǻš� �ַ������Ȳ�����200.

  ���룺����*�ŵ��ַ�����

  �������β����*�ŵ��ַ�����

������

***street**music****

street**music

�������룺
stree*****tmusic
���������
stree*****tmusic*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char a[205];
	gets(a);
	int b = strlen(a);
	int i = 0;
	int j;
	int count = 0;
	while (a[i] == '*')
	{
		count++;
		i++;
	}
	char out[205];
	j = count;
	int k = 0;
	while (j < b)
	{
		out[k] = a[j];
		j++;
		k++;
	}
	out[k] = '\0';
	i = b - 1;
	count = 0;
	while (a[i] == '*')
	{
		count++;
		i--;
	}
	out[k - count ] = '\0';
	printf("%s", out);
	return 0;
}