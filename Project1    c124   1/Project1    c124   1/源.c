/* �� 12 �� / ����� - C124-ѧ���ɼ�����
��n��ѧ����ÿ��ѧ�������ݰ���ѧ�š����������ſεĳɼ���
���ԴӼ�������n��ѧ�������ݣ����ܳɼ���С��������
��ӡ����ѧ�š����������ſγɼ����ܳɼ��ĳɼ�����������ʱ�����ݴӼ������롣��

���룺��1��Ϊ����n������n�б�ʾn���˵���Ϣ������ѧ�š������������ſεĳɼ���ÿ�е����ݼ��ÿո������

�����n�У���ʾn���˵���Ϣ������ѧ�š����������ſεĳɼ����ܳɼ������ݼ�һ���ո�ĩβ�޿ո�



�������룺
2
2004002 lisi 60 80 70
2004003 wangwu 85 92 87
���������
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
	int i = 0;//ѧ�����
	int j = 0;//ѧ����Ŀ
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



	//����λ��ת���ַ�����ʽ��

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