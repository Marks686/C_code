#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main ()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//int factorial(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * factorial(x - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	factorial(n);
//	int len = factorial(n);
//	printf("%d", len);
//	return 0;
//}
//int Factor(int x)
//{
//	int i = 0;
//	int sum = 1;
//	if (x == 0)
//	{
//		return 1;
//	}
//	for (i = 1; i <= x; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//    Factor(n);
//	printf("%d", Factor(n));
//	return 0;
//}
//int strlen(char*str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + strlen(str + 1);
//}
//int main()
//{
//	char*p = "abcdefgh";
//	int len = strlen(p);
//	printf("%d ", len);
//	return 0;
//}
int count = 0;

int strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		
		str++;
		count++;
	}
	return count;
}
int main()
{
	char* p = "abcdefgh";
	int len = strlen(p);
	printf("%d ", len);
	return 0;
}