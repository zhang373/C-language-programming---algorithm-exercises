/*单词加密。输入一个字符串和一个非负整数k，对字符串中的每一个字母，用字母表中其后的第k个字母代替，不够k个时再从字母a循环计数。
例如k = 3是，a用d代替，A用D代替，x用a代替，y用b代替，保持大小写不变。字符串中的非字母字符不变。字符串的长度不超过100。

输入：一个字符串和非负整数k

输出：加密的字符串。



样例输入：
Beijing 9
样例输出：
Knrsrwp*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int k;
	char a[105];
	scanf("%s",&a);
	scanf("%d", &k);
	if (k >= 26)
	{
		k = k % 26;
	}
	int i = 0;
	while (i < strlen(a))
	{
		if (((int)a[i] >= 'a' && (int)a[i] <= 'z') || ((int)a[i] >= 'A' && (int)a[i] <= 'Z'))
		{
			if ((int)a[i] >= 'a' && (int)a[i] <= 'z')
			{
				if (k > ('z' - (int)a[i]))
				{
					a[i] = (char)(k - ('z' - (int)a[i]) - 1 + 'a');
				}
				else
				{
					a[i] = (char)((int)a[i] + k);
				}
			}
			if ((int)a[i] >= 'A' && (int)a[i] <= 'Z')
			{
				if (k > ('Z' - (int)a[i]))
				{
					a[i] = (char)(k - ('Z' - (int)a[i]) - 1 + 'A');
				}
				else
				{
					a[i] = (char)((int)a[i] + k);
				}
			}
		}
		else
		{
			a[i] = a[i];
		}
		i++;
	}
	printf("%s", a);
	return 0;
}