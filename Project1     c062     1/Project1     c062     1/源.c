/*��n��������С��������2<=n<10��

���룺n������������0��Ϊ���Ľ������ÿո������

�������С����������n��������һ���ո������

������

210 54 24 0

7560 210 54 24

    ע�������У���������ĸ����ǲ�ȷ���ģ�������10����С��2������0�ǽ�����־��

����У���1���������ǵ���С�������������������n�������м���һ���ո������



�������룺
10 4 8 6  0
���������
120 10 4 8 6
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

void paixv(int a[],int n);
int shifou(int m,int a[],int e);

int main()
{
    int a[11];
    int x;
    scanf("%d", &x);
    int i = 0;
    while (x != 0)
    {
        a[i] = x;
        scanf("%d", &x);
        i++;
    }
    int l = 0;
    int b[50];
    while (l <= i - 1)
    {
        b[l] = a[l];
        l++;
    }

    paixv(a, i);
    int m = a[i-1];


    while (shifou(m, a,i) == 0)
    {
        m++;
    }
    printf("%d", m);

    int g = 0;
 while (g<=i-1 )
    {
        printf(" %d", b[g]);
        g++;
    }

  return 0;
}

void paixv(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                int t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }
}

int shifou(int m, int a[],int e)
{
    int j = 0; int k = 0;
    while (j <= m)
    {
        if (m % a[j] == 0)
        {
            if (k == e-1)
            {
                return 1;
            }
        }
        else
        {
            break;
        }
        j++; k++;
    }
    return 0;
}
