/*将数字替换为字母。输入一个整数，将它除以2；再将除以2后所得数字的整数部分的各位用相应序号的字母替代。替换原则：0换为a，1换为b，2换为c，...，以此类推，9换为j。

例如，1234,除以2等于617，替换结果为gbh

输入：一个正整数

输出：除2后的整数整数部分和字符串，中间以一个空格隔开。

样例：

1234

617 gbh

*/



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
	int x,z;
	z = 0;
	scanf("%d", &x);
	int y = (int)(x / 2);
	printf("%d ", y);
	int i = 0;
	while (y / (int)pow(10, i) != 0)
	{
		i++;
	}
	int e;
	do
	{
		switch ((y-z)/ (int)pow(10, i-1))
		{
		case 1:printf("b"); break;
		case 2:printf("c"); break;
		case 3:printf("d"); break;
		case 4:printf("e"); break;
		case 5:printf("f"); break;
		case 6:printf("g"); break;
		case 7:printf("h"); break;
		case 8:printf("i"); break;
		case 9:printf("h"); break;
		case 0:printf("a"); break;
		}
		z = ((y-z)/(int)pow(10, i - 1))*((int)pow(10, i - 1));
		i = i - 1;
		e = y - z;
	} while (i != 0);
	return 0;
}