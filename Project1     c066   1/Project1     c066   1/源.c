/*��ҽԺ���Σ����룩��ʱ������������й��ɣ����ǵ�һ�Σ�ͣһ�£�
Ȼ��ζ��Σ�ͣһ�£��ٵ����Σ�ͣһ��...��
������һ�����⣺��ƿ��ˮһ����v������ÿһ����d������ÿһ�ε��ٶ���һ�루�������һ�β���d�������򻨷ѵ�ʱ��Ҳ��һ�룩��
ͣһ�µ�ʱ��Ҳ��һ�룬��ƿˮʲôʱ���ܵ����أ���0 < d < v <6000)
���룺һ���Ƕ��ٺ�����һƿ��ˮ�ж��ٺ������м��ÿո����.
�����������Ҫ����ʱ��.

�������룺
0.5 1.7
���������
6*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>

int main()
{
	float v;
	float d;
	scanf("%f%f",&d,&v);
	
	int count = 0;
	int s = 0;
	int i = 1;
	while (count * d < v)
	{
		s =  i;
		count = count + s;
		i++;
	} 
	i = i - 2;
	int j = 0;
	float all = 0;
	count = 0;
	while (j <= i)
	{
		count = count + j;
		j++;
	}
	int measure;
	if ((double)((v - count * d) / d) !=(int)((v - count * d) / d) )
	{
		 measure = (v - count * d) / d + 1;
	}
	else
	{
		 measure = (v - count * d) / d;
	}


	int output;
	output = measure + count + i;
	printf("%d", output);
	return 0;
}