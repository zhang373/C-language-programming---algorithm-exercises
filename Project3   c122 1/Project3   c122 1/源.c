/*第 13 周 / 编程题 - C122-计算函数ack(m,n)的值
编程计算函数ack(m,n)的值，其中m,n定义域是非负整数(m<=3,n<=10)。

　 当m=0时，ack(0,n)=n+1

   当n=0时，ack(m,0)=ack(m-1,1)

   其它情况下，ack(m,n)=ack(m-1,ack(m,n-1))



样例输入：
3 6
样例输出：
ack(3,6)=509*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

long long int ack(int m, int n);
int main()
{
	int m;
	int n;
	scanf("%d", &m);
	scanf("%d", &n);
	int out;
	out=ack(m, n);
	printf("ack(%d,%d)=%d",m,n ,out);
	return 0;
}


long long int ack(int m, int n)
{
	while (1)
	{
		if (m == 0)
		{
			return n + 1;
		}
		if (n == 0)
		{
			m = m - 1;
			n = 1;
		}
		if ((m != 0 && n != 0) || (m == 0 && n == 0))
		{
			n = ack(m, n - 1);
			m = m - 1;
		}

	}
}