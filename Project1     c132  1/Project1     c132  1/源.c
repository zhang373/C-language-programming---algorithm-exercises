/* �� 12 �� / ����� - C132-��д����ʵ��������������
��д����,����ԭ������:

void fun(int n,char res[]);

�ú����Ĺ����ǽ�����n�ĸ�λ�����������У���ŵ�res�ַ������С���������1035�������Ϊ5301��

���������ʽ��

���룺һ������(������λ������15λ)��

�����������ֵ��



�������룺
123456
���������
654321*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

void fun(int n, char res[]);
int main()
{
	char input[25];
	scanf("%s", &input);
	int n = strlen(input);
	char res[25];
	strcpy(res, input);
	fun(n, res);
	res[strlen(input)] = '\0';
	printf("%s", res);

	

	return 0;
}
void fun(int n, char res[])
{
	char tt[25];
	int i = 0;
	int j = n - 1;
	while (i < n)
	{
		tt[i] = res[j];
		i++;
		j--;
	}
	strcpy(res, tt);
}