/*���㼶��

   2/1, -3/2, 5/3, -8/5,...

��ǰn��͡�

   �������ص��ǣ���1�����Ȳ����Ƿ��ţ���ǰһ��ķ����Ǻ�һ��ķ�ĸ��ǰһ��ķ��ӷ�ĸ֮��Ϊ��һ��ķ��ӡ���2����������������Ž���

���룺����n,   0<n<100.

�����ǰn��ĺͣ���ʽ"%f"��



�������룺
1
���������
2.000000*/
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	double s = 2;
	double t;
	double a = 2;
	double b = 1;
	while (i < n)
	{
		double c1 = a;
		double c2 = b;
		b = c1;
		a = c1 + c2;
		t = pow((-1),(i))*(a/b);
		s = s + t;
		i++;
	}
	printf("%f", s);
	return 0;
}