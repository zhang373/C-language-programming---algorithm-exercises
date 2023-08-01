/*输入有字母和数字组成的字符串s和t（串长不超过100个字符），
将在字符串s中出现，但未在字符串t中出现的字符(区分大小写)组成一个新的字符串放在u中，
u中字符按原字符串中字符顺序排列，不去掉重复字符，输出u。
若s中的字符在t中都出现过，输出#。

    例如：当s="112345"，t="2467"时，u="1135"。若s="12", t="12",输出"#"

    输入：两个字符串，中间用空格隔开。scanf("%s%s",s,t);

    输出：结果串

样例输入：
12345 6789
样例输出：
12345*/

int chuxianguomei(char a, char t[]);

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char s[105];
    char t[105];
    scanf("%s%s", &s, &t);
    char u[105];
    int count = 0;
    int i = 0;
    int j = 0;
    while (i < strlen(s))
    {
        if (chuxianguomei(s[i],t) == 1)
        {
            u[j] = s[i];
            j++;
            count++;
        }
        i++;
    }

    u[j] = '\0';
    if (count == 0)
    {
        printf("#");
    }
    if (count != 0)
    {
        printf("%s", u);
    }

}

int chuxianguomei(char a, char t[])
{
    int i = 0;
    while (i < strlen(t))
    {
        if (a != t[i])
        {
            i++;
            if (i == strlen(t))
            {
                return 1;
            }
        }
        else
        {
            return 0;
        }
    }
   
}