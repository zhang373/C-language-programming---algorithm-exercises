/* C020-����һ��Ȼ��n�������n^3��n����������
�κ�һ����Ȼ��m����������д��m����������֮�͡����磺

��  1^3=1

��  2^3=3+5

��  3^3=7+9+11

��  4^3=13+15+17+19

    ���ʵ�֣�����һ��Ȼ��n�������n^3��n������������

 ���룺һ��������n����������n^3��������������һ���ո�ָ���*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int i = 1;
    int n;
    scanf("%d", &n);
    int x = n * n * n;
    int sum = 5;
    int m = 1, v, j;
    int count = 1;
    int stop = 1;
    while (stop!=9)
    {
        while (count < n)
        {
            sum = sum + m;
            m = m + 2;
            if (sum == x)
            {
                v = m;
                j = i;
                stop = 9;
            }
            count++;
        }
        i = i + 2;
        count = 0;
        m = i;
        sum = 0;
    }
    printf("%d^3=", n);
    int dola = 100;
    int k = 0;
    while (k < n)
    {
        if (dola != 100)
        {
            printf("+%d", j + 2 * k);
        }
        if (dola == 100)
        {
            printf("%d", j);
            dola--;
        }
        k++;
    }
    return 0;
}