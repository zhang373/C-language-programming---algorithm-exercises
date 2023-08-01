/* 第 12 周 / 编程题 - C144-字符串中查找字符位置
查找一个字符在字符串中的第一个位置并输出这个位置。位置从0开始

输入输出格式：

输入：待查找的字符串和需要查找的字符，可能含有空格。（输入时，待查找的字符串与所需查找的字符用*号隔开）

“待查找字符串*需要查找的字符”

输出：字符的位置（如有多个相同的字符，只查找第一个，如果没有输出-1。）



样例输入：
fbhby Wml*W
样例输出：
6*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>


void change(char input[]);
int main()
{
	char input[200];
	gets(input);
	int measure = strlen(input);
	char check;
	check = input[measure - 1];
	input[measure - 2] = '\0';

	change(input);
	if ((int)check<= 'Z' && (int)check >= 'A')
	{
		check = (char)((int)check - 'A' + 'a');
	}

	int flag=0;
	int out=0;
	int i = 0;
	while (i < strlen(input))
	{
		if (input[i] == check)
		{
			out = i;
			
			flag++;
			break;
		}
		i++;
	}
	if (flag)
	{
		printf("%d", out);
	}
	else
	{
		printf("-1");
	}
	return 0;
}


void change(char input[])
{
	int measure = strlen(input);
	int i = 0;
	while (i < measure)
	{
		if ((int)input[i] <= 'Z' && (int)input[i] >= 'A')
		{
			input[i] = (char)((int)input[i] - 'A' + 'a');
		}
		i++;
	}
}