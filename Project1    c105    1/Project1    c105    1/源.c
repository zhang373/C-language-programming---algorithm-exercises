/* 第 12 周 / 编程题 - C105-按字典顺序寻找最大和最小单词
定义包含5个英文单词的字符数组（即二维字符数组），键盘输入5个单词，按字典顺序寻找最大和最小单词并输出。

输入：5个单词

输出：最大和最小单词（按字典序）

样例输入：
this is a book end
样例输出：
max:this min:a*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>

int cmpr(char input1[], char input2[]);
int main()
{
	char input[5][20];
	scanf("%s", input[0]);
	scanf("%s", input[1]);
	scanf("%s", input[2]);
	scanf("%s", input[3]);
	scanf("%s", input[4]);

	char max[20];
	strcpy(max, input[0]);
	int i = 1;
	while (i < 5)
	{
		if (cmpr(input[i], max) == 1)
		{
			strcpy(max, input[i]);
        }
		i++;
	}

	char min[20];
	strcpy(min, input[0]);
	i = 1;
	while (i < 5)
	{
		if (cmpr(input[i], min) == 0)
		{
			strcpy(min, input[i]);
		}
		i++;
	}


	printf("max:%s min:%s", max, min);
	return 0;
}

int cmpr(char input1[], char input2[])
{
	int i = 0;
	while (input1[i] == input2[i])
	{
		i++;
		if (i == strlen(input1) || i == strlen(input2))
		{
			break;
		}
	}
	if (((int)input2[i] >= 'a' && (int)input2[i] <= 'z') &&((int)input1[i] >= 'a' && (int)input1[i] <= 'z'))
	{
		if ((int)input1[i] > (int)input2[i])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (i<strlen(input1)&&i==strlen(input2))
	{
		return 1;
	}
	if (i == strlen(input1) && i<strlen(input2))
	{
		return 0;
	}
}
