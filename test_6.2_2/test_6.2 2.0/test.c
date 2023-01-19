#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	return 0;
//}
//int GCD(int a, int b)
//{
//	int t, r;
//	if (x < y)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//	r = x % y;
//	while (r != 0)
//	{
//		x = y;
//		y = r;
//		r = x % y;
//	}
//	return y;
//}
int IsPrime(int number)
{
	int i;
	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
			return 0;
	}
	return number;
}