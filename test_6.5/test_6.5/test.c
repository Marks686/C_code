#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c, d, e, f,x,y;
//	c = a / 100;
//	d = a % 100;
//	e = b / 100;
//	f = b % 100;
//	x = e - c;
//	y = f - d;
//	if (y < 0)
//	{
//		y += 60;
//		x -= 1;
//	}
//	printf("%02d:%02d", x, y);
//	return 0;
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int i = 0;
//	int sum = 0;
//	int temp = 0;
//	for (i = 0; i < y; i++)
//	{
//		temp = temp * 10 + x;
//		sum += temp;
//	}
//	printf("S = %d", sum);
//	return 0;
//}
//int main()
//{
	//int a, b;
	//int i, sum = 0;
	//int count = 0;
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//{
	//	int t = b;
	//	b = a;
	//	a = t;
	//}
	//for (i = a; i <= b; i++)
	//{
	//	printf("%d  ", i);
	//	i++;
	//	count++;
	//	if (count == 5)
	//	{
	//		printf("\n");
	//	}
	//}
	//printf("\n");
	//for (i = a; i <= b; i++)
	//{
	//	 sum += a;
	//	a++;
	//}

	//printf("Sun = %d", sum);
#include<stdio.h>
	int main()
	{
		int n = 0;
		scanf("%d", &n);
		int i = 0;
		int arr1[10];
		int arr2[10];
		for (i = 0; i < n; i++)
		{
			scanf("%d", &arr1[i]);
		}
		for (i = 0; i < n; i++)
		{
			arr2[n - i - 1] = arr1[i];
		}
		for (i=0; i < n; i++)
		{
			printf("%d ", arr2[i]);
		}
	return 0;
    }