/*����һ����������������������ӵĺ͡����磬12�������Ӻ�Ϊ2+2+3=7������������������ֱ����ʾ0.

    ���룺������

    ����������ӵ���ͱ��ʽ���Ӻź͵Ⱥ���Ӣ�ķ��š�



�������룺
16142
���������
2+7+1153=1162*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int sushuornot(int a);
void paixv(int a[], int b);
int main()
{
    int x;
    scanf("%d", &x);
    int a[100];
    int j = 0;
    int buduanzengzhangdesushu;
    int i = 2;
    if (sushuornot(x)) {
        printf("0");
        return 0;
    }
    while (sushuornot(x) == 0)
    {


        while (sushuornot(i) == 0)
        {
            i++;
        }
        while (x % i == 0)
        {
            a[j] = i;
            j++;
            x = x / i;
        }
        i++;
    }
    if (x != 1)a[j] = x;
    else j--;
    int b = j + 1;
    paixv(a, b);
    int c = 1;
    printf("%d", a[0]);
    while (c < b)
    {
        printf("+%d", a[c]);
        c++;
    }

    int count = 0;
    while (c >= 1)
    {
        count = count + a[c - 1];
        c--;
    }
    printf("=%d", count);
    return 0;
}

int sushuornot(int a)
{
    if (a >= 4)
    {
        int i = 2;
        int j = 2;
        int s = 0;
        int stop = 151238132415264;
        while (i <= a && stop != 100)
        {
            while (j <= a && stop != 100)
            {
                s = i * j;
                if (s == a)
                {
                    return 0;
                }
                j++;
            }
            i++;
            s = 0;
            j = 2;
        }
    }
    if (a == 1 || a == 2 || a == 3)
    {
        return 1;
    }
    return 1;
}


void paixv(int a[], int b)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = b - 1; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                int t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }
}