/*��������ĸ��������ɵ��ַ���s��t������������100���ַ�����
�����ַ���s�г��֣���δ���ַ���t�г��ֵ��ַ�(���ִ�Сд)���һ���µ��ַ�������u�У�
u���ַ���ԭ�ַ������ַ�˳�����У���ȥ���ظ��ַ������u��
��s�е��ַ���t�ж����ֹ������#��

    ���磺��s="112345"��t="2467"ʱ��u="1135"����s="12", t="12",���"#"

    ���룺�����ַ������м��ÿո������scanf("%s%s",s,t);

    ����������

�������룺
12345 6789
���������
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