/*"��[n,m]�����е����������������ĸ�����

    ���룺n,m

    ������г�[n,m]�е������������м���һ���ո�����������ʾ�����ĸ�����

������

10 30

11 13 17 19 23 29 6



�������룺
101 101
���������
101 1
*/

int sushuma(int a);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int count = 0;//count should not be pulsed by 1 finally
    int n, m;
    int a[100];
    scanf("%d%d", &n, &m);
    int i = n;
    while (i <= m)
    {
        if (sushuma(i) == 1)
        {
            a[count] = i;
            count++;
        }
        i++;
    }
    int j = 0;
    int stop = 100;
    while (j < count)
    {
        if (stop != 100)
        {
            printf(" %d", a[j]);
        }
        if (stop == 100)
        {
            printf("%d", a[j]);
            stop = 1;
        }
        j++;
    }

    printf(" %d", count);
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
            else
            {
                return 0;
            }
        }
    }
    return 0;
}
