/* �� 11 �� / ����� - C072-ɾ���ַ�
��д���������ַ������ַ�����s�У�������һ���ַ�������c���ж�s���Ƿ���c�������򽫸��ַ���s��ɾ�����������û�У�������ַ�����NotFound����

����2�У�1���ַ�����1���ַ���

�����ɾ������ַ���

����1��

���룺

smiles

s

�����

mile

����2��

���룺

smiles

a

�����

NotFound

*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>

int main()
{
	char delete;

	char c[250];
	gets(c);
	int i = 0;
	int measure = strlen(c);
	char output[250];
	int k = 0;

	scanf("%c", &delete);
	int count = 0;
	while (i < measure)
	{
		if (c[i] != delete)
		{
			output[k] = c[i];
			k++;
		}
		else
		{
			count++;
		}
		i++;
	}

	output[measure - count] = '\0';
	if (count == 0)
	{
		printf("NotFound");
	}
	else
	{
		printf("%s", output);
	}
	return 0;
}