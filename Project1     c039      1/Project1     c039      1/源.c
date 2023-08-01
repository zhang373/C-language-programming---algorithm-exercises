/*某城市最高的楼有一部电梯，该电梯依照输入楼层数的先后次序运行。电梯最初在0层。运行完一个输入序列后就停止在该楼层，不返回0层。
编写程序计算电梯运行一个序列的时间。
电梯每上1层需要6秒。每下1层需要4秒。如在某层停留，无论上下人多少，均停留5秒。楼层的值大于等于1，小于100 , 0在序列中表示结束序列输入。程序输入电梯运行序列，输出电梯运行时间（秒）。

样例输入：
2 1 0
样例输出：
26*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


int main()
{
	int a[10086];
	int i = 1;
	a[0] = 0;
	scanf("%d", &a[i]);
	while (a[i] != 0)
	{
		i++;
		scanf("%d", &a[i]);
	}
	i--;
	int s = i * 5;
	int k = 0;
	while (k <= i - 1)
	{
		if (a[k] <=a[k + 1])
		{
			s = s + (a[k + 1] - a[k]) * 6;
		}
		if (a[k] > a[k + 1])
		{
			s = s + (a[k ] - a[k+1]) * 4;
		}
		k++;
	}

	printf("%d", s);

	return 0;
}