/*C033-��ʽ����1+1/(1+2)+1/(1+2+3)+��+1/(1+2+3+��+n)
��������n>=1,������ʽ��ֵ��
 s=1+1/(1+2)+1/(1+2+3)+��+1/(1+2+3+��+n)
 ���룺������
 �����ʵ������ʽ"%f\n".*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>


int main()
{
	double fenmu, fenshu, sumfenmu, sum;
	sumfenmu = 0; sum = 0;
	int n;
	scanf("%d", &n);
	int i = 1;
	while (i <= n)
	{
		sumfenmu = sumfenmu + i;
		fenshu = 1 / sumfenmu;
		sum = sum + fenshu;
		i++;
	}
	printf("%f\n", sum);
	return 0;

}