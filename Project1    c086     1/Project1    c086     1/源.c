/*"编写程序，去掉字符串末尾多余的星号。
输入带星号（*）的字符串和n，使字符串尾部的*号不得多于n个；
若多于n个，则删除多余的*号；若少于或等于n个，则什么也不做，
字符串中间和前面的*号不删除。字符串的长度不超过200。字符串中的星号是英文星号。 

    输入：一个字符串和一个非负整数，中间用空格隔开。

    输出：去掉多余*号的字符串。



样例：

***street**music****  2

***street**music**

样例输入：
stree*****tmusic    2
样例输出：
stree*****tmusic*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char a[205];
    scanf("%s",&a);
    int measure;
    scanf("%d", &measure);
    int count = 0;
    int i;

    
    i = strlen(a) - 1;
    count = 0;
    while (a[i] == '*')
    {
        count++;
        i--;
    }
    if (count <= measure)
    {
       
    }
    else
    {
        a[strlen(a) - (count-measure)] = '\0';
    }
    printf("%s", a);
    return 0;
}