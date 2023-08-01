/*编写程序，将用户输入的最多5位八进制数转换为十进制。

输入：一个整数。

输出：一个整数。



样例输入：
7
样例输出：
7
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int x;
	scanf("%d", &x);
	int i = 0;
	while (x / (int)pow(10, i) != 0)
	{
		i++;
	}
	int t = x;
	
	int count = 0;
	while (i>0)
	{
		int a;
		int b;
		a = t / (int)pow(10, i - 1);
		count = count + a * (int)pow(8, i - 1);
		t = t - a * (int)pow(10, i - 1);
		i--;
	}
	printf("%d", count);
	return 0;
}