/*�� 13 �� / ����� - C106-�±���������
ĳ���ӽ����±�����ѵ�������±���1��ʼ��˳�����α�ţ����ų�һ�к�ӣ�ѵ���Ĺ������£�
��ͷ��ʼ1��2������������2�ĳ��У�ʣ�µ���С��ŷ���£��
�ٴ�ͷ��ʼ����1��3������������3�ĳ��У�ʣ�µ���С��ŷ���£��
������ͷ��ʼ����1��2�������Ժ��ͷ��ʼ��������1��2������1��3����ֱ��ʣ�µ���������������Ϊֹ��
��д����������NΪ�ʼ���±�������20 < N < 6000�������ʣ�µ��±�����ı�š�

�������룺
21
���������
1 7 19*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<math.h>


int main()
{
	int n;
	scanf("%d", &n);
	typedef struct solder
	{
		int id;
		int zhuangtai;
	}sol;
	sol solder[6005];
	int i = 0;
	while (i <n)
	{
		solder[i].id = i+1;
		solder[i].zhuangtai = 0;
		i++;
	}

	i = 0;
	int count = 0;
	while (1)
	{
		if (n == 3)
		{
			count = 3;
			goto k;
		}
		i = 0;
		count = 0;
		while (i < n)
		{
			if (solder[i].zhuangtai == 0)
			{
				count++;
				if (count % 2 == 0)
				{
					solder[i].zhuangtai = 1;
				}
			}
			i++;
		}
		i = 0;
		count = 0;
		while (i < n)
		{
			if (solder[i].zhuangtai == 0)
			{
				count++;
			}
			i++;
		}
		if (count <= 3)
		{
			goto k;
		}


		i = 0;
		count = 0;
		while (i < n)
		{
			if (solder[i].zhuangtai == 0)
			{
				count++;
				if (count % 3 == 0)
				{
					solder[i].zhuangtai = 1;
				}
			}
			i++;
		}
		i = 0;
		count = 0;
		while (i < n)
		{
			if (solder[i].zhuangtai == 0)
			{
				count++;
			}
			i++;
		}
		if (count <= 3)
		{
			goto k;
		}



	}





	sol out[3];
k:	if (count == 1)
{
	i = 0;
	while (i < n)
	{
		if (solder[i].zhuangtai == 0)
		{
			out[0] = solder[i];
		}
		i++;
	}
	printf("%d", out[0].id);
}

int k = 0;
if (count == 2)
{
	i = 0;
	i = 0;
	while (i < n)
	{
		if (solder[i].zhuangtai == 0)
		{
			out[k] = solder[i];
			k++;
		}
		i++;
	}
	printf("%d %d", out[0].id, out[1].id);
}

k = 0;
if (count == 3)
{
	i = 0;
	i = 0;
	while (i < n)
	{
		if (solder[i].zhuangtai == 0)
		{
			out[k] = solder[i];
			k++;
		}
		i++;
	}
	printf("%d %d %d", out[0].id, out[1].id,out[2].id);
}
	return 0;
}