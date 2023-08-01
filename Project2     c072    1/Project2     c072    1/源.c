/* 第 11 周 / 编程题 - C072-删除字符
编写程序，输入字符串到字符数组s中，再输入一个字符给变量c，判断s中是否有c，若有则将该字符从s中删除后输出。若没有，则输出字符串“NotFound”。

输入2行，1个字符串和1个字符：

输出：删除后的字符串

样例1：

输入：

smiles

s

输出：

mile

样例2：

输入：

smiles

a

输出：

NotFound

*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>

int main()
{
	char delete;

	char c[250];
	gets(c);
	int i = 0;
	int measure = strlen(c);
	char output[250];
	int k = 0;

	scanf("%c", &delete);
	int count = 0;
	while (i < measure)
	{
		if (c[i] != delete)
		{
			output[k] = c[i];
			k++;
		}
		else
		{
			count++;
		}
		i++;
	}

	output[measure - count] = '\0';
	if (count == 0)
	{
		printf("NotFound");
	}
	else
	{
		printf("%s", output);
	}
	return 0;
}