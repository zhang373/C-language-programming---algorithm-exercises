/* �� 13 �� / ����� - C131-��дһ������������СֵԪ�ؼ���Ԫ��λ�õĺ���
��дһ������������СֵԪ�ؼ���Ԫ��λ�õĺ���������д���������á�

Ҫ���ɼ�������10����������������������С�
����Сֵ�ж�������ص�һ�γ��ֵ�λ�á�

��ʾ�����Զ���һ�����������飬��СԪ��ֵ�͸�Ԫ��λ�õĽṹ��������Ա�֤������ͬʱ������СԪ��ֵ�͸�Ԫ��λ�á�

���������ʽ��

���룺�û������10�������ÿո�ָ���

������������֣���һ������Ϊ�����е���СԪ��ֵ���ڶ�������Ϊ��Ԫ���������е��±�λ�ã��������ÿո�ֿ��������ж����Сֵ������±���С��һ����



�������룺
11 22 33 4 5 66 7 8 9 10
���������
4 3*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{
	int i = 0;
	int input[10];
	while (i < 10)
	{
		scanf("%d", &input[i]);
		i++;
	}

	typedef struct min
	{
		int number;
		int place;
	} min;

	min out;
	i = 1;
	out.number = input[0];
	out.place = 0;

	while (i < 10)
	{
		if (input[i] < out.number)
		{
			out.number = input[i];
			out.place = i;
		}
		i++;

	}
	printf("%d %d", out.number, out.place);
	return 0;
}