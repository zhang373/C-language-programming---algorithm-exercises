/*��������һ���������������λ���ֵ�ƽ���͡��磺1234 �򣺼���1*1+2*2+3*3+4*4=30

   ���룺һ����������

   ���������



�������룺
8
���������
64*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int x;
	scanf("%d", &x);
	int i = 0;
	int a, b;
	b = x;
	int s = 0;
	while (x / (int)pow(10, i))
	{
		i++;
	}
	while (i != 0)
	{
		a = b / (int)pow(10, i-1);
		b=b-a* (int)pow(10, i-1);
		s = s + a * a;
		i--;
	}
	printf("%d", s);
	return 0;
}