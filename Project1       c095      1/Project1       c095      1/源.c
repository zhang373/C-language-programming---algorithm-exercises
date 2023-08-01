/*如果一个数列中的某一段（至少有两个元素）的各元素值均相同，则称之为等值数列段。等值数列段中元素的个数叫做等值数列段的长度。

  输入：

  序列长度N和N个整数（其中1<=N<=50), 以空格隔开。

  输出：

  数组中长度最大的等值数列段的始末下标（0～N-1），用英文逗号分隔。如果没有等值数列段，则输出NO.

  说明：

  如果有多个同等长度的等值数列，只输出第一个等值数列的起止下标。



样例输入：
7 3 1 2 1 1 2 2
样例输出：
3,4*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int n;
	int j = 0;
	int a[100];
	scanf("%d", &n);
	while (j < n)
	{
		int x;
		scanf("%d", &x);
		a[j] = x;
		j++;
	}



	int i = 0;
	int start=0;
	int end=1;
	int length=0;
	int maxstart=0;
	int maxend=0;
	int maxlength = 0;
	while (i  < n)
	{
		while (a[start] == a[end])
		{
			end++;
			length++;
			i++;
		}
		if (length >maxlength)
		{
			maxstart = start;
			maxend = end;
			maxlength = length;
		}
		start = end;
		end = end + 1;
		length = 0;
		i++;
	}

	if (maxlength == 0)
	{
		printf("NO");
	}
	if (maxlength != 0)
	{
		printf("%d,%d", maxstart, maxend - 1);
	}
	return 0;
}




/* 2 2 2 2 2 4 5 6 2*/