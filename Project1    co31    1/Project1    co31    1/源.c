/*求a+aa+aaa+aaaa+…+aa...a（n个），其中a为1～9之间的整数。
例如：当a = 1, n = 3时，求1+11+111之和为123；
输入：组成序列的数字a和求和项的数量n
输出：算式和结果。*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>



int main()
{
	int b, n,a;
	scanf("%d%d", &b, &n);
	a = b;
	int i = 0;
	int k = 0;
	int s = 0;
	while (i <n)
	{
		s = a + s;
		i++;
		printf("%d", a);
		a = 10 * a + b;
		while ((k + 1) < n)
		{
			printf("+");
			k++;
			break;
		}
	}
	printf("=");
	printf("%d", s);
	return 0;
}