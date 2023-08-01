/* 第 11 周 / 编程题 - C078-加密字符串
"编程函数，将字符串（长度小于20个字符）用替换加密法译成密码。

替换加密的加密规则是：将原来的字母用字母表中其后面的第3个字母来替换，
对于字母表中最后的三个字母，可将字母表看成是首尾衔接的

。如字母c就用f来替换，字母y用b来替换。例如输入字符串为“Study”，则加密后的字符串为“Vwxgb”。

样例：

Study

Vwxgb

样例输入：
Student
样例输出：
Vwxghqw*/


#define _CRT_SECURE_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

char change(char subject);
int main()
{
	char input[200];
	gets(input);
	int i = 0;
	int measure = strlen(input);
	while (i < measure)
	{
		input[i]=change(input[i]);
		i++;
	}
	printf("%s", input);
	return;
}

char change(char subject)
{
	if (subject == 'X' || subject == 'Y' || subject == 'Z' || subject == 'x' || subject == 'y' || subject == 'z')
	{
		if(subject == 'X')
		{
			subject = 'A';
		}
		if (subject == 'Y')
		{
			subject = 'B';
		}
		if (subject == 'Z')
		{
			subject = 'C';
		}
		if (subject == 'x')
		{
			subject = 'a';
		}
		if (subject == 'y')
		{
			subject = 'b';
		}
		if (subject == 'z')
		{
			subject = 'c';
		}
	}
	else
	{
		subject = (char)((int)subject + 3);
	}
	return subject;
}