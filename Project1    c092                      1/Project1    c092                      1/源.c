/* 第 11 周 / 编程题 - C092-删除相应字符组成一个新串
编写程序，将s所指字符串中除了下标（从0开始）为奇数、同时ascii值也为奇数的字符之外，其余的所有字符都删除，
串中剩余字符所形成的一个新串放在t所指的一个数组中并显示。若没有满足条件的字符，显示“#”。字符串长度不超过200.

    输入：长度不超过200的字符串（无空格）。

    输出：处理后的字符串。

样例输入：
attend
样例输出：
e*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>
int main()
{
    char a[205];
    gets(a);
    char output[205];
    int i = 0;
    int j = 0;
    int count = 0;
    while (i<strlen(a))
    {
        int c = (int)(a[i]);
        if (i % 2 == 1 && c % 2 == 1)
        {
            output[j] = a[i];
            j++;
            count++;
        }
        i++;
    }
    output[j] = '\0';
    if (count != 0)
    {
        printf("%s", output);
    }
    else
    {
        printf("#");
    }
    return 0;
}