#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double d(double x1, double y1, double x2, double y2)
{
    double d;
    d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return d;
}
double area(double L1, double L2, double L3)
{
    double p, area;
    p = 0.5 * (L1 + L2 + L3);
    area = sqrt(p * (p - L1) * (p - L2) * (p - L3));
    return area;
}
int main()
{
    double xA, yA, xB, yB, xC, yC, xD, yD;
    double AB, AD, BD, CD, BC;
    double area1, area2, sum = 0, Ssum;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &xA, &yA, &xB, &yB, &xC, &yC, &xD, &yD);
    AB = d(xA, yA, xB, yB);
    AD = d(xA, yA, xD, yD);
    BD = d(xB, yB, xD, yD);
    CD = d(xC, yC, xD, yD);
    BC = d(xB, yB, xC, yC);
    area1 = area(AB, AD, BD);
    area2 = area(BD, CD, BC);
    sum = area1 + area2;
    Ssum = sum * 0.0015;
    printf("%.2f", 120000 / Ssum);
    return 0;
}
