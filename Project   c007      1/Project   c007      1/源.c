/*找出m到n之间的所有同构数（m<n）。

 说明：一个正整数x，如果是它平方数的尾部，则称x为同构数。例如，6是其平方数36的尾部，25是其平方数625的尾部，那么6和25都是同构数。

输入：

输入m和n两个正整数，用空格分隔。

输出：

连续输出同构数，数据间用空格分隔。*/


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
			/*计算输入数的位数*/
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