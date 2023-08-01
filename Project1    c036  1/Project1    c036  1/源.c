/*第 13 周 / 编程题 - C036-K进制数的转换
K进制数的转换。输入非负整数a将其转换为K进制数，2<=K<=32。K进制数使用的符号是0～9,A,...  (使用的字母为大写)。
    输入：一个十进制非负整数a和一个正整数K, 2<=K<=32。
    输出：K进制表示的整数。

样例输入：
0  9
样例输出：
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