/*��ν����������ָ���Ϊ 2 ������������������С������������3��5,5��7Ҳ����������

    ��д�������������[m,n]�е�������������������[2,10]�е���������(3,5)��(5,7)����[2,10]��������������Ϊ2.

    ���룺������m,n,    m,n>1.

    �����[m,n]�е�����������



�������룺
2 100
���������
8*/

int sushuma(int a);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int count = 0;
    int m, n;
    scanf("%d%d", &m, &n);
    int t = m;
    while (t + 2 <= n)
    {
        if (sushuma(t) == 1 && sushuma(t + 2) == 1)
        {
            count++;
        }
        t++;
    }

    printf("%d", count);
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
            if (a % i == 0)
            {
                return 0;
            }
        }
    }
}
