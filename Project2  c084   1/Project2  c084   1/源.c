/* 第 11 周 / 编程题 - C084-统计第2个字符串在第1个字符串中出现的次数
"输入两个字符串，统计第2个字符串（至少含2字符）在第1个字符串中出现的次数。没有出现，次数为0.

  输入：两个字符串，以空格分隔。

  输出：出现次数，整数。

样例1：

banana  an

2



样例2：

bnnnn nn

3

样例输入：
nanfinancebananafnainancebanannan  nan
样例输出：
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