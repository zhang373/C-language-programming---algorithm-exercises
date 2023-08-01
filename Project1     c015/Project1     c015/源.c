/*从键盘输入一个位数不超过20位的无符号二进制整数，将其转换为十进制。

    输入：二进制序列

    输出：对应的十进制数。



样例输入：
11111111
样例输出：
255*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long x;
    (void)scanf("%lld", &x);
    int n = 0;
    while (x / (int)pow(10, n) != 0)
    {
        n++;
    }
    /*计算输入数的位数*/
    long long s = 0;
    int t = x;
    while (n > 0)
    {
        s = s + (t / (int)pow(10, n - 1)) * (int)pow(2, n - 1);
        t = t - (t / (int)pow(10, n - 1)) * (int)pow(10, n - 1);
        n--;
    }
    printf("%lld", s);
    return 0;
}