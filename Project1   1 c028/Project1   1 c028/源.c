/*求正整数n的所有因子(1和n除外)的和。例如：n=20时，因子为2、4、5、10 ，它们的和为21。素数的因子和为0。

    输入：正整数n。

    输出：除1和本身之外的因子的和，整数。



样例输入：
3
样例输出：
0*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    double i = 1;
    int s = 0;
    while (i < n+1 )
    {
        if ((double)(n / i) == (int)(n / i))
        {
            s = s + i + n / i;
        }
        i++;
     }
    s = s/2 - 1 - n;
    printf("%d", s);
    return 0;
}