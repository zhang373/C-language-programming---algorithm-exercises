/*�Ӽ�������һ��λ��������20λ���޷��Ŷ���������������ת��Ϊʮ���ơ�

    ���룺����������

    �������Ӧ��ʮ��������



�������룺
11111111
���������
255*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long x;
    (void)scanf("%lld", &x);
    int n = 0;
    while (x / (int)pow(10, n) != 0)
    {
        n++;
    }
    /*������������λ��*/
    long long s = 0;
    int t = x;
    while (n > 0)
    {
        s = s + (t / (int)pow(10, n - 1)) * (int)pow(2, n - 1);
        t = t - (t / (int)pow(10, n - 1)) * (int)pow(10, n - 1);
        n--;
    }
    printf("%lld", s);
    return 0;
}