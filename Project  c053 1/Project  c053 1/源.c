/*输入由4个字母构成的英文单词，按如下格式输出字母，该字母的ASCII码以及该字母的后继字符。每行输出数据之间用一个空格分隔。
输入: 单词
输出：共4行，每行输出字母，该字母的ASCII码，该字母后继字符（空格分隔，每行的最后没有空格）

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char a1, a2, a3, a4;
	scanf("%c%c%c%c", &a1, &a2, &a3, &a4);
	printf("%c %d %c\n", a1, a1, a1 + 1);
	printf("%c %d %c\n", a2, a2, a2 + 1);
	printf("%c %d %c\n", a3, a3, a3 + 1);
	printf("%c %d %c\n", a4, a4, a4 + 1);
	return 0;
}