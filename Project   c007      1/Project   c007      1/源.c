/*�ҳ�m��n֮�������ͬ������m<n����

 ˵����һ��������x���������ƽ������β�������xΪͬ���������磬6����ƽ����36��β����25����ƽ����625��β������ô6��25����ͬ������

���룺

����m��n�������������ÿո�ָ���

�����

�������ͬ���������ݼ��ÿո�ָ���*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>


int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	if (m < n)
	{
		int x=m;
		
		do
		{
			int j = 0;
			do
			{
				j++;
			} while (x /(int)(pow(10,j)) != 0);
			/*������������λ��*/
			int k = pow(x, 2);
				if (k % (int)(pow(10, j))==x)
				{
					printf("%d ", x);
			    }
				x++;
				j = 0;
		} while (x <= n);
	}
	printf("\b");
	return 0;
}