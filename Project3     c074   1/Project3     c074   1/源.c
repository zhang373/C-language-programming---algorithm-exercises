/* 第 12 周 / 编程题 - C074-统计字母次数
"输入一个字符串（其长度不超过81），分别统计其中26个英文字母出现的次数（不区分大、小写字母），
并按字母出现次数从高到低排序，若次数相同，按字母顺序排列。
字母输出格式举例，例如：A-3，表示字母A出现3次，C-0表示字母C没有出现。

输入：

第一行为输入，占一行

输出：

第二行为输出，占一行。按照字母输出格式从高到低输出，各字母输出之间用一个空格字符分隔。

样例：

123abcAABXxwvUu+

A-3 B-2 U-2 X-2 C-1 V-1 W-1 D-0 E-0 F-0 G-0 H-0

样例输入：
ABCDEFGHIJKLMNOPQTSTUVWXYZ
样例输出：
T-2 A-1 B-1 C-1 D-1 E-1 F-1 G-1 H-1 I-1 J-1 K-1 L-1 M-1 N-1 O-1 P-1 Q-1 S-1 U-1 V-1 W-1 X-1 Y-1 Z-1 R-0*/


#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<string.h>
#include<stdio.h>


void change(char input[]);
int main()
{
	char input[105];
	gets(input);
	int measure = strlen(input);
	int j = 0;//输入数据的东西
	
	
	change(input);//转变大小写
	int aa = 0;
	int bb = 0;
	char tt[105];
	while (aa < measure)
	{
		if ((int)input[aa] <= 'Z' && (int)input[aa] >= 'A')
		{
			tt[bb] = input[aa];
			bb++;
		}
		aa++;
		
	}
	tt[bb] = '\0';
	strcpy(input, tt);

     typedef struct word
	 {
		int chge;
		int number;
	 } word;

	 word output[26];
	 int i = 0;
	 while (i < 26)
	 {
		 output[i].chge = i;
		 output[i].number = 0;
		 i++;
	 }
	 i = 0;
	 measure = strlen(input);
	 while (j < measure)
	 {
		 int i = (int)input[j] - 'A';
		 output[i].number++;
		 j++;
	 }

	 for (int ii = 0; ii < 26; ii++)
	 {
		 for (int jj = 25; jj > ii; jj--)
		 {
			 if (output[jj].number > output[jj - 1].number)
			 {
				 word ttt;
				 ttt = output[jj];
				 output[jj] = output[jj - 1];
				 output[jj - 1] = ttt;
			 }
		 }
	 }

	 j = 0;
	 int flag = 100;
	 while (j < 26)
	 {
		 if (flag == 100)
		 {
			 printf("%c-%d", (char)(output[j].chge + 'A'), output[j].number);
			 flag--;
		 }
		 else
		 {
			 printf(" %c-%d", (char)(output[j].chge + 'A'), output[j].number);
		 }
		 j++;

	 }

	return 0;
}




void change(char input[])
{
	int i = 0;
	int measure = strlen(input);
	while (i < measure)
	{
		if ((int)input[i] <= 'z' && (int)input[i] >= 'a')
		{
			input[i] = (char)((int)input[i] - 'a' + 'A');
		}
		i++;
	}
}