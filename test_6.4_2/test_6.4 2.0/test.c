#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i, j;
    for (i = 1; i <= 10000; i++)
    {
        for (j = 1; j <= 10000; j++)
        {
            if (i * i + j * j == n && i <= j)
            {
                printf("%d %d\n", i, j);
            }
        }
    }
    if (i == 10000 && j == 10000)
        printf("No Solution");
    return 0;
}