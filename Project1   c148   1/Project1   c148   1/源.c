/* �� 12 �� / ����� - C148-����ĸ����������ַ���
�����ַ�������str�������鳤��Ϊ81�����̶���һ���ַ���������81���ַ����������ַ����г��ֵ�����Сд��ĸ����ĸ�������������ĸ��Ϊ��abcdefg��xyz����

���������ʽҪ��

���������ռһ�У���һ�������룬�ڶ����������

�������룺
Bcaf48c
���������
accf*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>

int main()
{
	typedef struct word
	{
		char name;
		int frequence;
	}word;
	word wrd[27];
	int i = 0;
	while (i < 27)
	{
		wrd[i].name = (char)(i + 'a');
		wrd[i].frequence = 0;
		i++;
	}
	char in[100];
	gets(in);
	int k = 0;
	while (k < strlen(in))
	{
		if ((int)in[k] >= 'a' && (int)in[k] <= 'z')
		{		
			wrd[(int)in[k] - 'a'].frequence++;
	    }
		k++;
	}


	char out[27];
	i = 0; k = 0;
	while (i < 27)
	{
		if (wrd[i].frequence != 0)
		{
			int mm = 0;
			while (mm < wrd[i].frequence)
			{
				out[k] = i + 'a';
				k++;
				mm++;
			}
		     
		}
		i++;
	}
	out[k] = '\0';
	if (k != 0)
	{
		printf("%s", out);
	}
	else
	{
		printf("NO");
	}
	return 0;
}