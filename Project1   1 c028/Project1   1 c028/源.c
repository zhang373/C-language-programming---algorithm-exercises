/*��������n����������(1��n����)�ĺ͡����磺n=20ʱ������Ϊ2��4��5��10 �����ǵĺ�Ϊ21�����������Ӻ�Ϊ0��

    ���룺������n��

    �������1�ͱ���֮������ӵĺͣ�������



�������룺
3
���������
0*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    double i = 1;
    int s = 0;
    while (i < n+1 )
    {
        if ((double)(n / i) == (int)(n / i))
        {
            s = s + i + n / i;
        }
        i++;
     }
    s = s/2 - 1 - n;
    printf("%d", s);
    return 0;
}