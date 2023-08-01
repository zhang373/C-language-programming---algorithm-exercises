/* C020-输入一自然数n，求组成n^3的n个连续奇数
任何一个自然数m的立方均可写成m个连续奇数之和。例如：

　  1^3=1

　  2^3=3+5

　  3^3=7+9+11

　  4^3=13+15+17+19

    编程实现：输入一自然数n，求组成n^3的n个连续奇数。

 输入：一个正整数n。输出：组成n^3的连续奇数，用一个空格分隔。*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int i = 1;
    int n;
    scanf("%d", &n);
    int x = n * n * n;
    int sum = 5;
    int m = 1, v, j;
    int count = 1;
    int stop = 1;
    while (stop!=9)
    {
        while (count < n)
        {
            sum = sum + m;
            m = m + 2;
            if (sum == x)
            {
                v = m;
                j = i;
                stop = 9;
            }
            count++;
        }
        i = i + 2;
        count = 0;
        m = i;
        sum = 0;
    }
    printf("%d^3=", n);
    int dola = 100;
    int k = 0;
    while (k < n)
    {
        if (dola != 100)
        {
            printf("+%d", j + 2 * k);
        }
        if (dola == 100)
        {
            printf("%d", j);
            dola--;
        }
        k++;
    }
    return 0;
}