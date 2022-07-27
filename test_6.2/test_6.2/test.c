#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    char a[80];
    int i = 0;
    int n = 0;
    int f;
    gets(a);
    int sum = strlen(a);
    n = sum - 1;
    if (n % 2 == 0)
    {
        for (i = 0; i < n / 2; i++)
        {
            if (a[i] == a[n - i ])
            {
                f = 1;
            }
        }
    }
    else
    {
        for (i = 0; i < (n - 1) / 2; i++)
        {
            if (a[i] == a[n - i ])
            {
                f = 1;
            }
        }
    }
    if (f)
    {
        printf("yes");
    }
    else
        printf("no");
    return 0;
}