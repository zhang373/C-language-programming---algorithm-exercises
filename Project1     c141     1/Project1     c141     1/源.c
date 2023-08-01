/*�� 12 �� / ����� - C141-ð�������ѡ������
��дð��������������ԭ�ͣ�void BubbleSort(int a[],int n);��n��������������

��дѡ��������������ԭ�ͣ�void SelectionSort(int a[],int n);��n��������������

��дmain����������10�����������ú������䰴����ͽ���ֱ������������������������ݼ���һ���ո�ָ���



�������룺
5 2 8 9 10 1 3 4 7 6
���������
1 2 3 4 5 6 7 8 9 10 10 9 8 7 6 5 4 3 2 1*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
void BubbleSort(int a[], int n);
void SelectionSort(int a[], int n);

int main()
{
	int input1[10];
	int input2[10];
	int i = 0;
	while (i < 10)
	{
		scanf("%d", &input1[i]);
		i++;
	}
	int uu = 0;
	while (uu < 10)
	{
		input2[uu] = input1[uu];
		uu++;
	}
	BubbleSort(input1, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d ", input1[i]);
		i++;
	}

	SelectionSort(input2 ,10);

  	i = 0; int flag = 100;
	while (i < 10)
	{
		if (flag == 100)
		{
			flag--;
			printf("%d", input2[i]);
		}
		else
		{
			printf(" %d", input2[i]);
		}
		i++;
	}

	return 0;
}

void BubbleSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int t = a[j - 1];
				a[j - 1] = a[j];
				a[j] = t;
			}
		}
	}
}



void SelectionSort(int a[], int n)
{
	int i = 0;
	int input[10];
	while (i < 10)
	{
		input[i] = a[i];
		i++;
	}
	int max;
	i = 0;
	int j = 0;
	while (i < 10)
	{
		max = input[i];
		j = i + 1;
		while (j < 10)
		{
			if (input[j] > max)
			{
				max = input[j];
				int ttt = input[j];
				input[j] = input[i];
				input[i] = ttt;
			}
			j++;
		}
		a[i] = max;
		i++;
	}


}
