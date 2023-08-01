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
    char a[21];
    gets(a);
    int i = 0;
    int b[21];
    while (i < strlen(a))
    {
        if (a[i] == '1')
        {
            b[i] = 1;
        }
        if (a[i] == '0')
        {
            b[i] = 0;
        }
        i++;
    }
    int t = strlen(a) - 1;
    int count=0;
    int j = 0;
      while (t >= 0)
    {
        count = count + b[j] * (int)pow(2, t);
        t--;
        j++;
    }
    printf("%d", count);
    return 0;
}



/* int x;
    (void)scanf("%d",&x);
    int n=0;
    while (x/(int)pow(10,n)== 0)
    {
        n++;
    }
    int i = 0;
    int s = 0;
    int j = n;
    while (i < n)
    {
        s = s + (x) * ((int)pow(2, j));
        i++;
        j--;
    }
    printf("%d", s);
    return 0;*/