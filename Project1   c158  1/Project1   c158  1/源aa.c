/*�� 12 �� / ����� - C158-��Ҫ���������λ�õ��ַ��������ַ���
�û�����һ���ַ��������ַ����е�����λ���ϵ��ַ�����ĸ���е�˳�������԰�˳�򱣴�����λ���ϡ�����teacher��t,a,h,r�������Ϊa,h,r,t�������ַ���Ϊ��aehcret��

�����ʽ������С��100���ַ�����

���������λ�õ��ַ��������ַ���

�������룺
import
���������
import*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

void sortup(char odd[], int n);
int main()
{
	char input[105];
	gets(input);
	int i = 0;
	int measure = strlen(input);
	char odd[100];
	int k = 0;
	while (i < measure)
	{
		if (i % 2 == 0)
		{
			odd[k] = input[i];
			k++;
		}
		i++;
	}

	odd[k] = '\0';
	sortup(odd,k);

	i = 0; k = 0;
	while (i < measure)
	{
		if (i % 2 == 0)
		{
			 input[i]= odd[k];
			k++;
		}
		i++;
	}

	printf("%s", input);
	return 0;
}

void sortup(char odd[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if ((int)odd[j] < (int)odd[j - 1])
			{
				char t = odd[j];
				odd[j] = odd[j - 1];
				odd[j - 1] = t;
			}
		}
	}
}