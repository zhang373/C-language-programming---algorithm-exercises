/* �� 11 �� / ����� - C100-���ַ����еĿո��Ϊ����
��д���������ַ������ַ�����s�У����ַ����еĿո����Ϊ���ţ�ÿ1���ո��Ӧ1��Ӣ�Ķ��ţ��� 
����һ�У��ַ����� 
���һ�У��ı����ַ����� 

��û�пո�������ַ�����NotFound����

�������룺
zzz  yyy   xxx   aa
���������
zzz,,yyy,,,xxx,,,aa
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char input[200];
	gets(input);
	int measure = strlen(input);
	int i = 0;
	int count = 0;
	while (i < measure)
	{
		if (input[i] == ' ')
		{
			input[i] = ',';
			count++;
		}
		i++;
	}
	if (count != 0)
	{
		printf("%s", input);
	}
	else
	{
		printf("NotFound");
	}
	return 0;
}