#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)			
//
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//
//}
#include<stdio.h>
//int main()
//{
//    int A, B;
//    scanf("%d%d", &A, &B);
//    int sum = 0;
//
//    while (A <= B)
//    {
//        sum += A;
//        A++;
//    }
//    printf("%d", sum);
//    return 0;
//
//}
//int main()
//{
//    double A = 0;
//    int N = 0;
//    scanf("%lf %d", &A, &N);
//    int i = 1;
//    int s = 0;
//    for (i = 1; i <= N; i *= 10)
//    {
//     
//    }
//    return 0;
//}
#include<math.h>
int main()
{
    int sum = 0;
    int i = 0;
    int a, n;
    scanf("%d %d", &a, &n);
    int sum = a;
    for (i = n; i > 1; i--)
    {
        sum = sum + pow(a, n);
    }
    printf("sum = %d", sum);
    return 0;
}