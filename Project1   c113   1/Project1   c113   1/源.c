/*所谓孪生素数是指间隔为 2 的相邻素数，例如最小的孪生素数是3和5,5和7也是孪生数。

    编写程序，求给定区间[m,n]中的孪生数的数量。例如[2,10]中的孪生数有(3,5)和(5,7)，则[2,10]中孪生数的数量为2.

    输入：正整数m,n,    m,n>1.

    输出：[m,n]中的孪生的数量



样例输入：
2 100
样例输出：
8*/

int sushuma(int a);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int count = 0;
    int m, n;
    scanf("%d%d", &m, &n);
    int t = m;
    while (t + 2 <= n)
    {
        if (sushuma(t) == 1 && sushuma(t + 2) == 1)
        {
            count++;
        }
        t++;
    }

    printf("%d", count);
    return 0;
}

int sushuma(int a)
{
    if (a == 1 || a == 2 || a == 3)
    {
        return 1;
    }
    if (a >= 4)
    {
        int i = 2;
        while (i <= a)
        {
            if (a % i != 0)
            {
                i++;
                if (i == a)
                {
                    return 1;
                }
            }
            if (a % i == 0)
            {
                return 0;
            }
        }
    }
}
