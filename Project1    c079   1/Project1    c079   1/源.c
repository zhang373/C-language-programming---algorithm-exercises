/* �� 11 �� / ����� - C079-�ַ�����ת����
"��д�ַ�����ת�������ú�����ָ���ַ����е��ַ�����˳��ߵ����С��ú�����ԭ��Ϊ�� 

char * mystrrev(char string[]);

���в���string�Ǵ���ת���ַ������ú����ķ���ֵΪ����˳��ߵ�����ַ���ָ�롣

��д���������������������в��ԡ�

������

abcdefghijklmn

nmlkjihgfedcba

�������룺
information
���������
noitamrofni
*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char a[200];
	gets(a);
	int i = 0;
	int measure = strlen(a);
	int k = measure - 1;
	char output[200];
	while (i < measure)
	{
		output[i] = a[k];
		i++; k--;
	}
	output[measure] = '\0';
	printf("%s", output);
}