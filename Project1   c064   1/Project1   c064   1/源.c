/*第 13 周 / 编程题 - C064-翻译数字
编写一个程序，从键盘中读入一个数字串，把它转为数字的小写英语单词输出，如读入234，输出“two three four”。

输入：一串数字

输出：用空格隔开的英文基数词，小写。

样例：

234

two three four

样例输入：
123
样例输出：
one two three*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>


int main()
{
	char input[100];
	int flag = 100;
	gets(input);
	int i = 0;
	int measure = strlen(input);
	while (i < measure)
	{
		if (flag == 100)
		{
			int t = (int)input[i] - '0';
			switch (t)
			{
			case 0:printf("zero"); break;
			case 1:printf("one"); break;
			case 2:printf("two"); break;
			case 3:printf("three"); break;
			case 4:printf("four"); break;
			case 5:printf("five"); break;
			case 6:printf("six"); break;
			case 7:printf("seven"); break;
			case 8:printf("eight"); break;
			case 9:printf("nine"); break;
			}
			flag--;
		}
		else
		{
			int t = (int)input[i] - '0';
			switch (t)
			{
			case 0:printf(" zero"); break;
			case 1:printf(" one"); break;
			case 2:printf(" two"); break;
			case 3:printf(" three"); break;
			case 4:printf(" four"); break;
			case 5:printf(" five"); break;
			case 6:printf(" six"); break;
			case 7:printf(" seven"); break;
			case 8:printf(" eight"); break;
			case 9:printf(" nine"); break;
			}
		}
		i++;
	}
	return 0;
}