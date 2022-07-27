#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch))
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//		getchar();
//	}
//	return 0;
////}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//	}
//	printf("%d ", n);
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 99999; i++)
//	{
//		int j = 0;
//		int n = 0;
//		int sum = 0;
//
//		for (j = 1; j <= 4; j++)
//		{
//			n = (int)pow(10, j);
//			sum += (i / n) + (i % n);
//			if (i == sum)
//				printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
int main()
{
	int  x = 7;
	int y = -5;
	int n = x ^ y;
	printf("%d ", n);

	return 0;
}