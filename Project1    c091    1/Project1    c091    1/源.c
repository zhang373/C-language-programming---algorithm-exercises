/*�� 13 �� / ����� - C091-����n����m��Ԫ���Ƶ������ĩβ
һά�����а�˳������1,2,3,...,15��15������������n,m, 1<=n<=m<=15Ϊ����������n����m��Ԫ���Ƶ������ĩβ��

    ���룺������n,m���м��ÿո������

    �����˳��ı������Ԫ�أ���Ӣ�Ķ��Ÿ�����ĩβû�ж��š�

�������룺
3 8
���������
1,2,9,10,11,12,13,14,15,3,4,5,6,7,8*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int input[15];
    int i = 0;
    while (i < 15)
    {
        input[i] = i + 1;
        i++;
    }

    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    i = 0;
    int target[15];
    int left[15];
    int k = 0;
    int j = 0;
    while (i < 15)
    {
        if (i<n-1 || i>=m)
        {
            left[j] = input[i];
            j++;
        }
        else
        {
            target[k] = input[i];
            k++;
        }

        i++;
    }

    if (j != 0)
    {
        i = 0;
        int flag = 100;
        while (i < 15 - (m - n + 1))
        {
            if (flag == 100)
            {
                printf("%d", left[i]);
                flag--;
            }
            else
            {
                printf(",%d", left[i]);
            }
            i++;
        }
        i = 0;
        while (i < m - n + 1)
        {
            printf(",%d", target[i]);
            i++;
        }
    }
    else
    {
        i = 0;
        int flag = 100;
        while (i < m - n + 1)
        {
            if (flag == 100)
            {
                flag--;
                printf("%d", target[i]);
            }
            else
            {
                printf(",%d", target[i]);
            }
            i++;
        }
    }
    return 0;
}