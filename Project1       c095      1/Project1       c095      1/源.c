/*���һ�������е�ĳһ�Σ�����������Ԫ�أ��ĸ�Ԫ��ֵ����ͬ�����֮Ϊ��ֵ���жΡ���ֵ���ж���Ԫ�صĸ���������ֵ���жεĳ��ȡ�

  ���룺

  ���г���N��N������������1<=N<=50), �Կո������

  �����

  �����г������ĵ�ֵ���жε�ʼĩ�±꣨0��N-1������Ӣ�Ķ��ŷָ������û�е�ֵ���жΣ������NO.

  ˵����

  ����ж��ͬ�ȳ��ȵĵ�ֵ���У�ֻ�����һ����ֵ���е���ֹ�±ꡣ



�������룺
7 3 1 2 1 1 2 2
���������
3,4*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int n;
	int j = 0;
	int a[100];
	scanf("%d", &n);
	while (j < n)
	{
		int x;
		scanf("%d", &x);
		a[j] = x;
		j++;
	}



	int i = 0;
	int start=0;
	int end=1;
	int length=0;
	int maxstart=0;
	int maxend=0;
	int maxlength = 0;
	while (i  < n)
	{
		while (a[start] == a[end])
		{
			end++;
			length++;
			i++;
		}
		if (length >maxlength)
		{
			maxstart = start;
			maxend = end;
			maxlength = length;
		}
		start = end;
		end = end + 1;
		length = 0;
		i++;
	}

	if (maxlength == 0)
	{
		printf("NO");
	}
	if (maxlength != 0)
	{
		printf("%d,%d", maxstart, maxend - 1);
	}
	return 0;
}




/* 2 2 2 2 2 4 5 6 2*/