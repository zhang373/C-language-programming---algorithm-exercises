/*�� 13 �� / ����� - C036-K��������ת��
K��������ת��������Ǹ�����a����ת��ΪK��������2<=K<=32��K������ʹ�õķ�����0��9,A,...  (ʹ�õ���ĸΪ��д)��
    ���룺һ��ʮ���ƷǸ�����a��һ��������K, 2<=K<=32��
    �����K���Ʊ�ʾ��������

�������룺
0  9
���������
0*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<math.h>


int main()
{
    int input;
    char kkk;
    char rubbish;
    scanf("%d", &input);
    int k;
    scanf("%d", &k);

    int digit[200];
    int t = input;
    int i = 0;
    while ((int)pow(k, i) <= input)
    {
        i++;
    }
    int flag = i;
    int r = 0;
    
    while (r < i)
    {
        if ((int)(t / k) != 0)
        {
            digit[r] = t % k;
            t = (int)(t / k);
        }
        else
        {
            digit[r] = t;
        }
        r++;
    }
    r=i-1;
    while (r >= 0)
    {
        if (digit[r] >= 0 && digit[r] <= 9)
        { 
            printf("%d", digit[r]);
         }
        else
        {
            printf("%c", digit[r] - 10 + 'A');
        }
        r--;
    }
    if (i == 0)
    {
        printf("%d", input);
    }
    return 0;
}