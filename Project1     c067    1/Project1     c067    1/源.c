/* 第 11 周 / 编程题 - C067-整数三位分节
"写出正整数的三位分节格式。如，当用户输入82668634时，程序应该输出82,668,634。

输入：正整数

输出：三位分解格式。

样例：

82668634

82,668,634



样例输入：
1
样例输出：
1*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int a;
	scanf("%d", &a);
	int i = 0;
	while (a / (int)pow(10, i))
	{
		i++;
	}
	int b[100];
	int j = 0;
	int t = a;
	while (i > 0)
	{
		int q;
		q = t / (int)pow(10, i - 1);
		t=t-q* (int)pow(10, i - 1);
		b[j] = q;
		j++;
		i--;
	}
	j = j;//j现在是转出来了几个个位数
	t = 0;
	i = 0;
	char output[100];
	
	if (j > 3)
	{
		while (i < j)
		{
			int mea = j % 3;
			while (t < mea)
			{
				output[t] = (char)b[i] + '0';
				t++; i++;
			}

			if ((i - mea) % 3 != 0)
			{
			k:output[t] = b[i] + '0';
				i++; t++;
			}
			else
			{
				output[t] = ',';
				t++;
				goto k;
			}

		}
	}
	else
	{
		printf("%d", a);
	}
    output[t] = '\0';
	t = 0;
	i = 1;
	int uuu = strlen(output);
	if (output[0] == ',')
	{
		while (i < uuu)
		{
			output[t] = output[i];
			t++; i++;
		}
		output[uuu - 1] = '\0';
	}
	
	

	printf("%s", output);
    return 0;
}