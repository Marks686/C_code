#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    int money = 0;
    int  year = 0;
    double rate = 0;
    double interest = 0;
    scanf("%d %d %lf", &money, &year, &rate);
    interest = money * pow((1.0 + rate), year) - money;
    printf("interest = %.2lf", interest);
    return 0;
}
#include<stdio.h>
int main()
{
    double a, b;
    double t = 0;
    scanf("%lf %lf", &a, &b);
    if ((a == 0 && b == 0) || (a < 1.0E-7 && b < 1.0E-7))
        printf("Infinitely solutions");
    else if (a == 0)
        printf("no solution");
    else if (a < 1.0E-7)
        printf("no solution");
    else
    {
        t = -(b / a);
        if (t < 1.0E-7)
            printf("0");
        else printf("%.3f", t);
    }
}