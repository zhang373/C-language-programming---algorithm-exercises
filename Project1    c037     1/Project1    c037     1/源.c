/*第 13 周 / 编程题 - C037-乘积中各位数字组成的最大数
任意输入一个自然数，将该数乘以3，输出乘积和乘积中各位数字组成的最大数。例如，输入 5370 ，乘3结果为16110，则输出为 16110,61110 。
    输入格式： 自然数 n
    输出格式： 乘3结果和乘积中各位数字组成的最大数，用英文逗号隔开。

样例输入：
32539
样例输出：
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