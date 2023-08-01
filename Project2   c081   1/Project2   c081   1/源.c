/* 第 11 周 / 编程题 - C081-按规则输出倒序字符串
"编写程序，按下列规则倒序输出子字符串。
先输出最后的一个字符，再输出最后两个字符串，在再出后面三个字符..., 
最后输出整个字符串。输入的字符串长度不超过100。

输入：一个字符串

输出：空格隔开的子字符串，用一个空格间隔。

输入输出样例：

student

t nt ent dent udent tudent student

样例输入：
a
样例输出：
a*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>


void print(int start, int end,char input[]);
int main()
{
	char input[105];
	gets(input);
	int end = strlen(input);
	int start = end - 1;
	int measure = 100;
	while (start >= 0)
	{
		if (measure != 100)
		{
			printf(" ");
		}
		else
		{
			measure--;
		}
		print(start, end, input);
		start--;
	}
	return 0;
}

void print(int start, int end,char input[])
{
	int i = start;
	while (i < end)
	{
		printf("%c", input[i]);
		i++;
	}
}