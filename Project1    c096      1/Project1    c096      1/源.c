/*输入一个长度不超过 100 的字符串，删除串中的重复字符。

  输入：

  输入要检查的字符串，长度不超过100个字符。例如：abacaeedabcdcd。

  输出：

  删除重复字符后的字符串。例如：abced。

样例输入：
give
样例输出：
give
*/

int shanchu(char a[], int b, int i);
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
	char a[105];
	gets(a);
	int i = 0;
	while (i < strlen(a))
	{
		shanchu(a,strlen(a),i);
		i++;
	}
	
	printf("%s", a);
	return 0;
}

int shanchu(char a[], int b,int i)
{
	k:i = i;
	int count=0;
	int j = i + 1;
	if (a[b - 1] != a[i])
	{
		while (j < b)
		{
			if ((int)a[i] == (int)a[j])
			{
				int t = j;
				while (j + i <= b)
				{
					a[j] = a[j + 1];
					j++;
				}
				count++;
				a[b-1]='\0';
				j = t - 1;
			}
			j++;
			b = strlen(a);
		}
	}
	if (a[b - 1] == a[i]&&b>i+1)
	{
		a[b - 1] = '\0';
		b = strlen(a);
		goto k;
	}
	return 0;
}
