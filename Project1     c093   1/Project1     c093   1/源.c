/*���ַ����������±꣨��0��ʼ�����ַ�˳��ߵ������ַ�12345678�����Ϊ18365472

���룺�ַ����������ո�

���������ַ�����

�������룺
1234567890
���������
1038567492*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

void fanzhuan(char c[]);
int main()
{
	char a[100];
	gets(a);
	int i=0;
	char b[100];//ou����
	char c[100];//ji����
	int bi = 0;
	int ci = 0;
	while (i < strlen(a))
	{
		if (i % 2 == 0)
		{
			/*c[ci] = a[i];
			i++;
			ci++;*/
			b[bi] = a[i];
			i++;
			bi++;
		}
		if (i % 2 == 1)
		{
			c[ci] = a[i];
			i++;
			ci++;
			/*b[bi] = a[i];
			i++;
			bi++;*/
		}
	}
	char t[100];

	b[bi] = '\0';
	strcpy(t, b);
	c[ci] = '\0';
	char output[100];
	fanzhuan(c);
	c[ci] = '\0';
	strcpy(b, t);
	bi = 0;
	ci = 0;
	i = 0;
	while (i < strlen(a))
	{
		if (i % 2 == 0)
		{
			output[i] = b[bi];
			i++;
			bi++;
		}
		else
		{
			output[i] = c[ci];
			i++;
			ci++;
		}
	}
	output[i] = '\0';
	printf("%s", output);

	return 0;
}




void fanzhuan(char c[])
{
	char g[10];
	int i = strlen(c)-1;
	int  j = 0;
	int t = strlen(c);
	while (j < t)
	{
		g[i] = c[j];
		i--;
		j++;
	}
	strcpy(c, g);
}
