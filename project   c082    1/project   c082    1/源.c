/* 第 11 周 / 编程题 - C082-回文字符串判断
"一个字符串，如果第1个字符和最后一个字符相同，第2个字符和倒数第2个相同，...，则称为回文字符串，简称回文串。如deed。

输入一个字符串，判断是否回文字符串。若是则显示YES，否则显示NO。输入的字符串长度不超过200.

样例1：

deed

YES



样例2：

good

NO

样例输入：
d
样例输出：
YES*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
	char input[205];
	gets(input);
	int measure = strlen(input);
	int start = 0;
	int end = strlen(input) - 1;
	while (start < measure)
	{
		if (input[start] == input[end])
		{
			if (start == measure - 1)
			{
				printf("YES");
				goto k;
			}
		}
		else
		{
			printf("NO");
			goto k;
		}
		start++;
		end--;
	}
	k:return 0;
}
