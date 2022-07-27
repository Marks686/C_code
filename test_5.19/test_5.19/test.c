#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{

    long a, n, i, sum = 0;
    scanf("%ld %ld", &a, &n);

    for (i = 1; i <= n; i++)
    {
        sum += pow(a, i);
    }
    printf("sum = %ld", sum);
    return 0;
}