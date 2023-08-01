/*第 12 周 / 编程题 - C075-字母排序
"输入只含小写字母的字符串，要求按字典序以从小到大的顺序输出，且输出的每个字符之间空1格。(字符串长度不超过20）

样例：

abazc

a a b c z

样例输入：
hello
样例输出：
e h l l o*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[25];
	gets(input);
	int measure = strlen(input);
	
	for (int i = 0; i < measure; i++)
	{
		for (int j = measure - 1; j > i; j--)
		{
			if ((int)input[j] < (int)input[j - 1])
			{
				char tt;
				tt = input[j];
				input[j] = input[j - 1];
				input[j - 1] = tt;
			}
		}
	}
	int i = 0;
	int flag = 100;
	while (i < measure)
	{
		
		if (flag == 100)
		{
			printf("%c",input[i]);
			flag--;
		}
		else
		{
			printf(" %c", input[i]);
		}
		i++;
	}
	return 0;
}