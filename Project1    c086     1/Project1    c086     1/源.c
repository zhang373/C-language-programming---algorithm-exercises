/*"��д����ȥ���ַ���ĩβ������Ǻš�
������Ǻţ�*�����ַ�����n��ʹ�ַ���β����*�Ų��ö���n����
������n������ɾ�������*�ţ������ڻ����n������ʲôҲ������
�ַ����м��ǰ���*�Ų�ɾ�����ַ����ĳ��Ȳ�����200���ַ����е��Ǻ���Ӣ���Ǻš� 

    ���룺һ���ַ�����һ���Ǹ��������м��ÿո������

    �����ȥ������*�ŵ��ַ�����



������

***street**music****  2

***street**music**

�������룺
stree*****tmusic    2
���������
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