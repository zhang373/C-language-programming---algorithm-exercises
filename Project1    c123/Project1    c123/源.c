/*第 12 周 / 编程题 - C123-电话簿排序
编写一个程序，读入n个用户姓名和电话号码，按姓名的字典顺序排列后，输出用户的姓名和电话号码，n从键盘输入。

样例输入：
3
zhang 12345678
wang 23456789
liu 34567890
样例输出：
liu 34567890
wang 23456789
zhang 12345678
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int cmpr(char tt[], char list[]);
int main()
{
	int n;
	scanf("%d", &n);
	char list[100][100];
	int start = 0;
	while (start <= n)
	{
		gets (list[start]);
		start++;
	}
	strcpy(list[0], list[1]);
	strcpy(list[1], list[2]);
	strcpy(list[2], list[3]);
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (cmpr(list[j],list[j-1])==-1)
			{
				char t[1][100];
				strcpy(t, list[j]);
				strcpy(list[j], list[j - 1]);
				strcpy(list[j - 1], t);
			}
		}
	}

	int end = 0;
	int measure = 100;
	while (end < n)
	{
		if (measure != 100)
		{
			printf("\n");
		}
		else
		{
			measure--;
		}
		printf("%s", list[end]);
		end++;
	}
	return 0;
}

int cmpr(char tt[], char list[])
{
	int i = 0;
	while ((int)tt[i] == (int)list[i])
	{
		i++;
	}
	if ((int)tt[i] < (int)list[i])
	{
		return -1;
	}
	else
	{
		return 1;
	}
}