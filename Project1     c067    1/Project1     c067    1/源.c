/* �� 11 �� / ����� - C067-������λ�ֽ�
"д������������λ�ֽڸ�ʽ���磬���û�����82668634ʱ������Ӧ�����82,668,634��

���룺������

�������λ�ֽ��ʽ��

������

82668634

82,668,634



�������룺
1
���������
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
	j = j;//j������ת�����˼�����λ��
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