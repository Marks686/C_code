#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//    int n, sum = 0, m;
//    int arr[9];
//    int i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        m = n % 10;
//        n /= 10;
//        if (m % 2 == 0)
//            arr[i] = 0;
//        else
//            arr[i] = 1;
//        sum += arr[i] * pow(10, i);
//        i++;
//    }
//    printf("%d", sum);
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= (n-i); j++)
//			{
//				printf("  ");
//			}
//			for (j = 1; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (~scanf("%d", &n))
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= (n - i); j++)
//            {
//                printf("  ");
//            }
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int n = 0;
//	scanf("%lf %d %d %d", &price, &m, &d, &n);
//	if (m == 11 && d == 11)
//	{
//		if (n == 1)
//			price = (price * 0.7) - 50;
//		else
//			price = price * 0.7;
//	}
//
//	else if (m == 12 && d == 12)
//	{
//		if (n == 1)
//			price = (price * 0.8) - 50;
//		else
//			price = price * 0.8;
//	}
//	else
//		price = price;
//	if (price<0.0)
//		price = 0;
//	printf("%lf", price);
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}
//
//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一；
//
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0, e = 0;
//    for (a = 1; a <= 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
//                        {
//                            if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
//                            {
//                                if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
//                                {
//                                    if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
//                                    {
//                                        if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
//                                        {
//                                            if (120 == a * b * c * d * e)
//                                            {
//                                                printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
//
//                                            }
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 0; a <= 5; a++)
//	{
//		for (b = 0; b <= 5; b++)
//		{
//			for (c = 0; c <= 5; c++)
//			{
//				for (d = 0; d <= 5; d++)
//				{
//					for (e = 0; e <= 5; e++)
//					{
//						if ((2 == b && a != 3) || (2 != b && 3 == a))
//						{
//							if ((2 == b && e != 4) || (2 != b && e == 4))
//							{
//								if ((c == 1 && d != 2) || (c != 1 && d == 2))
//								{
//									if ((c == 5 && d != 3) || (c != 5 && d == 3))
//									{
//										if ((e == 4 && a != 1) || (e != 4 && a == 1))
//										{
//											if (120 == a * b * c * d * e)
//											{
//												printf("a=%d b= %d c=%d d=%d e=%d", a, b, c, d, e);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char killer;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//		{
//			printf("%c是凶手\n", killer);
//			break;
//		}
//	}
//	return 0;
//}
