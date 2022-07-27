#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//void reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr)-1;
//	while (left < right) 
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	*(arr + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcde";
//	reverse_string(arr);
//	printf("%s ", arr);
//	return 0;
//}

//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (x <= 2)
//		return 1;
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
int Fib(int x)
{
	if (x <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(x - 1) + Fib(x - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d", ret);
	return 0;
}