/* �� 12 �� / ����� - C105-���ֵ�˳��Ѱ��������С����
�������5��Ӣ�ĵ��ʵ��ַ����飨����ά�ַ����飩����������5�����ʣ����ֵ�˳��Ѱ��������С���ʲ������

���룺5������

�����������С���ʣ����ֵ���

�������룺
this is a book end
���������
max:this min:a*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>

int cmpr(char input1[], char input2[]);
int main()
{
	char input[5][20];
	scanf("%s", input[0]);
	scanf("%s", input[1]);
	scanf("%s", input[2]);
	scanf("%s", input[3]);
	scanf("%s", input[4]);

	char max[20];
	strcpy(max, input[0]);
	int i = 1;
	while (i < 5)
	{
		if (cmpr(input[i], max) == 1)
		{
			strcpy(max, input[i]);
        }
		i++;
	}

	char min[20];
	strcpy(min, input[0]);
	i = 1;
	while (i < 5)
	{
		if (cmpr(input[i], min) == 0)
		{
			strcpy(min, input[i]);
		}
		i++;
	}


	printf("max:%s min:%s", max, min);
	return 0;
}

int cmpr(char input1[], char input2[])
{
	int i = 0;
	while (input1[i] == input2[i])
	{
		i++;
		if (i == strlen(input1) || i == strlen(input2))
		{
			break;
		}
	}
	if (((int)input2[i] >= 'a' && (int)input2[i] <= 'z') &&((int)input1[i] >= 'a' && (int)input1[i] <= 'z'))
	{
		if ((int)input1[i] > (int)input2[i])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (i<strlen(input1)&&i==strlen(input2))
	{
		return 1;
	}
	if (i == strlen(input1) && i<strlen(input2))
	{
		return 0;
	}
}
