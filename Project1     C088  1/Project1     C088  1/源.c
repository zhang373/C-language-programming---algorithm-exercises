/*���ַ����ײ���*��ȫ���Ƶ��ַ�����β�����м�����*�ţ������м��*�Ų������ַ������Ȳ�����200.

������

***street*****music***

street*****music******

�������룺
stree*****tmusic
���������
stree*****tmusic*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char a[1205];
	scanf("%s", &a);
	int n = strlen(a);
	int count = 0;
	int i = 0;
	int t = 0;
	char b[205];
	while (a[i] == '*')
	{
		b[t] = a[i];
		t++;
		i++;
	}
	b[t] = '\0';
	int k = 0;
	while (b[k] == '*')
	{
		count++;
		k++;
	}
	int measure = strlen(a);
	int y = 0;
	while (y < measure - 3)
	{
		a[y] = a[y + count];
		y++;
	}
	printf("%s",a);

	return 0;
}