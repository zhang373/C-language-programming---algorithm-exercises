///*�������ⳤ�ȵ��ַ������ֱ�ͳ�����д�д��ĸ��Сд��ĸ�������ַ��������ַ��ĸ��������ͳ�ƽ�����ٰ�ͳ��ֵ�Ӷൽ�����������
//
//��ʾ���������������ð��������ð�š�
//
//���룺���ⳤ�ȵ��ַ�����
//
//�����ͳ�����д�д��ĸ��Сд��ĸ�������ַ��������ַ��ĸ�����
//
//�������룺
//ASDFghjkl*(),;19
//���������
//��д��ĸ��4 Сд��ĸ��5 �����ַ���2 �����ַ���5 �Ӷൽ������������£� Сд��ĸ��5 �����ַ���5 ��д��ĸ��4 �����ַ���2*/
//
//
//void paixv(int aa[],int m);
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//
//int main()
//{
//	char c[200];
//	gets(c);
//	int i = 0;
//	int a=0 ,b=0, e=0, d=0;
//	while (i < strlen(c))
//	{
//		if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z') || (c[i] >= '0' && c[i] <= '9'))
//		{
//			if (c[i] >= 'A' && c[i] <= 'Z')
//			{
//				a++;
//		     }
//			if (c[i] >= 'a' && c[i] <= 'z')
//			{
//				b++;
//			}
//			if (c[i] >= '0' && c[i] <= '9')
//			{
//				e++;
//			}
//		}
//		else
//		{
//			d++;
//		}
//		i++;
//	}
//	printf("��д��ĸ��%d Сд��ĸ��%d �����ַ���%d �����ַ���%d ", a, b, e, d);
//	printf("�Ӷൽ������������£� ");
//	int aa[4];
//	aa[0] = a;
//	aa[1] = b;
//	aa[3] = e;
//	aa[2] = d;
//	paixv(aa,4);
//
//	if (aa[0] == a)
//	{
//		printf("��д��ĸ��%d ", a);
//	}
//	else {
//		if (aa[0] == b)
//		{
//			printf("Сд��ĸ��%d ", b);
//		}
//		else
//		{
//			if (aa[0] == e)
//			{
//				printf("�����ַ���%d ", e);
//			}
//			else
//			
//			{
//				printf("�����ַ���%d ", d);
//			}
//		}
//	
//	}
//
//
//	if (aa[1] == a)
//	{
//		printf("��д��ĸ��%d ", a);
//	}
//	else {
//		if (aa[1] == b)
//		{
//			printf("Сд��ĸ��%d ", b);
//		}
//		else
//		{
//			if (aa[1] ==e)
//			{
//				printf("�����ַ���%d ", e);
//			}
//			else
//
//			{
//				printf("�����ַ���%d ", d);
//			}
//		}
//
//	}
//	if (aa[2] == a)
//	{
//		printf("��д��ĸ��%d ", a);
//	}
//	else {
//		if (aa[2] == b)
//		{
//			printf("Сд��ĸ��%d ", b);
//		}
//		else
//		{
//			if (aa[2] == e)
//			{
//				printf("�����ַ���%d ", e);
//			}
//			else
//
//			{
//				printf("�����ַ���%d ", d);
//			}
//		}
//
//	}
//	
//	if (aa[3] == a)
//	{
//		printf("��д��ĸ��%d", a);
//	}
//	else {
//		if (aa[3] == b)
//		{
//			printf("Сд��ĸ��%d", b);
//		}
//		else
//		{
//			if (aa[3] == e)
//			{
//				printf("�����ַ���%d", e);
//			}
//			else
//
//			{
//				printf("�����ַ���%d", d);
//			}
//		}
//
//	}
//}
//
//
//void paixv(int aa[],int m)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = m - 1; j > i; j--)
//		{
//			if (aa[j] > aa[j - 1])
//			{
//				int t = aa[j];
//				aa[j] = aa[j - 1];
//				aa[j - 1] = t;
//			}
//		}
//	}
//}




/*�������ⳤ�ȵ��ַ������ֱ�ͳ�����д�д��ĸ��Сд��ĸ��
�����ַ��������ַ��ĸ��������ͳ�ƽ�����ٰ�ͳ��ֵ�Ӷൽ�����������

��ʾ���������������ð��������ð�š�

���룺���ⳤ�ȵ��ַ�����

�����ͳ�����д�д��ĸ��Сд��ĸ�������ַ��������ַ��ĸ�����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int chang(char* p);
void bubble(int* p);
int main()
{
	char chuan[200];
	gets(chuan);
	char* p = chuan;
	char* dazi = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* xiaozi = "abcdefghijklmnopqrstuvwxyz";
	char* shuzi = "0123456789";
	char* a = dazi, * b = xiaozi, * c = shuzi;
	int ans[5] = { 0,0,0,0 };
	while (*p)
	{
		while (*a)
		{
			if (*p == *a)
			{
				ans[0] += 1;
			}
			a++;
		}
		a = dazi;
		while (*b)
		{
			if (*p == *b)
			{
				ans[1] += 1;
			}
			b++;
		}
		b = xiaozi;
		while (*c)
		{
			if (*p == *c)
			{
				ans[2] += 1;
			}
			c++;
		}
		c = shuzi;
		p++;
	}
	p = chuan;
	ans[3] = chang(p) - ans[1] - ans[2] - ans[0];
	printf("��д��ĸ��%d", ans[0]);
	printf(" Сд��ĸ��%d", ans[1]);
	printf(" �����ַ���%d", ans[2]);
	printf(" �����ַ���%d", ans[3]);
	printf(" �Ӷൽ������������£�");
	int ans1[5] = { ans[0],ans[1],ans[2],ans[3] };
	bubble(ans1);
	int i = 0;
	int n = 4;
	while (i < n)
	{
		while (ans1[i] == ans1[i + 1])
		{
			i++;
		}
		if (ans1[i] == ans[0])
		{
			printf(" ��д��ĸ��%d", ans[0]);
		}
		if (ans1[i] == ans[1])
		{
			printf(" Сд��ĸ��%d", ans[1]);
		}
		if (ans1[i] == ans[2])
		{
			printf(" �����ַ���%d", ans[2]);
		}
		if (ans1[i] == ans[3])
		{
			printf(" �����ַ���%d", ans[3]);
		}
		i++;
	}
	return 0;
}
int chang(char* p)
{
	int i = 0;
	while (*p)
	{
		i++;
		p++;
	}
	return i;
}
void bubble(int* p)
{
	int i = 0;
	int n = 1;
	int temp = 0;
	while (i < 4)
	{
		while (n < 4 - i)
		{
			if (*p < *(p + n))
			{
				temp = *(p + n);
				*(p + n) = *p;
				*p = temp;
			}
			n++;
		}
		p++;
		n = 1;
		i++;
	}
}