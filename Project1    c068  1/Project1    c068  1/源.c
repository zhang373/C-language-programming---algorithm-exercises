/*"去掉字符串中的空格。字符串长度不超过200.

输入：带空格的字符串。

输出：不含空格的字符串。

样例：

Washington hosts Chinese folklife festival

WashingtonhostsChinesefolklifefestival



样例输入：
#########!!!
样例输出：
#########!!!*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	char a[2002];
	gets(a);
	int n = strlen(a);
	int i = 0;
	char b[202];
	int c = 0;
	int count=0;
	while (i < n)
	{
		if ((int)a[i] == (int)' ')
		{
			count++;
		}
		if ((int)a[i] != (int)' ')
		{
			b[c] = a[i];
			c++;
		 }
		i++;
	}
	b[i-(int)(count)] = '\0';
	printf_s("%s", b);
	return 0;
}