/*��һ�����������£� 2 / 1, 3 / 2, 5 / 3, 8 / 5, 13 / 8, 21 / 13, �� 
����һ��ķ�ĸΪǰһ��ķ��ӣ�����ķ���Ϊǰһ��������ĸ֮�ͣ�����ǰn��֮�͡�
���룺����n��������
�����ǰn��֮�ͣ�ʵ����ע������4λС����
cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	double a, b, c, d;
	a = 2; b = 1;
	int i = 1;
	c = 2;
	while (i < n)
	{
		double e = a;
		a = e + b;
		b = e;
		d = a / b;
		c = d + c;
		i++;
	}
	printf("%.4lf", c);
	return 0;
}