/*�κ�һ����Ȼ��m����������д��m����������֮�͡����磺 

��  1^3=1 

��  2^3=3+5 

��  3^3=7+9+11 

��  4^3=13+15+17+19 

    ���ʵ�֣�����һ��Ȼ��n�������n^3��n������������

 ���룺һ��������n����������n^3��������������һ���ո�ָ���



�������룺
10
���������
91 93 95 97 99 101 103 105 107 109*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>



int main()
    {
    int n;
    scanf("%d", &n);
    int i = 1;
    int a[10086];
    int s = 0;
    int j,t;
    while (i < pow(n,3))
    {
         j = 1;
         s = i;t=i;
        while (j < n)
        {
            t = t + 2;
            s = s + t;
            j++;
        }
        if (s == (int)pow(n, 3))
        {
            break;
        }
        else
        {
            i=i+2;
        }
    }
   
    int measure = 0;
    int stop = 10086;
    while (measure < j)
    {
        if (stop != 10086)
        {
            printf(" %d", i + measure * 2);
        }
        if (stop == 10086)
        {
            printf("%d", i);
            stop--;
        }
        measure++;
    }
    return 0;
    }
