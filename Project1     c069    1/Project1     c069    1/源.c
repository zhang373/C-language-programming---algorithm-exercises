/*�������滻Ϊ��ĸ������һ����������������2���ٽ�����2���������ֵ��������ֵĸ�λ����Ӧ��ŵ���ĸ������滻ԭ��0��Ϊa��1��Ϊb��2��Ϊc��...���Դ����ƣ�9��Ϊj��

���磬1234,����2����617���滻���Ϊgbh

���룺һ��������

�������2��������������ֺ��ַ������м���һ���ո������

������

1234

617 gbh

*/



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
	int x,z;
	z = 0;
	scanf("%d", &x);
	int y = (int)(x / 2);
	printf("%d ", y);
	int i = 0;
	while (y / (int)pow(10, i) != 0)
	{
		i++;
	}
	int e;
	do
	{
		switch ((y-z)/ (int)pow(10, i-1))
		{
		case 1:printf("b"); break;
		case 2:printf("c"); break;
		case 3:printf("d"); break;
		case 4:printf("e"); break;
		case 5:printf("f"); break;
		case 6:printf("g"); break;
		case 7:printf("h"); break;
		case 8:printf("i"); break;
		case 9:printf("h"); break;
		case 0:printf("a"); break;
		}
		z = ((y-z)/(int)pow(10, i - 1))*((int)pow(10, i - 1));
		i = i - 1;
		e = y - z;
	} while (i != 0);
	return 0;
}