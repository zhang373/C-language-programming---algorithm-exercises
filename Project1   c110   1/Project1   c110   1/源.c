/* 第 12 周 / 编程题 - C110-删除字符串中所有非小写字母字符
输入一个英文字符串（长度<81）可能包含空格，
删除其中所有非小写字母字符，并输出删除后的字符串（小写字母的相对位置保持不变）。

样例输入：
AaBbCc &d*e%
样例输出：
abcde*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
	char input[100];
	gets(input);
	char output[100] = {'\0'};
	int i = 0;
	int k = 0;
	int measure = strlen(input);
	while (i < measure)
	{
		if ((int)input[i] <= 'z' && (int)input[i] >= 'a')
		{
			output[k] = input[i];
			k++;
		}
		i++;
	}
	printf("%s",output);
	return 0;
}