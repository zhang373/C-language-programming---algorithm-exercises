#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{



	int x,y,z;/*OPEN SPACE XYZ*//*Ҳ����ֱ����Ӣ�� �׵���Сд������������ĸ��д*/
    scanf("%d", &x);/*����*//*�з���ֵ�� ������fangqil*/
		
		 y = x / 100;/*if opened ,dont open again */
		 z = y % 10000;
    printf("%d%d", z,z+1024);/*output*/
	return 0;
}