/*����һ����дӢ����ĸ�� ����������ڵ���ĸ��������ĸA-Z��������β��ӵĻ�״���У���

����: ��дӢ����ĸ
���:����ĸǰ�����ĸ������ĸ������ĸ�������ĸ��������ĸ���޼����

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	char x;
	scanf("%c", &x);
	if ((int)x == 'A')
	{
		printf("ZAB");
	}
	if ((int)x == 'Z')
	{
		printf("YZA");
	}
	if ((int)x != 'A' && (int)x != 'Z')
	{
		int y = ((int)x) - 1; int w = ((int)x) + 1;
		printf("%c%c%c", y, x, w);
	}
	return 0;
}