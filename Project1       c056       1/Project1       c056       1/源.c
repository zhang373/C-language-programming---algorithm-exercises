/*C056-�·���������
���빫Ԫ��ݺ��·ݣ�������·ݵ�������
���룺�꣬�£����ŷָ���
���������*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int year, month;
	scanf("%d,%d", &year, &month);
	switch (month)
	{
	case 1:printf("31"); break;
	case 2:if ((year % 400) == 0 || year % 100 != 100 && year % 4 == 0)
	         {
		         printf("29");
	          }
		  else
	          {
		          printf("28");
             	}
		break;
	case 3:printf("31"); break;
	case 4:printf("30"); break;
	case 5:printf("31"); break;
	case 6:printf("30"); break;
	case 7:printf("31"); break;
	case 8:printf("31"); break;
	case 9:printf("30"); break;
	case 10:printf("31"); break;
	case 11:printf("30"); break;
	case 12:printf("31"); break;
	}
	return 0;
}