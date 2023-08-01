/*输入一个可能带空格字符的字符串(长度不超过200)，统计其中各个英文字母的出现次数，不区分大小写。输出字母a～z的出现次数，数据间以英文逗号分隔。非英文字母不统计。

   输入：可能带空格的字符串。

   输出：26个整数，以英文逗号分隔。



样例输入：
World's oldest drink enjoys new success
样例输出：
0,0,2,3,4,0,0,0,1,1,1,2,0,3,3,0,0,2,6,1,1,0,2,0,1,0
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char aa[250];
	gets(aa);
	int nn=strlen(aa);
	int ii=0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	int o = 0;
	int p = 0;
	int q = 0;
	int r = 0;
	int s = 0;
	int t = 0;
	int u = 0;
	int v = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	
	while (ii < nn)
	{
		if ((int)aa[ii] == 'A' || (int)aa[ii] == 'a')
		{
			a++;
		}
		if ((int)aa[ii] == 'B' || (int)aa[ii] == 'b')
		{
			b++;
		}
		if ((int)aa[ii] == 'C' || (int)aa[ii] == 'c')
		{
			c++;
		}
		if ((int)aa[ii] == 'D' || (int)aa[ii] == 'd')
		{
			d++;
		}
		if ((int)aa[ii] == 'E' || (int)aa[ii] == 'e')
		{
			e++;
		}
		if ((int)aa[ii] == 'F' || (int)aa[ii] == 'f')
		{
			f++;
		}
		if ((int)aa[ii] == 'G' || (int)aa[ii] == 'g')
		{
			g++;
		}
		if ((int)aa[ii] == 'H' || (int)aa[ii] == 'h')
		{
			h++;
		}
		if ((int)aa[ii] == 'I' || (int)aa[ii] == 'i')
		{
			i++;
		}
		if ((int)aa[ii] == 'J' || (int)aa[ii] == 'j')
		{
			j++;
		}
		if ((int)aa[ii] == 'K' || (int)aa[ii] == 'k')
		{
			k++;
		}
		if ((int)aa[ii] == 'L' || (int)aa[ii] == 'l')
		{
			l++;
		}
		if ((int)aa[ii] == 'M' || (int)aa[ii] == 'm')
		{
			m++;
		}
		if ((int)aa[ii] == 'N' || (int)aa[ii] == 'n')
		{
			n++;
		}
		if ((int)aa[ii] == 'O' || (int)aa[ii] == 'o')
		{
			o++;
		}
		if ((int)aa[ii] == 'P' || (int)aa[ii] == 'p')
		{
			p++;
		}
		if ((int)aa[ii] == 'Q' || (int)aa[ii] == 'q')
		{
			q++;
		}
		if ((int)aa[ii] == 'R' || (int)aa[ii] == 'r')
		{
			r++;
		}
		if ((int)aa[ii] == 'S' || (int)aa[ii] == 's')
		{
			s++;
		}
		if ((int)aa[ii] == 'T' || (int)aa[ii] == 't')
		{
			t++;
		}
		if ((int)aa[ii] == 'U' || (int)aa[ii] == 'u')
		{
			u++;
		}
		if ((int)aa[ii] == 'V' || (int)aa[ii] == 'v')
		{
			v++;
		}
		if ((int)aa[ii] == 'W' || (int)aa[ii] == 'w')
		{
			w++;
		}
		if ((int)aa[ii] == 'X' || (int)aa[ii] == 'x')
		{
			x++;
		}
		if ((int)aa[ii] == 'Y' || (int)aa[ii] == 'y')
		{
			y++;
		}
		if ((int)aa[ii] == 'Z' || (int)aa[ii] == 'z')
		{
			z++;
		}
		ii++;
	}
	printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z);
	return 0;
}