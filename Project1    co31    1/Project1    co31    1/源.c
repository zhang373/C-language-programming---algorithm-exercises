/*��a+aa+aaa+aaaa+��+aa...a��n����������aΪ1��9֮���������
���磺��a = 1, n = 3ʱ����1+11+111֮��Ϊ123��
���룺������е�����a������������n
�������ʽ�ͽ����*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>



int main()
{
	int b, n,a;
	scanf("%d%d", &b, &n);
	a = b;
	int i = 0;
	int k = 0;
	int s = 0;
	while (i <n)
	{
		s = a + s;
		i++;
		printf("%d", a);
		a = 10 * a + b;
		while ((k + 1) < n)
		{
			printf("+");
			k++;
			break;
		}
	}
	printf("=");
	printf("%d", s);
	return 0;
}