/*从键盘输入一个32位的二进制形式的IP地址，将其转换为点分十进制的表示，如果输入的字符串中含有1和0以外的字符，则输出“该字符串不是正确的IP地址”。

    输入：0、1二进制序列，不会超过32位，位数不足时程序自动在前面补0.

    输出：点分IP地址。



样例输入：
11111111100000011111111110001111
样例输出：
255.129.255.143
*/

int shibushi(char a[]);

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char a[100];
    gets(a);
    int t = strlen(a);
    if (strlen(a) > 32)
    {
        printf("该字符串不是正确的IP地址");
    }
    if (strlen(a) == 32)
    {

    }
    else
    {
        a[t] = '*';

        int i = 0;
        while (i < t)
        {
            a[i + 32 - t] = a[i];
            i++;
        }
        int j = 0;
        a[32] = '\0';
        while (j<32-t)
        {
            a[j] = '0';
            j++;
        }
    }
    if (shibushi(a) == 0)
    {
        printf("该字符串不是正确的IP地址");
    }
    int b[4] = {0};
    int k = 0;
    int c[32];
    int l = 0;
    
    if (shibushi(a) == 1)
    {
        while (l < 32)
        {
            if (a[l] == '1')
            {
                c[l] = 1;
            }
            if (a[l] == '0')
            {
                c[l] = 0;
            }
            l++;
        }
        while (k < 4)
        {   
            int y = 7;
            int j =8*k;
            while (j < 8*k+8)
            {
                
                int count = ((int)pow(2,y))*(c[j]);
                b[k] = b[k] + count;
                j++;
                y--;
            }
                 k++;
                 j = 0;
        }
        printf("%d.%d.%d.%d", b[0], b[1], b[2], b[3]);
    }

  

    return 0;
}





int shibushi( char a[])
{
    int i = 0;
    while (i < 32)
    {
        if ((a[i] == '1') ||( a[i] == '0'))
        {
            if (i == 31)
            {
                return 1;
            }
        }
        else
        {
            return 0;
        }
        i++;
    }
}
