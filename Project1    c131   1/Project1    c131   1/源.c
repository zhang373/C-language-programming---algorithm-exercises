/* 第 13 周 / 编程题 - C131-编写一个求数组中最小值元素及该元素位置的函数
编写一个求数组中最小值元素及该元素位置的函数，并编写主函数调用。

要求：由键盘输入10个数，并存放于整型数组中。
若最小值有多个，返回第一次出现的位置。

提示：可以定义一个含整型数组，最小元素值和该元素位置的结构体变量。以保证函数能同时返回最小元素值和该元素位置。

输入输出格式：

输入：用户输入的10个数，用空格分隔。

输出：两个数字：第一个数字为数组中的最小元素值，第二个数字为该元素在数组中的下标位置（两个数用空格分开）；如有多个最小值，输出下标最小的一个。



样例输入：
11 22 33 4 5 66 7 8 9 10
样例输出：
4 3*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
	int i = 0;
	int input[10];
	while (i < 10)
	{
		scanf("%d", &input[i]);
		i++;
	}

	typedef struct min
	{
		int number;
		int place;
	} min;

	min out;
	i = 1;
	out.number = input[0];
	out.place = 0;

	while (i < 10)
	{
		if (input[i] < out.number)
		{
			out.number = input[i];
			out.place = i;
		}
		i++;

	}
	printf("%d %d", out.number, out.place);
	return 0;
}