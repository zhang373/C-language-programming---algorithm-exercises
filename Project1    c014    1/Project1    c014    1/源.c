/*��̣��ҳ�[m,n]��Χ����7�ı������7��ȫ����������m��nΪ��������

*/



#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>


int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int k;
	k = m;
	int i = 0;
	int a, b, c, d;
	int count = 0;
	int tmd = 0;
	while (k <= n)
	{
		if ((double)(k / 7.0) == (int)(k / 7.0))
		{
			if (tmd = 100)
			{
				printf("%d��7�ı���", k);
				printf("\n");
				tmd--;
			}
			else
			{
				printf(" %d��7�ı���", k);
			}
			while (k / (int)pow(10, i) != 0)
			{
				i++;
			}
			b = k;
			while (i != 0)
			{
				a = b / ((int)pow(10, (i - 1)));
				b = k - a * ((int)pow(10, (i - 1)));
				if (a == 7)
				{
					
						printf("%d�Ǵ�7����", k);
						printf("\n");
					
					break;
				}
				i = i - 1;
			}
			i = 0;

		}
		else
		{
			while (k / (int)pow(10, i) != 0)
			{
				i++;
			}
			b = k;
			while (i != 0)
			{
				a = b/ ((int)pow(10, (i - 1)));
				b=k-a* ((int)pow(10, (i - 1)));
				if (a == 7)
				{
					
						printf("%d�Ǵ�7����", k);
						printf("\n");
					
					break;
				}
				i = i - 1;
			}
			i = 0;
		}
		k++;
	}
	return 0;
}