/* 第 12 周 / 编程题 - C135-分割排序
输入一行数字，如果我们把这行数字中的‘5’都看成空格，那么就得到一行用空格分割的若干非负整数
（可能有些整数以‘0’开头，这些头部的‘0’应该被忽略掉，除非这个整数就是由若干个‘0’组成的，这时这个整数就是0）。
你的任务是：对这些分割得到的整数，依从小到大的顺序排序输出。

输入输出格式：

输入：一行数字（数字之间没有空格），这行数字的长度不大于1000。输入数据保证：分割得到的非负整数不会大于100000000；输入数据不可能全由‘5’组成。 

输出：分割得到的整数排序的结果，相邻的两个整数之间用一个空格分开，每组输出占一行。



样例输入：
0051231232050775
样例输出：
0 77 12312320*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int count(char input[]);
void sour(int cnt[], int n);
int main()
{
	char input[205];
	scanf("%s", &input);
	
	int measure = strlen(input);
	int k = 0;//of input
	int i = 0;//of output first
	int j = 0;//of output second

	char output[100][100];
	while (k < measure)
	{
		if (input[k] != '5')
		{
			output[i][j] = input[k];
			j++;
		}
		if (input[k] == '5')
		{
			output[i][j] = '\0';
			i++;
			j = 0;
		}
		k++;
	}
	output[i][j] = '\0';

	int cnt[100];
	int ii = 0;
	int jj = 0;
	while (ii <= i)
	{
		if (strlen(output[ii]) != 0)
		{
			cnt[jj] = count(output[ii]);
			jj++;
		}
	
		ii++;

	}

	sour(cnt,jj);

	k = 0;
	int flag = 100;
	while (k <jj )
	{
		if (flag == 100)
		{
			printf("%d", cnt[k]);
			flag--;
		}
		else
		{
			printf(" %d",cnt[k]);
		}
		k++;
	}
	return 0;
}




void sour(int cnt[], int n)
{
	for (int  i= 0; i < n; i++)
	{
		for (int j = n - 1; i<j ; j--)
		{
			if (cnt[j] < cnt[j - 1])
			{
				int t = cnt[j];
				cnt[j] = cnt[j - 1];
				cnt[j - 1] = t;
			}
		}
	}
}


int count(char input[])
{
	int sum = 0;
	int measure = strlen(input);
	int i = 0;
	while (i < strlen(input))
	{
		sum = sum + ((int)input[i]-'0') * (int)pow(10, measure - 1);
		i++;
		measure--;
	}
	return sum;
}