#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int key = 7;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//		if (left <= right)
//			printf("找到了,下标是%d\n",mid);
//		else
//			printf("找不到\n");
//	
//	return 0;
//}
//void xxx(int row)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d   ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int row = 0;
//	printf("请输入数字");
//	scanf("%d", &row);
//	xxx(row);
//		return 0;
//}
//void prime_number(int a)
//{
//
//}
//int  main()
//{
//	int j = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= 200; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (0 == n % i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= 200; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//			count++;          
//		}
//	}
//	printf("100~200之间有%d个素数\n", count);
//	return 0;
//}
is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;

	for (i = 101; i <= 200; i+=2)	
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}