#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			
//			a++;
//		}
//		if (i / 10 == 9)
//		{
//			
//			a++;
//		}
//	}
//	printf("%d", a);
//	
//	return 0;
//}
int main()
{
	int i = 0;
	double a = 0.0;
	int b = 1;
	for (i = 1; i <= 100; i++)
	{
		a += b * 1.0 / i;
		b = -b;
	}
	printf("%lf", a);
	return 0;
}