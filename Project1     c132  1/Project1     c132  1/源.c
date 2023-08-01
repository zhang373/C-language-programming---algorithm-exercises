/* 第 12 周 / 编程题 - C132-编写函数实现数字逆序排列
编写函数,函数原型如下:

void fun(int n,char res[]);

该函数的功能是将整数n的各位数字逆序排列，存放到res字符数组中。例如整数1035，逆序后为5301。

输入输出格式：

输入：一个整数(整数数位不超过15位)。

输出：逆序后的值。



样例输入：
123456
样例输出：
654321*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

void fun(int n, char res[]);
int main()
{
	char input[25];
	scanf("%s", &input);
	int n = strlen(input);
	char res[25];
	strcpy(res, input);
	fun(n, res);
	res[strlen(input)] = '\0';
	printf("%s", res);

	

	return 0;
}
void fun(int n, char res[])
{
	char tt[25];
	int i = 0;
	int j = n - 1;
	while (i < n)
	{
		tt[i] = res[j];
		i++;
		j--;
	}
	strcpy(res, tt);
}