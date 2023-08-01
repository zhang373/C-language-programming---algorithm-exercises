/* 第 12 周 / 编程题 - C108-按要求将数组b中的n个元素依次插入到数组a中
定义一个含20个元素的整型数组并初始化为a[20]={1,2,3,4,5,6,7,8,9,10}。另外定义一个大小为10的整型数组b。

要求：输入整数n（1<=n<=10），然后输入n个整数存入b中，再输入一个整数k（1<= k <=10），
      将数组b中的n个元素依次插入到数组a中从第k位开始的地方，插入完成后，输出数组a（元素间用空格隔开）。 

输入：整数n，n个整数，整数k。

输出：数组a

样例输入：
3 13 14 15 4
样例输出：
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