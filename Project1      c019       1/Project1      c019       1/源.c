/*����һ����������������������ӵĺ͡����磬12�������Ӻ�Ϊ2+2+3=7������������������ֱ����ʾ0.

    ���룺������

    ����������ӵ���ͱ��ʽ���Ӻź͵Ⱥ���Ӣ�ķ��š�



�������룺
16142
���������
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
    int j = 0;/*��a����ʹ��*/
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
