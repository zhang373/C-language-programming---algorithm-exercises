/*�� 12 �� / ����� - C075-��ĸ����
"����ֻ��Сд��ĸ���ַ�����Ҫ���ֵ����Դ�С�����˳��������������ÿ���ַ�֮���1��(�ַ������Ȳ�����20��

������

abazc

a a b c z

�������룺
hello
���������
e h l l o*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[25];
	gets(input);
	int measure = strlen(input);
	
	for (int i = 0; i < measure; i++)
	{
		for (int j = measure - 1; j > i; j--)
		{
			if ((int)input[j] < (int)input[j - 1])
			{
				char tt;
				tt = input[j];
				input[j] = input[j - 1];
				input[j - 1] = tt;
			}
		}
	}
	int i = 0;
	int flag = 100;
	while (i < measure)
	{
		
		if (flag == 100)
		{
			printf("%c",input[i]);
			flag--;
		}
		else
		{
			printf(" %c", input[i]);
		}
		i++;
	}
	return 0;
}