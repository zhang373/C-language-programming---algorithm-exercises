/* �� 12 �� / ����� - C074-ͳ����ĸ����
"����һ���ַ������䳤�Ȳ�����81�����ֱ�ͳ������26��Ӣ����ĸ���ֵĴ����������ִ�Сд��ĸ����
������ĸ���ִ����Ӹߵ���������������ͬ������ĸ˳�����С�
��ĸ�����ʽ���������磺A-3����ʾ��ĸA����3�Σ�C-0��ʾ��ĸCû�г��֡�

���룺

��һ��Ϊ���룬ռһ��

�����

�ڶ���Ϊ�����ռһ�С�������ĸ�����ʽ�Ӹߵ������������ĸ���֮����һ���ո��ַ��ָ���

������

123abcAABXxwvUu+

A-3 B-2 U-2 X-2 C-1 V-1 W-1 D-0 E-0 F-0 G-0 H-0

�������룺
ABCDEFGHIJKLMNOPQTSTUVWXYZ
���������
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
	int j = 0;//�������ݵĶ���
	
	
	change(input);//ת���Сд
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