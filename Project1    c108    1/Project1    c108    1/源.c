/* �� 12 �� / ����� - C108-��Ҫ������b�е�n��Ԫ�����β��뵽����a��
����һ����20��Ԫ�ص��������鲢��ʼ��Ϊa[20]={1,2,3,4,5,6,7,8,9,10}�����ⶨ��һ����СΪ10����������b��

Ҫ����������n��1<=n<=10����Ȼ������n����������b�У�������һ������k��1<= k <=10����
      ������b�е�n��Ԫ�����β��뵽����a�дӵ�kλ��ʼ�ĵط���������ɺ��������a��Ԫ�ؼ��ÿո�������� 

���룺����n��n������������k��

���������a

�������룺
3 13 14 15 4
���������
1 2 3 4 13 14 15 5 6 7 8 9 10*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
    int a[20] = { 1,2,3,4,5,6,7,8,9,10 };
    int b[10];
    int i = 0;
    int n;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", &b[i]);
        i++;
    }

    int k;
    scanf("%d", &k);
    int j = 0;
    i = 0;
    while (i < k)
    {
        a[j] = a[j];
        i++;
        j++;
    }
    int m = 0;
    
    
    
 while (m < n)
 {
     a[j] = b[m];
     j++;
     m++;
 }
    i++;
    while (i <= 10)
    {
        a[j] = i;
        j++;
        i++;
    }

    i = 0;
    int flag = 100;
    while (i < n + 10)
    {
        if (flag == 100)
        {
            printf("%d", a[i]);
            flag--;
        }
        else
        {
            printf(" %d", a[i]);
        }
        i++;
    }
    return 0;
}