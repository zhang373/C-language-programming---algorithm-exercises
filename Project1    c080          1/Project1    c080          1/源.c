/* �� 11 �� / ����� - C080-���ֵ�
"��5�����ʵĵ��ʱ�""reserve"", ""replace"",  ""core"", ""nature,"" ""literature""����д�����ڵ��ʱ��в��ҵ��ʣ����ҵ�������ʾYES�����Ҳ�������ʾNO�����Ҳ����ִ�Сд��

���룺һ����ʾ���ʵ��ַ�����

�����YES��NO��

����1��

RESERVE

YES

����2��

change

NO

�������룺
NATURE
���������
YES*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int check(char input[], char cmpr[],int measure);
char change(char input);
int main()
{
	char input[100];
	gets(input);
	int measure = strlen(input);

	//reserve
	char cmpr1[7] = "reserve";
	//replace
	char cmpr2[7] = "replace";
	//core
	char cmpr3[4] = "core";
	//nature
	char cmpr4[6] = "nature"; 
	
	//literature
	char cmpr5[10] = "literature";
	int j = 0;
	while (j < measure)
	{
		input[j] = change(input[j]);
		j++;
	}







	int count = 0;
	if (measure == 7)
	{
		if(check(input, cmpr1,measure)==1||check(input, cmpr2, measure) == 1)
		{
			printf("YES");
		}
		if(check(input, cmpr1, measure) == 0 && check(input, cmpr2, measure) == 0)
		{
			count++;
		}
	}
	if (measure == 4)
	{
		if (check(input, cmpr3, measure) == 1 )
		{
			printf("YES");
		}
		if (check(input, cmpr3, measure) == 0 )
		{
			count++;
		}
	}
	if (measure == 6)
	{
		if (check(input, cmpr4, measure) == 1)
		{
			printf("YES");
		}
		if (check(input, cmpr4, measure) == 0)
		{
			count++;
		}
	}
	if (measure == 10)
	{
		if (check(input, cmpr5, measure) == 1)
		{
			printf("YES");
		}
		if (check(input, cmpr5, measure) == 0)
		{
			count++;
		}
	}
	if (measure != 7 && measure != 6 && measure != 4 && measure != 10)
	{
		count++;
	}
	if (count == 1)
	{
		printf("NO");
	}

	return 0;
}

char change(char input)
{
	if ((int)input <= 'Z' && (int)input >= 'A')
	{
		input = (char)((int)input - 'A' + 'a');
	}
	return input;
}

int check(char input[], char cmpr[],int measure)
{
	int i = 0;
	while (i < measure)
	{
		if (input[i] != cmpr[i])
		{
			return 0;
		}
		else
		{
			if (i == measure - 1)
			{
				return 1;
			}
		}
		i++;
	}
}