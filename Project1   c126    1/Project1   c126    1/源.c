/*��дһ���������ж�һ���������Ƿ�Ϊ�������������򷵻�1�����򷵻�0����ν��������ָ��λ�������ҶԳƵ���������1221��3553�ȡ��ú�����ԭ��Ϊ��

int ispalindrome(int n);

���в���n�Ǵ��жϵ����������ú����з��ؽ����

��д���������������������в��ԣ����ҳ�1000��n (1000 �� n <10000)֮������л�����������С����Ĵ�������Ļ����ʾ�����ÿ����֮����һ���ո�ָ������һ��������û�пո�



�������룺
1200
���������
1001 1111*/


int ispalindrome(int n);
void paixv(int a[], int n);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int a[10086];
	int i = 1000;
	int k = 0;
	int n;
	int stop = 100;
	scanf("%d", &n);
	while (i < n)
	{
		if (ispalindrome(i) == 1)
		{
			a[k] = i;
			k++;
			if (stop != 100)
			{
				printf(" %d", i);
			}
			if (stop == 100)
			{
				printf("%d", i);
				stop = 1;
			}
		}
		i++;
	}
	return 0;
}

//int ispalindrome(int n)
//{
//	int m = n;
//	int i = 0;
//	while ( n / (int)pow(10,i) != 0)
//	{
//		i++;
//	}
//	int j=1;
//    while (i > 0)
//	{
//
//		int a = n / (int)pow(10, i - 1);
//	
//
//		if (n/(int)pow(10,i-1)==m%(int)pow(10,j))
//		{
//			if (i == 0)
//			{
//				return 1;
//			}
//			i--; j++;
//		}
//		else
//		{
//			return 0;
//		}
//
//
//		n = (n - a * (int)pow(10, i ))/10;
//
//	}
//}
int ispalindrome(int n)
{
	int i = 0;
	while (n / (int)pow(10, i) != 0)
	{
		i++;
	}
	int a[10];
	int t = i;
	int r = 0;
//while (t >= 0);
//	{
//		int g = n / (int)pow(10, t - 1);
//		a[r] = g;
//		r++;
//		n = (n - g * (int)pow(10, t)) / 10;
//		t--;
//	}
	while (t>0)
	{
		int g = n / (int)pow(10, t - 1);
		a[r] = g;
		r++;
		n = (n - g * (int)pow(10, t - 1));
		t--;
	}
	int j = 0;
	while (i > 0)
	{
		if (a[i-1] == a[j])
		{
			if (i == 1)
			{
				return 1;
			}
			i--; j++;
		}
		else
		{
			return 0;
		}
	}
}
void paixv(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}
