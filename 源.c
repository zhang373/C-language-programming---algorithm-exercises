/*��������a��b����a*a+b*b���ڵ���100�������a*a+b*b��λ�����ϵ����֣��������a*a+b*b�����磬����25 25 �����ǵ�ƽ����Ϊ625+625=1250����λ��������Ϊ12.

    ���룺�����������м��ÿո����

    �����һ��������

*/




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int z = x * x + y * y;
    if (x * x + y * y >= 100)
    {
        int a = z / 100;
            printf("%d", a);
    }
    if (z < 100)
    {
        printf("%d", z);
    }

    return 0;
}