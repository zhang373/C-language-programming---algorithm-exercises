/*һ�����100�׸߶��������£�ÿ����غ󷴵���ԭ�߶ȵ�һ�룬�����£��ٷ����������ڵ�n�����ʱ���������˶����ף���n�η����߶��Ƕ��٣�

����:

��n�ε�ֵ,����

�����С�򾭹���·�̳��Ⱥ�С�򷴵��ĸ߶ȣ���2�������

*/



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
	int n;
	scanf("%d", &n);
	double y,z;
	z = 100;
	int i = 0;
	do
	{
		y = z/ 2;
		i++;
		z = y;
	} while (i < n);
	double a, count;
	double j = 0;
	double k = 1;
	count = 0;
	do
	{
		a = 100 /k ;
		count = a + count;
		
		k = pow(2, j);
		j++;
	} while (j <n);
	printf("%lf\n%lf", count, y);
	return 0;
}