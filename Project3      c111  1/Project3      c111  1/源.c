/* 第 12 周 / 编程题 - C111-提取字符串中的整数并输出
输入字母、数字和空格组成的字符串，提取字符串中的整数并输出，字符串中的非数字字符视为分割符。
输出数据间以英文逗号分隔，末尾没有逗号。并换行输出其和值。若字符串中没有数据时，输出“NO”。
输入的字符串长度不超过80。 

输入格式：占一行，输入字符串。

输出格式：占两行。第一行：各数据间用一个英文逗号分隔，第二行：它们的和值。



样例输入：
1 2 3
样例输出：
1,2,3
6
*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<math.h>


int change(char in[]);
int main()
{
	char input[205];
	gets(input);
	int i = 0;
	int measure = strlen(input);
	while (i < measure)
	{
		if ((int)input[i] >= '0' && (int)input[i] <= '9')
		{

		}
		else
		{
			input[i] = ' ';
		}
		i++;
	}

	i = 0; int j = 0; int k = 0;
	char output[100][100];
	while (i < measure)
	{
		
		if (input[i] != ' ')
		{
			output[j][k] = input[i];
			k++;
		}
		else
		{
			output[j][k] = '\0';
			j++;
			k = 0;
		}
		i++;
	}
	output[j ][k] = '\0';

	int out[100];
	i = 0;
	k = 0;
	while (i <= j)
	{
		if (strlen(output[i]) != 0)
		{
			out[k] = change(output[i]);
			k++;
		}
		i++;
	}

	if (k > 0)
	{
		i = 0;
		int flag = 100;
		while (i < k)
		{
			if (flag == 100)
			{
				printf("%d", out[i]);
				flag++;
			}
			else
			{
				printf(",%d", out[i]);
			}
			i++;
		}
	}
	else
	{
		printf("NO");
	}
	
	//sum
	i = 0;
	int sum = 0;
	while (i < k)
	{
		sum = sum + out[i];
		i++;
	}
	if (k > 0)
	{
		printf("\n");
		printf("%d", sum);
	}
	return 0;
}

int change(char in[])
{
	int measure = strlen(in);
	int i = 0;
	int weishu = measure-1;
	int sum = 0;
	while (i < measure)
	{
		sum = sum + ((int)in[i] - '0') * (int)pow(10, weishu);
		i++;
		weishu--;
	}
	return sum;
}