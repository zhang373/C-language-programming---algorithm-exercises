/*��д�������������3��С��������3��С����ӣ�����ӵĽ���Լ����������뷽��ת����������Ľ����ʾ�����

���룺3��С�����ո�ָ���
������ͣ�����������������1����ʾ���ո�ָ�*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	float a = x + y + z;
	int w = (x + y + z + 0.5);
	printf("%g %d",a, w);/*����g�ľͱ���f*/
	return 0;
}
