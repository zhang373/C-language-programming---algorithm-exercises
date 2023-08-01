/*在医院打点滴（吊针）的时候，如果滴起来有规律，先是滴一滴，停一下；
然后滴二滴，停一下；再滴三滴，停一下...，
现在有一个问题：这瓶盐水一共有v毫升，每一滴是d毫升，每一滴的速度是一秒（假设最后一滴不到d毫升，则花费的时间也算一秒），
停一下的时间也是一秒，这瓶水什么时候能滴完呢？（0 < d < v <6000)
输入：一滴是多少毫升和一瓶盐水有多少毫升，中间用空格隔开.
输出：滴完需要多少时间.

样例输入：
0.5 1.7
样例输出：
6*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>

int main()
{
	float v;
	float d;
	scanf("%f%f",&d,&v);
	
	int count = 0;
	int s = 0;
	int i = 1;
	while (count * d < v)
	{
		s =  i;
		count = count + s;
		i++;
	} 
	i = i - 2;
	int j = 0;
	float all = 0;
	count = 0;
	while (j <= i)
	{
		count = count + j;
		j++;
	}
	int measure;
	if ((double)((v - count * d) / d) !=(int)((v - count * d) / d) )
	{
		 measure = (v - count * d) / d + 1;
	}
	else
	{
		 measure = (v - count * d) / d;
	}


	int output;
	output = measure + count + i;
	printf("%d", output);
	return 0;
}