/*����һ�����Ȳ����� 100 ���ַ�����ɾ�����е��ظ��ַ���

  ���룺

  ����Ҫ�����ַ��������Ȳ�����100���ַ������磺abacaeedabcdcd��

  �����

  ɾ���ظ��ַ�����ַ��������磺abced��

�������룺
give
���������
give
*/

int shanchu(char a[], int b, int i);
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
	char a[105];
	gets(a);
	int i = 0;
	while (i < strlen(a))
	{
		shanchu(a,strlen(a),i);
		i++;
	}
	
	printf("%s", a);
	return 0;
}

int shanchu(char a[], int b,int i)
{
	k:i = i;
	int count=0;
	int j = i + 1;
	if (a[b - 1] != a[i])
	{
		while (j < b)
		{
			if ((int)a[i] == (int)a[j])
			{
				int t = j;
				while (j + i <= b)
				{
					a[j] = a[j + 1];
					j++;
				}
				count++;
				a[b-1]='\0';
				j = t - 1;
			}
			j++;
			b = strlen(a);
		}
	}
	if (a[b - 1] == a[i]&&b>i+1)
	{
		a[b - 1] = '\0';
		b = strlen(a);
		goto k;
	}
	return 0;
}
