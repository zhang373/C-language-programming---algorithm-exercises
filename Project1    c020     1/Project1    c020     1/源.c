/*任何一个自然数m的立方均可写成m个连续奇数之和。例如： 

　  1^3=1 

　  2^3=3+5 

　  3^3=7+9+11 

　  4^3=13+15+17+19 

    编程实现：输入一自然数n，求组成n^3的n个连续奇数。

 输入：一个正整数n。输出：组成n^3的连续奇数，用一个空格分隔。



样例输入：
10
样例输出：
91 93 95 97 99 101 103 105 107 109*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>



int main()
    {
    int n;
    scanf("%d", &n);
    int i = 1;
    int a[10086];
    int s = 0;
    int j,t;
    while (i < pow(n,3))
    {
         j = 1;
         s = i;t=i;
        while (j < n)
        {
            t = t + 2;
            s = s + t;
            j++;
        }
        if (s == (int)pow(n, 3))
        {
            break;
        }
        else
        {
            i=i+2;
        }
    }
   
    int measure = 0;
    int stop = 10086;
    while (measure < j)
    {
        if (stop != 10086)
        {
            printf(" %d", i + measure * 2);
        }
        if (stop == 10086)
        {
            printf("%d", i);
            stop--;
        }
        measure++;
    }
    return 0;
    }
