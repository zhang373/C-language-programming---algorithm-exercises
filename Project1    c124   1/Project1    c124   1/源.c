/* 第 12 周 / 编程题 - C124-学生成绩排序
有n名学生，每个学生的数据包括学号、姓名、三门课的成绩。
可以从键盘输入n个学生的数据，按总成绩从小到大排序，
打印包含学号、姓名、三门课成绩和总成绩的成绩单。（测试时，数据从键盘输入。）

输入：第1行为整数n，后面n行表示n个人的信息，包括学号、姓名、和三门课的成绩，每行的数据间用空格隔开。

输出：n行，表示n个人的信息，包括学号、姓名、三门课的成绩和总成绩，数据间一个空格，末尾无空格。



样例输入：
2
2004002 lisi 60 80 70
2004003 wangwu 85 92 87
样例输出：
2004002 lisi 60 80 70 210
2004003 wangwu 85 92 87 264
*/


#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<math.h>
#include<stdio.h>

int changeintonumber(char input[]);
int sum(char input[]);
int main()
{
	char input[100][100][100];
	int n;
	scanf("%d", &n);
	int i = 0;//学生序号
	int j = 0;//学生项目
	while (i < n)
	{
		while (j <= 4)
		{
			scanf("%s", input[i][j]);
			input[i][j][strlen(input[i][j])] = '\0';
			j++;
		}
		i++;
		j = 0;
	}
	i = 0;
	int include[100];
	while (i < n)
	{
		include[i] = ((input[i][4][0] - '0') * 10 + (input[i][4][1] - '0')) + ((input[i][3][0] - '0') * 10 + (input[i][3][1] - '0')) + ((input[i][2][0] - '0') * 10 + (input[i][2][1] - '0'));
		i++;
    }
	i = 0;



	//把三位数转成字符串形式！

	int measure = 1;
	
	while (i < n)
	{
		printf("%s %s %s %s %s", input[i][0], input[i][1], input[i][2], input[i][3], input[i][4]);
		printf(" %d", include[i]);
		
		if (measure == n)
		{
		
		}
		else
		{
			printf("\n");
			measure++;
		}
		i++;
	}
k:	return 0;
 }

int changeintonumber(char input[])
{
	int out=0;
	int i = strlen(input);
	if (i = 1)
	{
		out = (int)input[0] - '0';
	}
	if (i = 2)
	{
		out = 10 * ((int)input[0] - '0') + (int)input[1] - '0';
	}
	if (i = 3)
	{
		out = 100;
	}
	return out;
}

int sum(char input[])
{
	int out;
	out = (int)input[2] - '0' + (int)input[3] - '0' + (int)input[4] - '0';
	return out;
}