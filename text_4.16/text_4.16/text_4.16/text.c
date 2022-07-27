#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 1000;
//	while (a <= 3000)
//	{
//		if (a % 100 == 0)//Õû°ÙÄê
//		{
//			if ((a % 100) % 4 == 0)
//				printf("%d ", a);
//		}
//		if (a % 100 != 0)
//		{
//			if ((a % 100) % 4 == 0)
//				printf("%d ", a);
//		}
//		a++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i < 200;i++)
//	{
//		for (j = 2; j < 200;j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i==j)
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[4] = {0};
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];	
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 1;
//	int a = 1;
//	int d = 0;
//	
//	for (n = 1; n <= 10; n++)
//	{
//		a = 1;
//		for (i = 1; i <= n; i++)
//		{
//			a = a * i;
//		} 
//		d = a + d;
//	}
//	printf("%d\n", d);
//	return 0;
//}