/*�����ڵ�С��ʲô��ϲ������������������Ҳ����ˣ����ų��⣩�����磺С�����1234������4321����-1234����-4321����230����032 (032=32)����-230����-032(-032=-32)��
���ڣ�С������һЩa+b��a-b����Ŀ(a, bΪ�����Ҳ���ǰ��0)��
���������Щ��Ŀ��ȷ�Ĵ𰸣����ܲ³�С�������õ�ʲô����

���룺
��������x,y(-1000000 < = x, y < =1000000), x��ʾa+b����ȷ�𰸣�y��ʾa-b����ȷ�𰸡�
���뱣֤�Ϸ����Ҳ��迼��a��b��С���������
�����
�����������s t��֮����һ���ո�ֿ�������s��ʾС�����õ���a+b�𰸣�t��ʾС�����õ���a-b�𰸡�

�������룺
20 6
���������
38 24*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int a = (x + y) / 2;
	int b = (x - y) / 2;
	int wronga;
	int wrongb;
	if (a > 0)
	{
		/*a = 234;/*flat*/
		int i = 0;
		while (a / (int)pow(10, i) != 0)
		{
			i++;
	     }
		int s = 0;
		int k = 0;
		int t = a;
		while (i > 0)
		{
			s = s + (t / (int)pow(10, i - 1)) * (int)pow(10, k);
			t = t - (t / (int)pow(10, i - 1)) * (int)pow(10, i - 1);
			k++;
			i--;
		}
		wronga = s;
	}
	if (a <= 0)
	{
		a = -1*a;/*flat*/
		int i = 0;
		while (a / (int)pow(10, i) != 0)
		{
			i++;
		}
		int s = 0;
		int k = 0;
		int t = a;
		while (i > 0)
		{
			s = s + (t / (int)pow(10, i - 1)) * (int)pow(10, k);
			t = t - (t / (int)pow(10, i - 1)) * (int)pow(10, i - 1);
			k++;
			i--;
		}
		wronga = -1*s;
	}
	if (b > 0)
	{
		/*a = 234;/*flat*/
		int i = 0;
		while (b / (int)pow(10, i) != 0)
		{
			i++;
		}
		int s = 0;
		int k = 0;
		int t = b;
		while (i > 0)
		{
			s = s + (t / (int)pow(10, i - 1)) * (int)pow(10, k);
			t = t - (t / (int)pow(10, i - 1)) * (int)pow(10, i - 1);
			k++;
			i--;
		}
		wrongb = s;
	}
	if (b <= 0)
	{
		b = -1 * b;/*flat*/
		int i = 0;
		while (b / (int)pow(10, i) != 0)
		{
			i++;
		}
		int s = 0;
		int k = 0;
		int t = b;
		while (i > 0)
		{
			s = s + (t / (int)pow(10, i - 1)) * (int)pow(10, k);
			t = t - (t / (int)pow(10, i - 1)) * (int)pow(10, i - 1);
			k++;
			i--;
		}
		wrongb = -1 * s;
	}


	x = wronga + wrongb;
	y = wronga - wrongb;
	printf("%d %d", x, y);
	return 0;
}