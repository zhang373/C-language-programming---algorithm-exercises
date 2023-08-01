/*
"输入字符串，字符串中有若干星号*,去掉字符串首尾的星号（*），保留中间的星号。 字符串长度不大于200.

  输入：带有*号的字符串。

  输出：首尾不带*号的字符串。

样例：

***street**music****

street**music

样例输入：
stree*****tmusic
样例输出：
stree*****tmusic*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char a[205];
	gets(a);
	int b = strlen(a);
	int i = 0;
	int j;
	int count = 0;
	while (a[i] == '*')
	{
		count++;
		i++;
	}
	char out[205];
	j = count;
	int k = 0;
	while (j < b)
	{
		out[k] = a[j];
		j++;
		k++;
	}
	out[k] = '\0';
	i = b - 1;
	count = 0;
	while (a[i] == '*')
	{
		count++;
		i--;
	}
	out[k - count ] = '\0';
	printf("%s", out);
	return 0;
}