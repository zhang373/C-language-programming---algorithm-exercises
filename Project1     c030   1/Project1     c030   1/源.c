/*���ʼ��ܡ�����һ���ַ�����һ���Ǹ�����k�����ַ����е�ÿһ����ĸ������ĸ�������ĵ�k����ĸ���棬
����k��ʱ�ٴ���ĸaѭ������������k=3�ǣ�a��d���棬A��D���棬x��a���棬y��b���棬���ִ�Сд���䡣�ַ����еķ���ĸ�ַ����䡣�ַ����ĳ��Ȳ�����100��

    ���룺һ���ַ����ͷǸ�����k

    ��������ܵ��ַ�����



�������룺
Beijing 9
���������
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