/* �� 11 �� / ����� - C092-ɾ����Ӧ�ַ����һ���´�
��д���򣬽�s��ָ�ַ����г����±꣨��0��ʼ��Ϊ������ͬʱasciiֵҲΪ�������ַ�֮�⣬����������ַ���ɾ����
����ʣ���ַ����γɵ�һ���´�����t��ָ��һ�������в���ʾ����û�������������ַ�����ʾ��#�����ַ������Ȳ�����200.

    ���룺���Ȳ�����200���ַ������޿ո񣩡�

    ������������ַ�����

�������룺
attend
���������
e*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>
int main()
{
    char a[205];
    scanf("%s", a);
    char output[205];
    int i = 0;
    int j = 0;
    while (i < strlen(a))
    {
        int c = (int)a[i];
        if (i % 2 == 1 && c % 2 == 1)
        {
            output[j] = a[i];
            j++;
        }
        i++;
    }
    printf('%s', output);
    return 0;
}