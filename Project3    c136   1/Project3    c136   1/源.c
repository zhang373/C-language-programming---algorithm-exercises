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
#include<string.h>
#include<math.h>
#include<stdio.h>

int main()
{

	typedef struct person
	{
		char name[100];
		char intime[100];
		char outtime[100];
	}person;

	person identity[100];
	int n;
	scanf("%d", &n);
	int i = 0;
	while (i < n)
	{
		scanf("%s%s%s", &identity[i].name, &identity[i].intime, &identity[i].outtime);
		i++;
	}

	person first=identity[0];
	i = 1;
	while (i < n)
	{
		if (strcmp(first.intime, identity[i].intime) == 1)
		{
			first = identity[i];
		}
		i++;
	}
	person end = identity[0];
	i = 1;
	while (i < n)
	{
		if (strcmp(end.outtime, identity[i].outtime) == -1)
		{
			end = identity[i];
		}
		i++;
	}
	printf("%s %s", first.name, end.name);
	return 0;
}