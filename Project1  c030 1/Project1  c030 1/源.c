/*���ʼ��ܡ�����һ���ַ�����һ���Ǹ�����k�����ַ����е�ÿһ����ĸ������ĸ�������ĵ�k����ĸ���棬����k��ʱ�ٴ���ĸaѭ��������
����k = 3�ǣ�a��d���棬A��D���棬x��a���棬y��b���棬���ִ�Сд���䡣�ַ����еķ���ĸ�ַ����䡣�ַ����ĳ��Ȳ�����100��

���룺һ���ַ����ͷǸ�����k

��������ܵ��ַ�����



�������룺
Beijing 9
���������
Knrsrwp*/

#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int k;
	char a[105];
	scanf("%s",&a);
	scanf("%d", &k);
	if (k >= 26)
	{
		k = k % 26;
	}
	int i = 0;
	while (i < strlen(a))
	{
		if (((int)a[i] >= 'a' && (int)a[i] <= 'z') || ((int)a[i] >= 'A' && (int)a[i] <= 'Z'))
		{
			if ((int)a[i] >= 'a' && (int)a[i] <= 'z')
			{
				if (k > ('z' - (int)a[i]))
				{
					a[i] = (char)(k - ('z' - (int)a[i]) - 1 + 'a');
				}
				else
				{
					a[i] = (char)((int)a[i] + k);
				}
			}
			if ((int)a[i] >= 'A' && (int)a[i] <= 'Z')
			{
				if (k > ('Z' - (int)a[i]))
				{
					a[i] = (char)(k - ('Z' - (int)a[i]) - 1 + 'A');
				}
				else
				{
					a[i] = (char)((int)a[i] + k);
				}
			}
		}
		else
		{
			a[i] = a[i];
		}
		i++;
	}
	printf("%s", a);
	return 0;
}