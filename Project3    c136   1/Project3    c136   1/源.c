/*�� 13 �� / ����� - C136-ǩ����ǩ��
ÿ��һ��ʼ����һ���ڻ�����ǩ�ֵ��˻���ţ����һ��ǩ�ֵ��˻������š�����ǩ���ļ�¼����Ӧ���ҵ����쿪�ź����ŵ��ˡ�

���������ʽ��

���룺ÿ����������һ��ļ�¼��������������M��ͷ��M�Ǽ�¼���������M�У�ÿ�еĸ�ʽΪ��ID_number Sign_in_time Sign_out_time������ʱ����HH:MM:SS��ʽ������ID number��һ��������15���ַ����ַ����� 

�������һ������������ѽ����������ŵ���Ա��ID�š����������֤���������һ���ո������

ע����֤��¼һ�¡�Ҳ����˵��ÿ���˵�ǩ��ʱ���������ǩ��ʱ�䣬����û��������ͬʱǩ����ǩ�ˡ�



�������룺
3 
CS301111 15:30:28 17:00:10 
SC3021234 08:00:00 11:25:25 
CS301133 21:45:00 21:58:40
���������
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