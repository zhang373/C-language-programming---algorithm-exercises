/*�Ӽ�������һ��32λ�Ķ�������ʽ��IP��ַ������ת��Ϊ���ʮ���Ƶı�ʾ�����������ַ����к���1��0������ַ�������������ַ���������ȷ��IP��ַ����

    ���룺0��1���������У����ᳬ��32λ��λ������ʱ�����Զ���ǰ�油0.

    ��������IP��ַ��



�������룺
11111111100000011111111110001111
���������
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
        printf("���ַ���������ȷ��IP��ַ");
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
        printf("���ַ���������ȷ��IP��ַ");
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
