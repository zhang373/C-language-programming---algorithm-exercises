/*��д��������һ���ַ���str��ָ�����ַ�chɾȥ�������ظ����ֵ��ַ���������д���������е��ò��ԡ�����ԭ��:  void delchar(char *str,char ch);��

���룺

ռ���С�

��1�У����������ַ�����ע��������ַ������Ȳ��ᳬ��80��

��2�У�����һ���ַ�

�����

ռһ��



�������룺
x+y*z-12
/
���������
x+y*z-12*/

void delchar(char a[] , char b);

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char a[100];
	char b;
	gets(a);
	scanf("%c", &b);
	delchar(a, b);
	
	printf("%s", a);
	return 0;
}

void delchar(char a[], char b)
{
    k:b = b;
	 int length = strlen(a);
	int i = 0;
	int count = 0;
	if (a[length - 1] !=(int)b)
	{ while (i < length)
	  {
		if ((int)a[i] == (int)b)
		{
			int t = i;
			while (i + 1 < length)
			{
				a[i] = a[i + 1];
				i++;
			}
			count++;
			i = t - 1;
		}
		i++;
	   }
      a[length - count] = '\0';
	}
	if (a[length - 1] == b)
	{
		a[length - 1] = '\0';
		goto k;
	}
	
}