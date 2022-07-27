#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//void swap(int x, int y)
//{
//	int  t;
//	t = x; x = y; y = t;
//	return;
//}
//int main(void)
//{
//	int a = 3, b = 2;
//	swap(a, b);
//	printf("%d#%d#", a, b);
//	return 0;
//}
//#include <stdio.h>
//int sum(int n)
//{
//    if (n == 0)
//        return 0;
//    else
//        return n + sum(n - 1);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", sum(n));
//    return 0;
//}
//#include <stdio.h>
//
//double P(int n, double x);
//
//int main()
//{
//    int n;
//    double x;
//
//    scanf("%d %lf", &n, &x);
//    printf("%.2f\n", P(n, x));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//double P(int n, double x)
//{
//    double y = 0;
//    if (n == 0)
//    {
//        return 1;
//
//    }
//    else if (n == 1)
//    {
//        return x;
//
//    }
//    else
//    {
//        y = ((2n - 1) * P(n - 1, x) - (n - 1) * P(n - 2, x)) / n;
//        return y;
//    }
//
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j || j = n - i - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
////}
//#include<stdio.h>
//
////
//
//int main() 
//{
//	int m, n, k;
//	while (scanf("%d%d%d", &m, &n, &k) != EOF) 
//	{
//		if (m + n > k && m + k > n && n + k > m) 
//		{
//			if (m == n && n == k && m == k)
//				printf("Equilateral triangle!\n");
//			else if (m == n || m == k || n == k)
//				printf("Isosceles triangle!\n");
//			else  printf("Ordinary triangle!\n");
//		}
//		else 
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    //int arr[] = { 1,2,3,4,5 };
//    //short* p = (short*)arr;
//    //int i = 0;
//    //for (i = 0; i < 4; i++)
//    //{
//    //    *(p + i) = 0;
//    //}
//
//    //for (i = 0; i < 5; i++)
//    //{
//    //    printf("%d ", arr[i]);
//    //}
//    unsigned long pulArray[] = { 6,7,8,9,10 };
//    unsigned long* pulPtr;
//    pulPtr = pulArray;
//    *(pulPtr + 3) += 3;
//    printf("% d, % d\n" , *pulPtr, *(pulPtr + 3));
//    return 0;
//}
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[100001] = {0};
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
////	return 0;
////}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d",&a, &n);
//	int i = 0;
//	int k = 0;
//	int s = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		s += k;
//	}
//	printf("%d\n", s);
//	return 0;
//
//}