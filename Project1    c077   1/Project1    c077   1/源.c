/* �� 11 �� / ����� - C077-�ҵ����������ַ�
"��д����Ҫ����һ���ַ����в����������ִ�������һ���ַ�������ʾ�����ڵĿ�ʼ�±�ʹ�����(������������ַ���ֹһ��������ǰ���ַ�)



���룺һ���ַ���

��������������ַ�����������ʼ�±�

�������룺
xyxyzzzqqq1122334
���������
z 3 4
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

void cutup(char input[], char down[]);
void paixv(int count[], int w);
int find(int count[], int findnumber);
int start(int count[], int i);

int main()
{
	char input[200];
	gets(input);
	char down[100][100];
	int i = 0;
	int j = 0;
	// cut 'input' down!&&&&answer  is   down
	
		int k = 1;
		int measure = strlen(input);
		down[i][j]=input[0];
		down[0][1] = '\0';
		while (k < measure)
		{
			if (down[i][j] == input[k])
			{
				j++;
				down[i][j] = input[k];
				down[i][j + 1] = '\0';
			}
			else
			{
				i++; 
				j = 0;
				down[i][j] = input[k];
				down[i][j + 1] = '\0';
			}
			k++;
		}
	//cutup(input, down);


	int count[200];
	int w = 0;
	while (w <= i)
	{
		count[w] = strlen(down[w]);
		w++;
	}
	w--;

	int r = 0;
	int tt[200];
	while (r <= w)
	{
		tt[r] = count[r];
		r++;
	}
	paixv(count,w);

	i=find(tt, count[0]);

	printf("%c", down[i][0]);
	printf(" %d", strlen(down[i]));

	int startdown=start(tt, i);
	printf(" %d", startdown );
	return 0;
}

void paixv(int count[], int w)
{
	int i, j;
	for (i = 0; i < w; i++)
	{
		for (j = w ; j > i; j--)
		{
			if (count[j] > count[j-1])
			{
				int t = count[j];
				count[j] = count[j-1];
				count[j-1] = t;
			}

		}
	}
}


int find(int count[], int findnumber)
{
	int i = 0;
	while (i > -10)
	{
		if (count[i] == findnumber)
		{
			return i;
		}
		else
		{
			i++;
		}
	}
}

int start(int count[], int i)
{
	int k = 0;
	int all = 0;
	while (k < i)
	{
		all = all + count[k];
		k++;
	}
	return all;
}