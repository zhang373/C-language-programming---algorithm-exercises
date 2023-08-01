/* 第 11 周 / 编程题 - C079-字符串反转函数
"编写字符串反转函数，该函数将指定字符串中的字符左右顺序颠倒排列。该函数的原型为： 

char * mystrrev(char string[]);

其中参数string是待反转的字符串，该函数的返回值为左右顺序颠倒后的字符串指针。

编写主函数，对上述函数进行测试。

样例：

abcdefghijklmn

nmlkjihgfedcba

样例输入：
information
样例输出：
noitamrofni
*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char a[200];
	gets(a);
	int i = 0;
	int measure = strlen(a);
	int k = measure - 1;
	char output[200];
	while (i < measure)
	{
		output[i] = a[k];
		i++; k--;
	}
	output[measure] = '\0';
	printf("%s", output);
}