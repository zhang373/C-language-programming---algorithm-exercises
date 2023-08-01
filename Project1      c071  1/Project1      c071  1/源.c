/*"����n,m,��������n<=m, �ҳ�[n, m]�����ڸ�λ���ֶ���ͬ�����ܱ�3,5,7������ż����

     ���룺��n,m���ÿո������n<=m.

     ��������ɷ���������������һ���ո������������û��������������ʱ��ʾ-1.

����1��

100 500

210 420



����2��

100 200

-1



�������룺
100 1000
���������
210 420 630 840*/

int buyiyangbu(int a);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int i = n;
    int a[10086];
    int j = 0;
    while (i <= m)
    {
        if (buyiyangbu(i) == 1)
        {
            a[j] = i;
            j++;
        }
        i++;
    }
    int stop = 100;
    int count = 0;
    int k = 0;
    while(k<j)
    {
        if ((a[k] % 3 == 0) && (a[k] % 5 == 0) && (a[k] % 7 == 0)&&(a[k]%2==0))
        {
            count++;
            if (stop != 100)
            {
                printf(" %d", a[k]);
            }
            if (stop == 100)
            {
                printf("%d", a[k]);
                stop = 5201314;
            }
        }
        k++;
    }

    if (count == 0)
    {
        printf("-1");
    }

    return 0;
}

int buyiyangbu(int a)
{
    int t = 0;
    while (a / (int)pow(10, t) != 0)
    {
        t++;
    }
    int b[10];
    int k = 0;
    while (t>0)
    {
        int x = a / (int)pow(10, t - 1);
        b[k] = x;
        k++;
        a=a-x* (int)pow(10, t - 1);
        t--;
    }
    int m = 0;
    int n = 0;
    while (m < k-1)
    {
        n = m + 1;
        while (n < k)
        {
            if (b[m]!=b[n])
            {
                if (m == k-2 && n == k-1)
                {
                    return 1;
                }
            }
            else
            {
                return 0;
            }
            n++;
        }
        m++;
        
    }
}
