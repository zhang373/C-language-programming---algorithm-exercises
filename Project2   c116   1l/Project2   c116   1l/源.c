/*���빫Ԫ�ꡢ�¡�����������ֵ����������Ǹ���ĵڼ��죨Ӧ�������꣩��

   ���룬������������ʾ�ꡢ�¡���

   �����һ����������ʾ����ڼ���



�������룺
2015 1 1
���������
1*/

int runnianma(int x);

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>


int main()
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	int output;
	int t;
	if (runnianma(x) == 0)
	{
		switch (y)
		{
		case 1:t = 0; break;
		case 2:t = 31; break;
		case 3:t = 60-1; break;
		case 4:t = 91-1; break;
		case 5:t = 121-1; break;
		case 6:t = 152-1; break;
		case 7:t = 182-1; break;
		case 8:t = 213-1; break;
		case 9:t = 244-1; break;
		case 10:t = 274-1; break;
		case 11:t = 305-1; break;
		case 12:t = 335-1; break;
		}
		printf("%d", t + z);
	}
	if (runnianma(x) == 1)
	{
		switch (y)
		{
		case 1:t = 0; break;
		case 2:t = 31; break;
		case 3:t = 60-0; break;
		case 4:t = 91-0; break;
		case 5:t = 121-0; break;
		case 6:t = 152-0; break;
		case 7:t = 182-0; break;
		case 8:t = 213-0; break;
		case 9:t = 244-0; break;
		case 10:t = 274-0; break;
		case 11:t = 305-0; break;
		case 12:t = 335-0; break;
		}
		printf("%d", t + z);
	}


	return 0;
}


int runnianma(int x)
{
	if (x % 100 == 0)
	{
		if (x % 400 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (x % 4 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}