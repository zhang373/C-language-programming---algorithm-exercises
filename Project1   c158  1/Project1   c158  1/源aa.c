/*第 12 周 / 编程题 - C158-按要求输出奇数位置的字符排序后的字符串
用户输入一个字符串，将字符串中的奇数位置上的字符按字母表中的顺序排序，仍按顺序保存在奇位置上。例如teacher，t,a,h,r排序后结果为a,h,r,t，则结果字符串为：aehcret。

输入格式：长度小于100的字符串，

输出：奇数位置的字符排序后的字符串

样例输入：
import
样例输出：
import*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

void sortup(char odd[], int n);
int main()
{
	char input[105];
	gets(input);
	int i = 0;
	int measure = strlen(input);
	char odd[100];
	int k = 0;
	while (i < measure)
	{
		if (i % 2 == 0)
		{
			odd[k] = input[i];
			k++;
		}
		i++;
	}

	odd[k] = '\0';
	sortup(odd,k);

	i = 0; k = 0;
	while (i < measure)
	{
		if (i % 2 == 0)
		{
			 input[i]= odd[k];
			k++;
		}
		i++;
	}

	printf("%s", input);
	return 0;
}

void sortup(char odd[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if ((int)odd[j] < (int)odd[j - 1])
			{
				char t = odd[j];
				odd[j] = odd[j - 1];
				odd[j - 1] = t;
			}
		}
	}
}