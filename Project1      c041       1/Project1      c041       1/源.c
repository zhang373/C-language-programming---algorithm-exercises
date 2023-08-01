/*叛逆期的小明什么都喜欢反着做，连看数字也是如此（负号除外），比如：小明会把1234它看成4321；把-1234看成-4321；把230看成032 (032=32)；把-230看成-032(-032=-32)。
现在，小明做了一些a+b和a-b的题目(a, b为整数且不含前导0)，
如果给你这些题目正确的答案，你能猜出小明会做得到什么答案吗？

输入：
两个整数x,y(-1000000 < = x, y < =1000000), x表示a+b的正确答案，y表示a-b的正确答案。
输入保证合法，且不需考虑a或b是小数的情况。
输出：
输出两个整数s t，之间用一个空格分开，其中s表示小明将得到的a+b答案，t表示小明将得到的a-b答案。

样例输入：
20 6
样例输出：
38 24*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int a = (x + y) / 2;
	int b = (x - y) / 2;
	int wronga;
	int wrongb;
	if (a > 0)
	{
		/*a = 234;/*flat*/
		int i = 0;
		while (a / (int)pow(10, i) != 0)
		{
			i++;
	     }
		int s = 0;
		int k = 0;
		int t = a;
		while (i > 0)
		{
			s = s + (t / (int)pow(10, i - 1)) * (int)pow(10, k);
			t = t - (t / (int)pow(10, i - 1)) * (int)pow(10, i - 1);
			k++;
			i--;
		}
		wronga = s;
	}
	if (a <= 0)
	{
		a = -1*a;/*flat*/
		int i = 0;
		while (a / (int)pow(10, i) != 0)
		{
			i++;
		}
		int s = 0;
		int k = 0;
		int t = a;
		while (i > 0)
		{
			s = s + (t / (int)pow(10, i - 1)) * (int)pow(10, k);
			t = t - (t / (int)pow(10, i - 1)) * (int)pow(10, i - 1);
			k++;
			i--;
		}
		wronga = -1*s;
	}
	if (b > 0)
	{
		/*a = 234;/*flat*/
		int i = 0;
		while (b / (int)pow(10, i) != 0)
		{
			i++;
		}
		int s = 0;
		int k = 0;
		int t = b;
		while (i > 0)
		{
			s = s + (t / (int)pow(10, i - 1)) * (int)pow(10, k);
			t = t - (t / (int)pow(10, i - 1)) * (int)pow(10, i - 1);
			k++;
			i--;
		}
		wrongb = s;
	}
	if (b <= 0)
	{
		b = -1 * b;/*flat*/
		int i = 0;
		while (b / (int)pow(10, i) != 0)
		{
			i++;
		}
		int s = 0;
		int k = 0;
		int t = b;
		while (i > 0)
		{
			s = s + (t / (int)pow(10, i - 1)) * (int)pow(10, k);
			t = t - (t / (int)pow(10, i - 1)) * (int)pow(10, i - 1);
			k++;
			i--;
		}
		wrongb = -1 * s;
	}


	x = wronga + wrongb;
	y = wronga - wrongb;
	printf("%d %d", x, y);
	return 0;
}