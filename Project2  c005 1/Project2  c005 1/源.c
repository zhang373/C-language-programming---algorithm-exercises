#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{



	int x,y,z;/*OPEN SPACE XYZ*//*也可以直接输英文 首单词小写其他单词首字母大写*/
    scanf("%d", &x);/*输入*//*有返回值的 但这里fangqil*/
		
		 y = x / 100;/*if opened ,dont open again */
		 z = y % 10000;
    printf("%d%d", z,z+1024);/*output*/
	return 0;
}