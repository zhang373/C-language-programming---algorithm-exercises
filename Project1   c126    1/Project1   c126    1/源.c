/*编写一个函数来判断一个正整数是否为回文数，若是则返回1，否则返回0。所谓回文数是指各位数字左右对称的数，例如1221、3553等。该函数的原型为：

int ispalindrome(int n);

其中参数n是待判断的正整数，该函数有返回结果。

编写主函数，对上述函数进行测试，并找出1000∽n (1000 ≤ n <10000)之间的所有回文数，按从小到大的次序在屏幕上显示输出，每个数之间用一个空格分隔，最后一个数后面没有空格。



样例输入：
1200
样例输出：
1001 1111*/


int ispalindrome(int n);
void paixv(int a[], int n);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int a[10086];
	int i = 1000;
	int k = 0;
	int n;
	int stop = 100;
	scanf("%d", &n);
	while (i < n)
	{
		if (ispalindrome(i) == 1)
		{
			a[k] = i;
			k++;
			if (stop != 100)
			{
				printf(" %d", i);
			}
			if (stop == 100)
			{
				printf("%d", i);
				stop = 1;
			}
		}
		i++;
	}
	return 0;
}

//int ispalindrome(int n)
//{
//	int m = n;
//	int i = 0;
//	while ( n / (int)pow(10,i) != 0)
//	{
//		i++;
//	}
//	int j=1;
//    while (i > 0)
//	{
//
//		int a = n / (int)pow(10, i - 1);
//	
//
//		if (n/(int)pow(10,i-1)==m%(int)pow(10,j))
//		{
//			if (i == 0)
//			{
//				return 1;
//			}
//			i--; j++;
//		}
//		else
//		{
//			return 0;
//		}
//
//
//		n = (n - a * (int)pow(10, i ))/10;
//
//	}
//}
int ispalindrome(int n)
{
	int i = 0;
	while (n / (int)pow(10, i) != 0)
	{
		i++;
	}
	int a[10];
	int t = i;
	int r = 0;
//while (t >= 0);
//	{
//		int g = n / (int)pow(10, t - 1);
//		a[r] = g;
//		r++;
//		n = (n - g * (int)pow(10, t)) / 10;
//		t--;
//	}
	while (t>0)
	{
		int g = n / (int)pow(10, t - 1);
		a[r] = g;
		r++;
		n = (n - g * (int)pow(10, t - 1));
		t--;
	}
	int j = 0;
	while (i > 0)
	{
		if (a[i-1] == a[j])
		{
			if (i == 1)
			{
				return 1;
			}
			i--; j++;
		}
		else
		{
			return 0;
		}
	}
}
void paixv(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}
