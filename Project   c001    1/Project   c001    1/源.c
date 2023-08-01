/*从键盘输入一个小于等于1000的正整数x，输出其平方根（为整数）。若输入数大于1000，则输出0，并继续接受下一个输入直至小于等于1000。（提示：使用求平方根函数sqrt需要包含<math.h>头文件）。*/


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


