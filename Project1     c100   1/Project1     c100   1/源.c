/* 第 11 周 / 编程题 - C100-将字符串中的空格改为逗号
编写程序，输入字符串到字符数组s中，将字符串中的空格均改为逗号（每1个空格对应1个英文逗号）。 
输入一行：字符串。 
输出一行：改变后的字符串； 

若没有空格，则输出字符串“NotFound”。

样例输入：
zzz  yyy   xxx   aa
样例输出：
zzz,,yyy,,,xxx,,,aa
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char input[200];
	gets(input);
	int measure = strlen(input);
	int i = 0;
	int count = 0;
	while (i < measure)
	{
		if (input[i] == ' ')
		{
			input[i] = ',';
			count++;
		}
		i++;
	}
	if (count != 0)
	{
		printf("%s", input);
	}
	else
	{
		printf("NotFound");
	}
	return 0;
}