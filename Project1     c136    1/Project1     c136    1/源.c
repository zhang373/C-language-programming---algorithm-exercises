/*第 13 周 / 编程题 - C136-签到和签退
每天一开始，第一个在机房里签字的人会打开门，最后一个签字的人会锁上门。根据签到的记录，你应该找到那天开门和锁门的人。

输入输出格式：

输入：每个案件都有一天的记录。案例以正整数M开头，M是记录总数，后跟M行，每行的格式为：ID_number Sign_in_time Sign_out_time，其中时间以HH:MM:SS格式给定，ID number是一个不超过15个字符的字符串。 

输出：在一行中输出当天已解锁和锁定门的人员的ID号。这两个身份证号码必须用一个空格隔开。

注：保证记录一致。也就是说，每个人的签到时间必须早于签退时间，并且没有两个人同时签到或签退。



样例输入：
3
CS301111 15:30:28 17:00:10 
SC3021234 08:00:00 11:25:25 
CS301133 21:45:00 21:58:40

样例输出：
SC3021234 CS301133*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
void change(char in1[], char in2[]);
int cmpr(char in1[], char in2[]);
int main()
{
	int n;
	scanf("%d", &n);
	int i = -1;
	char input[100][100];
	while (i < n)
	{
		gets(input[i]);
		i++;
	}
	char name[100][100];
	char chechin[100][100];
	char chechout[100][100];
	int k = 0;
	int r = 0;
	i = 0;
	while (i < n)
	{
		k = 0;
		while (k < strlen(input[i]) - 18)
		{
			name[i][r] = input[i][k];
			r++;
			k++;
		}
		name[i][r] = '\0';
	    r = 0;
		k = strlen(input[i]) - 18;
		while (k < strlen(input[i])-9)
		{
			chechin[i][r] = input[i][k];
			k++;
			r++;

		}
		chechin[i][r] = '\0';
		r = 0;
		while (k < strlen(input[i]))
		{
			chechout[i][r] = input[i][k];
			r++;
			k++;
		}
		chechout[i][r] = '\0';
		r = 0;
		i++;
	}

	typedef struct innn
	{
		char intime[100];
	    char outtime[100];
		char name[100];
	}in;
	in inn[100];
	i = 0;
	while (i < n)
	{
		strcpy(inn[i].outtime, chechout[i]);
		strcpy(inn[i].intime, chechin[i]);
		strcpy(inn[i].name,name[i]);
		i++;
	}

	in first;
	first = inn[0];
	i = 1;
	while (i < n)
	{
		if (cmpr(inn[i].intime, first.intime) == -1)
		{
			first = inn[i];
		}
		i++;
	}
	in end;
	end = inn[0];
	i = 1;
	while (i < n)
	{
		if (cmpr(inn[i].outtime, end.outtime) == 1)
		{
			end = inn[i];
		}
		i++;
	}

	change(first.name, end.name);
	printf("%s %s", first.name, end.name);
	return 0;
}




void change(char in1[], char in2[])
{
	int i = 0;
	int k = 0;
	char tin1[100];
	char tin2[100];
	while (i < strlen(in1))
	{
		if ((int)in1[i] != ' ')
		{
			tin1[k] = in1[i];
			k++;
		}
		i++;
	}
	tin1[k] = 0;
	strcpy(in1, tin1);
	i = 0;
}
int cmpr(char in1[], char in2[])
{
	int i = 0;
	int k = 0;
	char tin1[100];
	char tin2[100];
	while (i < strlen(in1))
	{
		if ((int)in1[i] != ' ')
		{
			tin1[k] = in1[i];
			k++;
		}
		i++;
	}
	tin1[k] = 0;
	strcpy(in1, tin1);
	i = 0;
	k = 0;
	while (i < strlen(in2))
	{
		if ((int)in2[i] != ' ')
		{
			tin2[k] = in2[i];
			k++;
		}
		i++;
	}
	tin2[k] = 0;
	strcpy(in2, tin2);
	i = 0;
	while (in1[i] == in2[i])
	{
		i++;
	}
	if ((int)in1[i] > (int)in2[i])
	{
		return 1;
	}
	if ((int)in1[i] < (int)in2[i])
	{
		return -1;
	}

}