/*输入一个正整数，求出它的质因子的和。例如，12的质因子和为2+2+3=7。如果输入的是质数，直接显示0.

    输入：正整数

    输出：质因子的求和表达式。加号和等号是英文符号。



样例输入：
16142
样例输出：
2+7+1153=1162
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
viodpaixv(int a[],int n);
int zhishuornot(int a);
int main()
{
    int x;
    int a[100];
    int j = 0;/*和a配套使用*/
    scanf("%d", &x);
    if (zhishuornot(x) == 1)
    {
        printf("0");
    }
    int i = 1;
    int dashu;
    if (zhishuornot(x) == 0)
    {
        dashu = x;
        while (dashu > 4)
        {
            dashu = x;
            while (zhishuornot(dashu) == 0)
            {
                dashu = dashu - 1;
                if (zhishuornot(dashu) == 1)
                {
                    a[j] = dashu;
                    j++;
                }
            }
            dashu = x - dashu;
        }
        if (dashu == 4)
        {
            a[j] = 2;
            a[j + 1] = 2;
        }
        if (dashu == 1 || dashu == 2 || dashu == 3)
        {
            a[j] = dashu;
        }
    }

    int measure = strlen(a);
    int measuremeasure = measure;
    while (measure - 1 >= (-1))
    {
        if (measuremeasure != measure)
        {
            printf("+%d", a[measure - 1]);
            measure--;
        }
        if (measuremeasure == measure)
        {
            printf("%d", a[measuremeasure - 1]);
            measure--;
        }
        
    }
    printf("=%d", x);

    return 0;
}

viodpaixv(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j - i] < a[j])
            {
                int t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }
}

int zhishuornot(int a)
{
    int i = 2;
    int j = 2;
    int s = 0;
    if (a >= 4) {
        while (i < a)
        {
            j = 1;
            while (j < a)
            {
                s = i * j;
                if (s == a)
                {
                    return 0;
                }
                j++;
            }
            s = 0;
            i++;
        }
    }
    if (a == 1 || a == 2 || a == 3) 
    {
        return 1;
    }
    return 1;
}
