/* �� 12 �� / ����� - C135-�ָ�����
����һ�����֣�������ǰ����������еġ�5�������ɿո���ô�͵õ�һ���ÿո�ָ�����ɷǸ�����
��������Щ�����ԡ�0����ͷ����Щͷ���ġ�0��Ӧ�ñ����Ե�����������������������ɸ���0����ɵģ���ʱ�����������0����
��������ǣ�����Щ�ָ�õ�������������С�����˳�����������

���������ʽ��

���룺һ�����֣�����֮��û�пո񣩣��������ֵĳ��Ȳ�����1000���������ݱ�֤���ָ�õ��ķǸ������������100000000���������ݲ�����ȫ�ɡ�5����ɡ� 

������ָ�õ�����������Ľ�������ڵ���������֮����һ���ո�ֿ���ÿ�����ռһ�С�



�������룺
0051231232050775
���������
0 77 12312320*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int count(char input[]);
void sour(int cnt[], int n);
int main()
{
	char input[205];
	scanf("%s", &input);
	
	int measure = strlen(input);
	int k = 0;//of input
	int i = 0;//of output first
	int j = 0;//of output second

	char output[100][100];
	while (k < measure)
	{
		if (input[k] != '5')
		{
			output[i][j] = input[k];
			j++;
		}
		if (input[k] == '5')
		{
			output[i][j] = '\0';
			i++;
			j = 0;
		}
		k++;
	}
	output[i][j] = '\0';

	int cnt[100];
	int ii = 0;
	int jj = 0;
	while (ii <= i)
	{
		if (strlen(output[ii]) != 0)
		{
			cnt[jj] = count(output[ii]);
			jj++;
		}
	
		ii++;

	}

	sour(cnt,jj);

	k = 0;
	int flag = 100;
	while (k <jj )
	{
		if (flag == 100)
		{
			printf("%d", cnt[k]);
			flag--;
		}
		else
		{
			printf(" %d",cnt[k]);
		}
		k++;
	}
	return 0;
}




void sour(int cnt[], int n)
{
	for (int  i= 0; i < n; i++)
	{
		for (int j = n - 1; i<j ; j--)
		{
			if (cnt[j] < cnt[j - 1])
			{
				int t = cnt[j];
				cnt[j] = cnt[j - 1];
				cnt[j - 1] = t;
			}
		}
	}
}


int count(char input[])
{
	int sum = 0;
	int measure = strlen(input);
	int i = 0;
	while (i < strlen(input))
	{
		sum = sum + ((int)input[i]-'0') * (int)pow(10, measure - 1);
		i++;
		measure--;
	}
	return sum;
}