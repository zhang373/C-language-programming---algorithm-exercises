/*������������ת��Ϊ��Ӧ��ʱ���֡��롣��ʾ�������ʱ����ʹ������ĸ�ʽ����������Ҫ��һ����printf("%d:%.2d:%.2d\n", h, m, s)

���룺����
�����ʱ���룬����������ð�ŷָ���*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int x;
	scanf("%d", &x);
	int y = x / 3600;
	int z = (x % 3600) / 60;
	int w = ((x % 3600) % 60) / 1;
	printf("%d:%.2d:%.2d\n", y, z, w);
	return 0;
}