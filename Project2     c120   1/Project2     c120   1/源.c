/* �� 11 �� / ����� - C120-ȥ��һ���ַ����г�ͷ����β���ո�������пո�
��д������ȥ��һ���ַ����г�ͷ����β���ո�������пո񣬲���д���������е��ò��ԡ�

���룺

ռһ�У�ע��������ַ������Ȳ��ᳬ��80��

�����

ռһ��



�������룺
a,b,c
���������
a,b,c*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>

void delete(char a[],int nnn[]);
int main()
{
	char a[200];
	gets(a);
	int nnn[2];
	delete(a,nnn);
	char output[10086];
	int i = 0;
	while (i < nnn[0])
	{
		output[i] = ' ';
		i++;
	}
	output[i] = '\0';
	strcat(output, a);
	i = strlen(output);
	int count = 1;
	while (count <= nnn[1])
	{
		output[i] = ' ';
		i++;
		count++;
	}
	output[i]='\0';
	printf("%s", output);
	return 0;
}


void delete(char a[],int nnn[])
{
	
	int i = strlen(a);
	int counthead = 0;
	int countfoot = 0;
	int measure = 0;
	int j = 0;
	while (a[j] == ' ' && measure == 0)
	{
		counthead++;
		j++;
	}
	measure = 0;
	while (a[i-1] == ' ' && measure == 0)
	{
		countfoot++;
		i--;
	}
	measure = 0;
	char c[10086];
	j = counthead;
	int k = 0;
	while (j < i)
	{
		c[k] = a[j];
		j++;
		k++;
	}
	c[i-counthead] = '\0';
	int m = 0;
	int n = 0;
	char b[30][30];
	measure = strlen(c);
	i = 0;
	k = 0;
	int count = 0;
	while (i < measure)
	{
		while (c[i] != ' ')
		{
			b[m][n] = c[i];
			n++;
			i++;
			count++;
			if (i == measure)
			{
				goto k;
			}
		}
		b[m][count] = '\0';
		while (c[i] == ' ')
		{
			i++;
			if (i == measure)
			{
				goto k;
			}
		}
		m++;
		n = 0;
		count = 0;
	}
	k:b[m][count] = '\0';
	i = 0;
	char out[10086];
	while (i < m)
	{
		strcat(b[0], b[i + 1]);
		i++;
	}
	strcpy(a,b);
	nnn[0] = counthead;
	nnn[1] = countfoot;
}
