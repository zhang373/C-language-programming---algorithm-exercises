/* �� 11 �� / ����� - C084-ͳ�Ƶ�2���ַ����ڵ�1���ַ����г��ֵĴ���
"���������ַ�����ͳ�Ƶ�2���ַ��������ٺ�2�ַ����ڵ�1���ַ����г��ֵĴ�����û�г��֣�����Ϊ0.

  ���룺�����ַ������Կո�ָ���

  ��������ִ�����������

����1��

banana  an

2



����2��

bnnnn nn

3

�������룺
nanfinancebananafnainancebanannan  nan
���������
6
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int rathersame(char cutdown[], char cherk[]);
void cutup(char input[], int measure,char cutdown[]);
int main()
{
	char input[200];
	scanf("%s",&input);
	input[strlen(input)] = '\0';
	int mmm = strlen(input);
	char check[20];
	scanf("%s", &check);
	int measure = strlen(check);
	char cutdown[200];
	cutdown[measure] = '\0';
	int count = 0;
	int start = 0;
	while (start <= mmm - measure)
	{
		cutup(input, measure, cutdown, start);
		if (rathersame(cutdown, check) == 1)
		{
			count++;
		}
		start++;
	}
	printf("%d", count);
	return 0;
}

int rathersame(char cutdown[], char cherk[])
{
	int i = 0;
	int measure = strlen(cherk);
	while (i < measure)
	{
		if (cutdown[i] == cherk[i])
		{
			if (i == measure - 1)
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
		i++;
	}
}

void cutup(char input[], int measure,char cutdown[],int start)
{
	int i = 0;
	while (i < measure)
	{
		cutdown[i] = input[i + start];
		i++;
	}
	cutdown[i] = '\0';
}