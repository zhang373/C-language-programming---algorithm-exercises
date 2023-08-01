/* 第 12 周 / 编程题 - C148-按字母序升序输出字符串
定义字符串数组str，其数组长度为81，键盘读入一个字符串（少于81个字符）。将该字符串中出现的所有小写字母按字母序升序输出（字母序为：abcdefg…xyz）。

输入输出格式要求：

输入输出各占一行，第一行是输入，第二行是输出。

样例输入：
Bcaf48c
样例输出：
accf*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>

int main()
{
	typedef struct word
	{
		char name;
		int frequence;
	}word;
	word wrd[27];
	int i = 0;
	while (i < 27)
	{
		wrd[i].name = (char)(i + 'a');
		wrd[i].frequence = 0;
		i++;
	}
	char in[100];
	gets(in);
	int k = 0;
	while (k < strlen(in))
	{
		if ((int)in[k] >= 'a' && (int)in[k] <= 'z')
		{		
			wrd[(int)in[k] - 'a'].frequence++;
	    }
		k++;
	}


	char out[27];
	i = 0; k = 0;
	while (i < 27)
	{
		if (wrd[i].frequence != 0)
		{
			int mm = 0;
			while (mm < wrd[i].frequence)
			{
				out[k] = i + 'a';
				k++;
				mm++;
			}
		     
		}
		i++;
	}
	out[k] = '\0';
	if (k != 0)
	{
		printf("%s", out);
	}
	else
	{
		printf("NO");
	}
	return 0;
}