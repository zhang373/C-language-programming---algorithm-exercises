/*�Ӽ�������һ��С�ڵ���1000��������x�������ƽ������Ϊ��������������������1000�������0��������������һ������ֱ��С�ڵ���1000������ʾ��ʹ����ƽ��������sqrt��Ҫ����<math.h>ͷ�ļ�����*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	switch (x % 1000+1)
	{
	case 1:
		sqrt(x, 2);
	default:
		printf("0");
	}
	return 0;
}


