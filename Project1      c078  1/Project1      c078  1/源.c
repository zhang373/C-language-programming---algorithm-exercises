/* �� 11 �� / ����� - C078-�����ַ���
"��̺��������ַ���������С��20���ַ������滻���ܷ�������롣

�滻���ܵļ��ܹ����ǣ���ԭ������ĸ����ĸ���������ĵ�3����ĸ���滻��
������ĸ��������������ĸ���ɽ���ĸ��������β�νӵ�

������ĸc����f���滻����ĸy��b���滻�����������ַ���Ϊ��Study��������ܺ���ַ���Ϊ��Vwxgb����

������

Study

Vwxgb

�������룺
Student
���������
Vwxghqw*/


#define _CRT_SECURE_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

char change(char subject);
int main()
{
	char input[200];
	gets(input);
	int i = 0;
	int measure = strlen(input);
	while (i < measure)
	{
		input[i]=change(input[i]);
		i++;
	}
	printf("%s", input);
	return;
}

char change(char subject)
{
	if (subject == 'X' || subject == 'Y' || subject == 'Z' || subject == 'x' || subject == 'y' || subject == 'z')
	{
		if(subject == 'X')
		{
			subject = 'A';
		}
		if (subject == 'Y')
		{
			subject = 'B';
		}
		if (subject == 'Z')
		{
			subject = 'C';
		}
		if (subject == 'x')
		{
			subject = 'a';
		}
		if (subject == 'y')
		{
			subject = 'b';
		}
		if (subject == 'z')
		{
			subject = 'c';
		}
	}
	else
	{
		subject = (char)((int)subject + 3);
	}
	return subject;
}