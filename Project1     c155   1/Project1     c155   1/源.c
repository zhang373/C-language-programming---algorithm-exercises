/* �� 12 �� / ����� - C155-��ż����
����n��n������������ż����С�������򣬶������Ӵ�С���������С�����ż����������Ӵ�С����������һ���У���һ���ո������

    ���룺n��n��������,�ÿո������

    ����������С�����ż����������Ӵ�С����������һ���ո����

�������룺
7 78 47 49 54 58 9 52
���������
52 54 58 78 49 47 9*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

void sortdown(int in[], int n);
void sortup(int in[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int input[100];
    int i = 0;
    while (i < n)
    {
        scanf("%d", &input[i]);
        i++;
    }

    int odd[100];
    int even[100];
    int j = 0;
    int k = 0;

    i = 0;
    while (i < n)
    {
        if (input[i] % 2 == 1)
        {
            odd[j] = input[i];
            j++;
        }
        else
        {
            even[k] = input[i];
            k++;
        }
        i++;
    }

    sortup(even, k);
    sortdown(odd, j);

    i = 0;
    while (i < k)
    {
        printf("%d ", even[i]);
        i++;
    }
    i = 0;
    int flag = 100;
    while (i < j)
    {
        if (flag == 100)
        {
            printf("%d", odd[i]);
            flag--;
        }
        else
        {
            printf(" %d", odd[i]);
        }
        i++;
    }


    return 0;
}

void sortup(int in[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (in[j] < in[j - 1])
            {
                int t = in[j];
                in[j] = in[j - 1];
                in[j - 1] = t;
            }
        }
    }
}

void sortdown(int in[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (in[j] > in[j - 1])
            {
                int t = in[j];
                in[j] = in[j - 1];
                in[j - 1] = t;
            }
        }
    }
}