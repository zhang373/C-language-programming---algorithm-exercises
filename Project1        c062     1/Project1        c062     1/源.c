/*求n个数的最小公倍数，2 <= n < 10。
输入：n个正整数，以0作为数的结束。用空格隔开。
输出：最小公倍数和这n个数，用一个空格隔开。
样例：
210 54 24 0
7560 210 54 24
注：输入中，输入的数的个数是不确定的，不超过10，不小于2，最后的0是结束标志。
输出中，第1个数是它们的最小公倍数，后面是输入的n个数，中间用一个空格隔开。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int n;
	int a[10];
	int i = 1;
	int k = 0;
	int x;
	scanf("%d", &x);
	a[0] = x;
		while (x != 0)/*input numbers    不支持聚类操作，一个一个输入*/
	    {
		scanf("%d",& x);
		if (x != 0) { a[i] = x; }
		i++;
	     } 
		i = i - 1;/*i  is input number*/
		switch (i)
		{
		case 1:goto:q; break;
		case 2 : goto:w; break;
		case 3:goto:e; break;
		case 4 :goto: r; break;
		case 5:goto:t; break;
		case 6: goto:y; break;
		case 7:goto:u; break;
		case 8: goto:o; break;
		case 9:goto:p; break;
		}
		int m = 1;
	w:while (m%a[0]==0&m%a[1]==0)
		{
		printf("%d", m);
		printf(" %d",
        }
		break;



}