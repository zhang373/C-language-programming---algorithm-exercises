/* �� 11 �� / ����� - C082-�����ַ����ж�
"һ���ַ����������1���ַ������һ���ַ���ͬ����2���ַ��͵�����2����ͬ��...�����Ϊ�����ַ�������ƻ��Ĵ�����deed��

����һ���ַ������ж��Ƿ�����ַ�������������ʾYES��������ʾNO��������ַ������Ȳ�����200.

����1��

deed

YES



����2��

good

NO

�������룺
d
���������
YES*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
	char input[205];
	gets(input);
	int measure = strlen(input);
	int start = 0;
	int end = strlen(input) - 1;
	while (start < measure)
	{
		if (input[start] == input[end])
		{
			if (start == measure - 1)
			{
				printf("YES");
				goto k;
			}
		}
		else
		{
			printf("NO");
			goto k;
		}
		start++;
		end--;
	}
	k:return 0;
}
