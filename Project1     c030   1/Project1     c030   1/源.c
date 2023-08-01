/*单词加密。输入一个字符串和一个非负整数k，对字符串中的每一个字母，用字母表中其后的第k个字母代替，
不够k个时再从字母a循环计数。例如k=3是，a用d代替，A用D代替，x用a代替，y用b代替，保持大小写不变。字符串中的非字母字符不变。字符串的长度不超过100。

    输入：一个字符串和非负整数k

    输出：加密的字符串。



样例输入：
Beijing 9
样例输出：
Knrsrwp*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<math.h>

int main()
{
    char a[100];
    int k;
    scanf("%s", &a);
    scanf("%d", &k);
    if (k >= 26)
    {
        k = k % 26;
    }
    char b[100];
    int i = 0;
    int j = 0;
    while (i < strlen(a))
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                if (('z' - (int)a[i]) <= k)
                {
                    b[j] = (char)((int)a[i]+k);
                    j++;
                }
                else
                {
                    k = k - ('z' - (int)a[i]);
                    b[j] = (char)((int)a[i] + k);
                    j++;
                }
            }
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                if (('Z' - (int)a[i]) >= k)
                {
                    b[j] = (char)((int)a[i] + k);
                    j++;
                }
                else
                {
                    k = k-('Z' - (int)a[i]);
                    b[j] = (char)((int)a[i] + k);
                    j++;
                }
            }
        }
        else
        {
            b[j] = a[i];
            j++;
        }
        i++;
    }
    b[j] = '\0';
    printf("%s", b);
    return 0;
}