/* �� 12 �� / ����� - C153-��Ҫ�����������
��������n��2n�������������Ϊ����������С�������򣬽����Ϊż�������Ӵ�С����n������12��

    ���룺����n��2n��������

    �������Ҫ����������������Կո������

�������룺
2 4 3 8 2
���������
4 3 8 2*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>



void sortdown(int in[], int n);
void sortup(int in[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int input[26];
    int i = 0;
    while (i < 2 * n)
    {
        scanf("%d", &input[i]);
        i++;
    }
    int oddnumber[13];
    int evennumber[13];
    int j = 0;//belongs to odd
    int k = 0;//belongs to even
    i = 0;
    while (i < 2*n)
    {
        if (i % 2 == 0)
        {
            evennumber[k] = input[i];
            k++;
        }
        else
        {
            oddnumber[j] = input[i];
            j++;
        }
        i++;
    }
    sortdown(oddnumber,j);
    sortup(evennumber,k);

    i = 0; k = 0; j = 0;
    while (i < 2 * n)
    {
        if (i % 2 == 0)
        {
           input[i]= evennumber[k];
            k++;
        }
        else
        {
         input[i]= oddnumber[j];
            j++;
        }
        i++;
    }

    i = 0;
    int flag = 100;
    while (i < 2 * n)
    {
        if (flag == 100)
        {
            printf("%d", input[i]);
            flag--;
        }
        else
        {
            printf(" %d", input[i]);
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