/* 第 12 周 / 编程题 - C146-按ASCII排序输出字符串
输入两个字符串s,t，按ASCII顺序输出在s或t中出现过(不区分大小写)的字符(全部转为大写输出)，
重复的字符只出现一次。如s="meeting" 和t=" sayING", 则u=" AEGIMNSTY"。s,t长度不超过100。

输入：两个字符串中间用空格隔开

输出：结果字符串，按ASCII排序。

样例输入：
discussed security
样例输出：
CDEIRSTUY*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


void change(char in[]);
int main()
{
	typedef struct word
	{
		char name;
		int frequence;
	}word;
	word wrd[26];
	int i = 0;
	while (i < 26)
	{
		wrd[i].name = (char)(i + 'A');
		wrd[i].frequence = 0;
		i++;
	}

	char s[100];
	scanf("%s", &s);
	char t[100];
	scanf("%s", &t);

	change(s);
	change(t);


	int k = 0;
	while (k < strlen(s))
	{
		wrd[(int)s[k] - 'A'].frequence++;
		k++;
	}

	k = 0;
	while (k < strlen(t))
	{
		wrd[(int)t[k] - 'A'].frequence++;
		k++;
	}

	char out[26];
	i = 0;
	k = 0;
	while (i < 26)
	{
		if (wrd[i].frequence != 0)
		{
			out[k] = (char)(i + 'A');
				k++;
		}
		i++;
	}
	out[k] = '\0';
	printf("%s", out);
	return 0;
}




void change(char in[])
{
	int i = 0;
	while (i < strlen(in))
	{
		if ((int)in[i] >= 'a' && (int)in[i] <= 'z')
		{
			in[i] = (char)((int)in[i] - 'a' + 'A');

		}


		i++;
	}
}