/* �� 11 �� / ����� - C083-��������ַ���
"���������ַ����������������1���ַ������ַ�������������Ȳ�ͬʱ��
���ֻ��������ַ����е��ַ���
����team��good,���Ϊtgeoaomd ��
�������ַ�����challenge��put,�����Ϊcphuatllenge��

�ַ��ĳ��Ȳ�����100�������ַ������Կո�ָ���

������

challenge put

cphuatllenge

�������룺
territorial put
���������
tpeurtritorial
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char input1[105];
	scanf("%s", &input1);
	int length1 = strlen(input1);
	input1[length1] = '\0';
	char input2[105];
	scanf("%s", &input2);
	int length2 = strlen(input2);
	input2[length2] = '\0';



	if (length1 == length2)
	{
		int i = 0;
		int k = 0;
		while (i < length1)
		{
			printf("%c", input1[i]);
			printf("%c", input2[i]);
			i++;
		}
	}

	if (length1 > length2)
	{
		int i = 0;
		int k = 0;
		while (i < length2)
		{
			printf("%c", input1[i]);
			printf("%c", input2[i]);
			i++;
		}
		while (i < length1)
		{
			printf("%c", input1[i]);
			i++;
		}
	}

	if (length1 < length2)
	{
		int i = 0;
		int k = 0;
		while (i < length1)
		{
			printf("%c", input1[i]);
			printf("%c", input2[i]);
			i++;
		}
		while (i < length2)
		{
			printf("%c", input2[i]);
			i++;
		}
	}

	return 0;
}

