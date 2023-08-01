/*比较两个字符串的前n个字符，不区分大小写。字符串的长度不超过100。

如果第1个字符串的前n个字符大于第2个字符串的前n个字符，输出1；

如果第1个字符串的前n个字符小于第2个字符串的前n个字符，输出-1；

如果第1个字符串的前n个字符等于第2个字符串的前n个字符，输出0；

  字符比较：字母表中后面的大于前面的。

  输入：两个字符串和一个正整数。

  输出：1、-1或0。

样例输入：
abcxyz  abcdef   5
样例输出：
1*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

char daxiebianxiaoxie(char a);
int main()
{
	char a[105];
	char b[105];
	int n;
	scanf("%s", &a);
	scanf("%s", &b);
	scanf("%d", &n);
	int i = 0;
	while (i < strlen(a))
	{		
		a[i]=daxiebianxiaoxie(a[i]);
		i++;
     }
	int j = 0;
	while (j < strlen(b))
	{
		b[j] = daxiebianxiaoxie(b[j]);
		j++;
	}
	int measure = 0;
	while ((int)a[measure] == (int)b[measure]&&measure<n)
	{
		measure++;
	}
	if (measure == n )
	{
		printf("0");
	}
	if (measure <= n - 1)
	{
		if ((int)a[measure] < (int)b[measure])
		{
			printf("-1");
		}
		if ((int)a[measure] > (int)b[measure])
		{
			printf("1");
		}
	}
	return 0;
}

char daxiebianxiaoxie(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		a = a - 'A' + 'a';
	}
	else
	{
		a = a;
	}
	return a;
}
