/*/*"һ������A�д���n��n>0�����������ڲ�����ʹ�����������ǰ���£���ÿ��������ѭ��������m��m>=0����λ�ã�
����A�е������ɣ�A0A1����An-1���任Ϊ��An-m���� An-1A0A1����An-m-1�������m����ѭ������A����ǰ���m��������
����n ( 1<=n<=100)��m��m>=0����n�����������ѭ������mλ�Ժ���������С�

���룺

ռ���У�����

��1������n��m��������n��m֮���ÿո�ָ���

��2����������A�е�n���������ݼ��ÿո�ָ���

�����

ռһ�У����ݼ���һ���ո�ָ���

������

10 5

1 2 3 4 5 6 7 8 9 0



�������룺
1 1
1
���������
1*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n, m;
	(void)scanf("%d%d", &n, &m);
	if (m >= n)
	{
		m = m % n;
	}
	else {
		m = m;
	}
	int a[10086];
	int i = 0;
	(void)scanf("%d", &a[i]);
	i++;
	while (i <= n - 1)
	{
		(void)scanf("%d", &a[i]);
		i++;
	}
	int t = i;
	int count = 0;
	int measure = 0;
	int b[100];

	while (count <m )
	{
		b[measure] =a[i-m] ;
		i++;
		count++;
		measure++;
	}

	int c[100];

	i = 0;
	while (i < t-m)
	{
		c[i] = a[i];
		i++;
	}

	int h = strlen(b);
		i = 0;
		while (i < m)
		{
			a[i] = b[i];
			i++;
		}
		int z = 0;
		while (i < n )
		{
			a[i] = c[z];
			i++;
			z++;
	    }







	int stop = 100;
	int j = 0;
	while (j <= n - 1)
	{
		if (stop != 100)
		{
			printf(" %d", a[j]);
			j++;
		}
		if (stop == 100)
		{
			printf("%d", a[j]);
			j++;
			stop = 10086;
		}
	}
	return 0;
}

///*"һ������A�д���n��n>0�����������ڲ�����ʹ�����������ǰ���£���ÿ��������ѭ��������m��m>=0����λ�ã�
//����A�е������ɣ�A0A1����An-1���任Ϊ��An-m���� An-1A0A1����An-m-1�������m����ѭ������A����ǰ���m��������
//����n ( 1<=n<=100)��m��m>=0����n�����������ѭ������mλ�Ժ���������С�
//
//���룺
//
//ռ���У�����
//
//��1������n��m��������n��m֮���ÿո�ָ���
//
//��2����������A�е�n���������ݼ��ÿո�ָ���
//
//�����
//
//ռһ�У����ݼ���һ���ո�ָ���
//
//������
//
//10 5
//
//1 2 3 4 5 6 7 8 9 0
//
//
//
//�������룺
//1 1
//1
//���������
//1*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//	int n, m;
//	(void)scanf("%d%d", &n, &m);
//	if (m >= n)
//	{
//		m = m % n;
//	}
//	else {
//		m = m;
//	}
//	int a[10086];
//	int i = 0;
//	(void)scanf("%d", &a[i]);
//	i++;
//	while (i <= n - 1)
//	{
//		(void)scanf("%d", &a[i]);
//		i++;
//	}
//	int j = 0;
//	int c = n;
//	while (j <= n - m - 1)
//	{
//		a[c] = a[j];
//		c++;
//		j++;
//	}
//	j = 0;
//	while (j + m <= n - 1)
//	{
//		a[j] = a[j + m];
//		j++;
//	}
//	j = m;
//	while (j <= n - 1)
//	{
//		a[j] = a[j + m];
//		j++;
//	}
//
//	int stop = 100;
//	j = 0;
//	while (j <= n - 1)
//	{
//		if (stop != 100)
//		{
//			printf(" %d", a[j]);
//			j++;
//		}
//		if (stop == 100)
//		{
//			printf("%d", a[j]);
//			j++;
//			stop = 10086;
//		}
//	}
//	return 0;
//}
