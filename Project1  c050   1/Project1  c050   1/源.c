/*��д��������������ܷ񹹳������Σ����鷽�����������ߺ;�Ҫ���ڵ����ߡ�

����:���߳���
������������Թ��ɣ����YES���������ERROR DATA

�������룺
1 1 2
���������
ERROR DATA*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("%g%g%g", a, b, c);
	}
	else
	{
		printf("ERROR DATE");
	}
	return 0;
}