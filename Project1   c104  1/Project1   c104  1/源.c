/*�Ƚ������ַ�����ǰn���ַ��������ִ�Сд���ַ����ĳ��Ȳ�����100��

�����1���ַ�����ǰn���ַ����ڵ�2���ַ�����ǰn���ַ������1��

�����1���ַ�����ǰn���ַ�С�ڵ�2���ַ�����ǰn���ַ������-1��

�����1���ַ�����ǰn���ַ����ڵ�2���ַ�����ǰn���ַ������0��

  �ַ��Ƚϣ���ĸ���к���Ĵ���ǰ��ġ�

  ���룺�����ַ�����һ����������

  �����1��-1��0��

�������룺
abcxyz  abcdef   5
���������
1*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

char daxiebianxiaoxie(char a);
int main()
{
	char a[105];
	char b[105];
	int n;
	scanf("%s", &a);
	scanf("%s", &b);
	scanf("%d", &n);
	int i = 0;
	while (i < strlen(a))
	{		
		a[i]=daxiebianxiaoxie(a[i]);
		i++;
     }
	int j = 0;
	while (j < strlen(b))
	{
		b[j] = daxiebianxiaoxie(b[j]);
		j++;
	}
	int measure = 0;
	while ((int)a[measure] == (int)b[measure]&&measure<n)
	{
		measure++;
	}
	if (measure == n )
	{
		printf("0");
	}
	if (measure <= n - 1)
	{
		if ((int)a[measure] < (int)b[measure])
		{
			printf("-1");
		}
		if ((int)a[measure] > (int)b[measure])
		{
			printf("1");
		}
	}
	return 0;
}

char daxiebianxiaoxie(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		a = a - 'A' + 'a';
	}
	else
	{
		a = a;
	}
	return a;
}
