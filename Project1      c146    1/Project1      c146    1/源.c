/* �� 12 �� / ����� - C146-��ASCII��������ַ���
���������ַ���s,t����ASCII˳�������s��t�г��ֹ�(�����ִ�Сд)���ַ�(ȫ��תΪ��д���)��
�ظ����ַ�ֻ����һ�Ρ���s="meeting" ��t=" sayING", ��u=" AEGIMNSTY"��s,t���Ȳ�����100��

���룺�����ַ����м��ÿո����

���������ַ�������ASCII����

�������룺
discussed security
���������
CDEIRSTUY*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


void change(char in[]);
int main()
{
	typedef struct word
	{
		char name;
		int frequence;
	}word;
	word wrd[26];
	int i = 0;
	while (i < 26)
	{
		wrd[i].name = (char)(i + 'A');
		wrd[i].frequence = 0;
		i++;
	}

	char s[100];
	scanf("%s", &s);
	char t[100];
	scanf("%s", &t);

	change(s);
	change(t);


	int k = 0;
	while (k < strlen(s))
	{
		wrd[(int)s[k] - 'A'].frequence++;
		k++;
	}

	k = 0;
	while (k < strlen(t))
	{
		wrd[(int)t[k] - 'A'].frequence++;
		k++;
	}

	char out[26];
	i = 0;
	k = 0;
	while (i < 26)
	{
		if (wrd[i].frequence != 0)
		{
			out[k] = (char)(i + 'A');
				k++;
		}
		i++;
	}
	out[k] = '\0';
	printf("%s", out);
	return 0;
}




void change(char in[])
{
	int i = 0;
	while (i < strlen(in))
	{
		if ((int)in[i] >= 'a' && (int)in[i] <= 'z')
		{
			in[i] = (char)((int)in[i] - 'a' + 'A');

		}


		i++;
	}
}