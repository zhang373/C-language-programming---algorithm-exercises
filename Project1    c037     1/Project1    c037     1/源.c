/*�� 13 �� / ����� - C037-�˻��и�λ������ɵ������
��������һ����Ȼ��������������3������˻��ͳ˻��и�λ������ɵ�����������磬���� 5370 ����3���Ϊ16110�������Ϊ 16110,61110 ��
    �����ʽ�� ��Ȼ�� n
    �����ʽ�� ��3����ͳ˻��и�λ������ɵ����������Ӣ�Ķ��Ÿ�����

�������룺
32539
���������
97617,97761*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

void sortdown(char in[]);
int change(char in[]);
void chge(int in, char output[]);
int main()
{
    char input[200];
    gets(input);
    int measure = strlen(input);
    int number = change(input);
    printf("%d,", number * 3);
    int inner = number * 3;
    char output[200];
    chge(inner, output);


    sortdown(output);

    printf("%s", output);
    if (strlen(input) == 1 && input[0] == '0')
    {
        printf("0");
    }
    return 0;
}

int change(char in[])
{
    int measure = strlen(in) - 1;
    int i = 0;
    int flag = measure + 1;
    int sum = 0;
    while (i <= flag)
    {
        sum = sum + (in[i] - '0') * (int)pow(10, measure);
        measure--;
        i++;
    }
    return sum;
}

void chge(int in, char output[])
{
    int i = 0;
    while (in / (int)pow(10, i) != 0)
    {
        i++;
    }
    int k = 0;
    output[i] = '\0';
    while (i > 0)
    {
        output[k] = (char)(in / (int)pow(10, i - 1)+'0');
        in = in - (int)(output[k] - '0') * (int)pow(10, i - 1);
        i--;
        k++;
    }

}


void sortdown(char in[])
{
    int n = strlen(in);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if ((int)in[j] > (int)in[j - 1])
            {
                char t = in[j];
                in[j] = in[j - 1];
                in[j - 1] = t;
            }
        }
    }
}