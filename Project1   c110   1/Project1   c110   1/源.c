/* �� 12 �� / ����� - C110-ɾ���ַ��������з�Сд��ĸ�ַ�
����һ��Ӣ���ַ���������<81�����ܰ����ո�
ɾ���������з�Сд��ĸ�ַ��������ɾ������ַ�����Сд��ĸ�����λ�ñ��ֲ��䣩��

�������룺
AaBbCc &d*e%
���������
abcde*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
	char input[100];
	gets(input);
	char output[100] = {'\0'};
	int i = 0;
	int k = 0;
	int measure = strlen(input);
	while (i < measure)
	{
		if ((int)input[i] <= 'z' && (int)input[i] >= 'a')
		{
			output[k] = input[i];
			k++;
		}
		i++;
	}
	printf("%s",output);
	return 0;
}