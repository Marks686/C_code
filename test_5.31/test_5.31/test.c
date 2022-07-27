#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAXN 10
//int main()
//{
//	int i, index, k, n, temp;
//	int a[MAXN];
//	scanf("%d", &a[n]);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for(k=0; k<)
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	char a[80];
//	int i, count = 0;
//	for (i = 0; i < 80; i++)
//	{
//		scanf("%c", &a[i]);
//		if (a[i] == '\n')
//			break;
//	}
//	for (i = 0; i < 80; i++)
//	{
//		if (a[i] > 'A' && a[i] < 'Z' && a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U')
//			count++;
//		if (a[i] == '\n')
//			break;
//	}
//	printf("%d", count);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int k = 0;
//	char s[20];
//	int i = 0;
//	scanf("%d ", &k);
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%c", &s[i]);
//		if (s[i] == '\n')
//		{
//			break;
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		printf("%c", s[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a[80];
//	gets(a);
//	int i = 0;
//	for (i = 0; i < 80; i++)
//	{
//		if (a[i] >= 'A' && a[i] <= 'Z')
//			a[i] += 25 - 2 * (a[i] - 65);
//	}
//	printf("%s", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	while (a != 0)
//	{
//		b = b * 10 + a % 10;
//		a /= 10;
//	}
//	printf("%d", b);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int count = 1;
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i <= 10000; i++)
//	{
//		for (j = 0; j <= 10000; j++)
//		{
//			if (i * i + j * j == n  && i <= j)
//			{
//				printf("%d %d\n", i, j);
//				count = 0;
//			}
//
//		}
//	}
//	if (count)
//	{
//		printf("No Solution");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	char ch;
	int i=0, j=0;
	while ((ch = getchar()) != '\n')
	{
		if (ch != ' ')
		{
			i++;
		}
		else
		{
			if (i > 0)
			{
				j++;
				i = 0;
			}
		}
	}
	if (i != 0)
	{
		j++;
	}
	printf("%d", j);
	return 0;
}