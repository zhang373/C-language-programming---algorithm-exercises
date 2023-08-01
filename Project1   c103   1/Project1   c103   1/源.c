/*第 13 周 / 编程题 - C103-出圈问题
有n个人围成一圈，从1顺序排号。从第一个人开始报数（1~3报数），凡报到3的人退出圈子，问最后留下的人原来排在第几号。

  输入：人数，不超过100人。

  输出：最后留下的人的编号



样例输入：
74
样例输出：
13*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


int main()
{
	typedef struct person
	{
		int now;
		int old;
	}person;
	person soldier[105];
	int i = 0;
	int n;
	scanf("%d", &n);
	while (i < n)
	{
		soldier[i].now = i%3+1;
		soldier[i].old = i;
		i++;
	}

	person solder1[70];
	i = 0;
	int k = 0;
	while (i < n)
	{
		if (soldier[i].now != 3)
		{
			solder1[k] = soldier[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder1[i].now = i % 3 + 1;
	
		i++;
	}
	if (k < 2)
	{
		if (k == 2)
		{
			printf("%d %d", solder1[0].old, solder1[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder1[0].old);
		}
		goto r;
	}



	person solder2[50];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder1[i].now != 3)
		{
			solder2[k] = solder1[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder2[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder2[0].old, solder2[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder2[0].old);
		}
		goto r;
	}




	person solder3[34];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder2[i].now != 3)
		{
			solder3[k] = solder2[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder3[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder3[0].old, solder3[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder3[0].old);
		}
		goto r;
	}


	person solder4[23];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder3[i].now != 3)
		{
			solder4[k] = solder3[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder4[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder4[0].old, solder4[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder4[0].old);
		}
		goto r;
	}




	person solder5[16];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder4[i].now != 3)
		{
			solder5[k] = solder4[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder5[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder5[0].old, solder5[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder5[0].old);
		}
		goto r;
	}



	person solder6[11];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder5[i].now != 3)
		{
			solder6[k] = solder5[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder6[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder6[0].old, solder6[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder6[0].old);
		}
		goto r;
	}

	person solder7[7];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder6[i].now != 3)
		{
			solder7[k] = solder6[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder7[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder7[0].old, solder7[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder7[0].old);
		}
		goto r;
	}



	person solder8[5];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder7[i].now != 3)
		{
			solder8[k] = solder7[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder8[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder8[0].old, solder8[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder8[0].old);
		}
		goto r;
	}



	person solder9[4];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder8[i].now != 3)
		{
			solder9[k] = solder8[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder9[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder9[0].old, solder9[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder9[0].old);
		}
		goto r;
	}


	person solder10[3];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder9[i].now != 3)
		{
			solder10[k] = solder9[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder10[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder10[0].old, solder10[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder10[0].old);
		}
		goto r;
	}


	person solder11[2];
	i = 0;
	k = 0;
	while (i < n)
	{
		if (solder10[i].now != 3)
		{
			solder11[k] = solder10[i];
			k++;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		solder11[i].now = i % 3 + 1;

		i++;
	}

	if (k < 3)
	{
		if (k == 2)
		{
			printf("%d %d", solder11[0].old, solder11[1].old);
		}
		if (k == 1)
		{
			printf("%d", solder11[0].old);
		}
		goto r;
	}

r:i = i;
	




	return 0;
}