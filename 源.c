/*输入整数a和b，若a*a+b*b大于等于100，则输出a*a+b*b百位及以上的数字，否则输出a*a+b*b。例如，输入25 25 ，它们的平方和为625+625=1250，百位及以上数为12.

    输入：两个整数，中间用空格隔开

    输出：一个整数。

*/




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int z = x * x + y * y;
    if (x * x + y * y >= 100)
    {
        int a = z / 100;
            printf("%d", a);
    }
    if (z < 100)
    {
        printf("%d", z);
    }

    return 0;
}