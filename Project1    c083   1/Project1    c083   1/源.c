/* 第 11 周 / 编程题 - C083-交叉输出字符串
"输入两个字符串，交叉输出（第1个字符串的字符先输出），长度不同时，
最后只输出长的字符串中的字符。
例如team和good,输出为tgeoaomd ；
若两个字符串是challenge和put,则输出为cphuatllenge。

字符的长度不超过100。输入字符串间以空格分隔。

样例：

challenge put

cphuatllenge

样例输入：
territorial put
样例输出：
tpeurtritorial
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char input1[105];
	scanf("%s", &input1);
	int length1 = strlen(input1);
	input1[length1] = '\0';
	char input2[105];
	scanf("%s", &input2);
	int length2 = strlen(input2);
	input2[length2] = '\0';



	if (length1 == length2)
	{
		int i = 0;
		int k = 0;
		while (i < length1)
		{
			printf("%c", input1[i]);
			printf("%c", input2[i]);
			i++;
		}
	}

	if (length1 > length2)
	{
		int i = 0;
		int k = 0;
		while (i < length2)
		{
			printf("%c", input1[i]);
			printf("%c", input2[i]);
			i++;
		}
		while (i < length1)
		{
			printf("%c", input1[i]);
			i++;
		}
	}

	if (length1 < length2)
	{
		int i = 0;
		int k = 0;
		while (i < length1)
		{
			printf("%c", input1[i]);
			printf("%c", input2[i]);
			i++;
		}
		while (i < length2)
		{
			printf("%c", input2[i]);
			i++;
		}
	}

	return 0;
}

