/*��n��������С��������2 <= n < 10��
���룺n������������0��Ϊ���Ľ������ÿո������
�������С����������n��������һ���ո������
������
210 54 24 0
7560 210 54 24
ע�������У���������ĸ����ǲ�ȷ���ģ�������10����С��2������0�ǽ�����־��
����У���1���������ǵ���С�������������������n�������м���һ���ո������

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int n;
	int a[10];
	int i = 1;
	int k = 0;
	int x;
	scanf("%d", &x);
	a[0] = x;
		while (x != 0)/*input numbers    ��֧�־��������һ��һ������*/
	    {
		scanf("%d",& x);
		if (x != 0) { a[i] = x; }
		i++;
	     } 
		i = i - 1;/*i  is input number*/
		switch (i)
		{
		case 1:goto:q; break;
		case 2 : goto:w; break;
		case 3:goto:e; break;
		case 4 :goto: r; break;
		case 5:goto:t; break;
		case 6: goto:y; break;
		case 7:goto:u; break;
		case 8: goto:o; break;
		case 9:goto:p; break;
		}
		int m = 1;
	w:while (m%a[0]==0&m%a[1]==0)
		{
		printf("%d", m);
		printf(" %d",
        }
		break;



}