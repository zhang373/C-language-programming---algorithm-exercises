/*��д���򣬽��û���������5λ�˽�����ת��Ϊʮ���ơ�

���룺һ��������

�����һ��������



�������룺
7
���������
7
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int x;
	scanf("%d", &x);
	int i = 0;
	while (x / (int)pow(10, i) != 0)
	{
		i++;
	}
	int t = x;
	
	int count = 0;
	while (i>0)
	{
		int a;
		int b;
		a = t / (int)pow(10, i - 1);
		count = count + a * (int)pow(8, i - 1);
		t = t - a * (int)pow(10, i - 1);
		i--;
	}
	printf("%d", count);
	return 0;
}