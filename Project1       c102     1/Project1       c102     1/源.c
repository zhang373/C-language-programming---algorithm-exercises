/*��һ�����е����ֵ��Ȼ��ͳ�Ƹ����ֵ���������г��ֵĴ�����
���룺Ԫ�ظ���n��n��������n < 200�� 
��������ֵ�����ֵĴ��������ݼ���һ�����Ÿ����� 
cuishuning 2020/11 */


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	int shu;
	int max;
	scanf("%d", &max);
	int maxnumber = 1;
	while (i <n)
	{
		scanf("%d", &shu);
		if (shu > max)
		{
			max = shu;
			maxnumber=1;
			shu = 10897876;
		}
		if (shu == max)
		{
			maxnumber++;
		}
		i++;
	}
	printf("%d,%d", max, maxnumber);
	return 0;
}