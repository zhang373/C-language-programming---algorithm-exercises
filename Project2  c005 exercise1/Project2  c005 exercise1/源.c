/*����һ���˽�����������м���λ���м���λ����1024���м�Ŀ�һ�����ӣ�*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int x,y,z;
	scanf("%d",&x);
	y = x/100;/*�������ų������λ*/
	z = y % 10000;/*ȡ�࣬�����м���λ*/
	int w = z + 1024;
	printf("%d %d", z, w);/*��ʾ�����*/
	return 0;
}
