/*编写函数，将一个字符串str中指定的字符ch删去（包括重复出现的字符），并编写主函数进行调用测试。函数原型:  void delchar(char *str,char ch);。

输入：

占二行。

第1行，输入任意字符串（注：输入的字符串长度不会超过80）

第2行，输入一个字符

输出：

占一行



样例输入：
x+y*z-12
/
样例输出：
x+y*z-12*/

void delchar(char a[] , char b);

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char a[100];
	char b;
	gets(a);
	scanf("%c", &b);
	delchar(a, b);
	
	printf("%s", a);
	return 0;
}

void delchar(char a[], char b)
{
    k:b = b;
	 int length = strlen(a);
	int i = 0;
	int count = 0;
	if (a[length - 1] !=(int)b)
	{ while (i < length)
	  {
		if ((int)a[i] == (int)b)
		{
			int t = i;
			while (i + 1 < length)
			{
				a[i] = a[i + 1];
				i++;
			}
			count++;
			i = t - 1;
		}
		i++;
	   }
      a[length - count] = '\0';
	}
	if (a[length - 1] == b)
	{
		a[length - 1] = '\0';
		goto k;
	}
	
}