#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a = 0;
    int n = 0;
    scanf("%d %d", &a, &n);
    int i = 0;
    int sum = 0;
    int k = 0;
    for (i = 1; i < n; i++)
    {
        k = k * 10 + 2;
        sum += k;
    }
    printf("%d\n", sum);
    return 0;
}
int main()
{
    int i, a, b, sum = 0, x = 0;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        printf("%5d", i);
        x++;
        if (x % 5 == 0 && b != i)
        {
            printf("\n");
        }
        sum = sum + i;
    }
    printf("\n");
    printf("Sum = %d", sum);
    return 0;

}
#include<stdio.h>
int main()
{
    int a, b, sum = 0, x = 0;
    scanf("%d %d", &a, &b);
    int i = 0;
    for (i = a; i <= b; i++)
    {
        printf("%5d", i);
        x++;
        if (x % 5 == 0 && b != i)
        {
            printf("\n");
        }
        sum = sum + i;
    }
    printf("\n");
    printf("Sum = %d", sum);
    return 0;
}
int main()
{
    int a, n;
    scanf("%d", &a);
    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    int i = 0;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += a;
        a++;
    }
    printf("%d", sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, n;
    scanf("%d", &a);
    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    int i = 0;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += a;
        a++;
    }
    printf("%d", sum);
    return 0;
}
double change(int x)
{
    int z = 1;
    int y = 1;
    while (z <= x)
    {
        y *= z;
        z++;
    }
    return y;
}
int main()
{
    int i, k;
    scanf("%d", &k);
    double sum = 0, e = 0, a, b;
    for (i = 1; i <= k; i++)
    {
        a = change(i);
        b = 1 / a;
        e += b;
    }
    sum = 1 + e;
    printf("%.10f", sum);
    return 0;
}
#incldue<stdio.h>
double change(int x)
{
    int y = 1;
    int z = 1;
    while (z <= x)
    {
        y *= z;
        z++;
    }
    return y;
}
int main()
{
    int i, k;
    scanf("%d", &k);
    double sum, e = 0, a, b;
    for (i = 1; i <= k; i++)
    {
        a = change(i);
        b = 1 / a;
        e += b;
    }
    sum = 1 + e;
    printf("%.10f", sum);
    return 0;
}
void Swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    Swap(&x, &y);
    printf("%d %d", x, y);
    return 0;
}
int main()
{
    double a, b, c1, c2, c3;
    scanf("%lf %lf %lf %lf", &a, &b, &c1, &c2, &c3);
    double x, h, pi = 3.1415926;
    x = (c1 + c2 / 60 + c3 / 3600) * pi / 180;
    h = b + a * tan(x);
    printf("%.2f", h);
    return 0;
}

int main()
{
    double a, b, c1, c2, c3;
    scanf("%lf%lf%lf%lf", &a, &b, &c1, &c2, &c3);
    double h, pi = 3.1415926;
    c1 = (c1 + c2 / 60 + c3 / 3600) * pi / 180;
    h = b + a * tan(c1);
    printf("%.2f\n", h);
    return 0;
}
int main()
{
    double a, b, c1, c2, c3;
    scanf("%lf%lf%lf%lf", &a, &b, &c1, &c2, &c3);
    double h, pi = 3.1415926;
    c1 = (c1 + c2 / 60 + c3 / 3600) * pi / 180;
    h = b + a * tan(c1);
    printf("%.2f\n", h);
    return 0;
}
int main()
{
    double a = 0.0;
    int n = 0;
    scanf("%d %d", &a, &n);
    int i = 0;
    int S = 0;
    int k = 0;
    for (i = 1; i <= n; i++)
    {
        k = k * 10 + 2;
        S += k;
    }
    printf("S = %d\n", S);
    return 0;
}
int Is_num(int i)
{
    int j, y = 0;
    j = i;
    while (i > 0)
    {
        y = y * 10 + i % 10;
        i /= 10;
    }
    if (y == j)
        return 1;
    else
        return 0;
}
int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    int arr[100];
    int x = 0;
    for (i = a; i < b; i++)
    {
        if (Is_num(i))
        {
            arr[x] = i;
            x++;
        }
    }
    for (i = 0; i < x; i++)
    {
        if (i < x - 1)
        {
            printf("%d,", arr[i]);
        }
        else
            printf("%d", arr[i]);
    }
    return 0;
}
int Is_num(int i)
{
    int j = i;
    int ret = 0;
    while (i > 0)
    {
        ret = ret * 10 + i % 10;
        i /= 10;
    }
    if (ret == j)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    int arr[100];
    int count = 0;
    for (i = a; i < b; i++)
    {
        if (Is_num(i))
        {
            arr[count] = i;
            count++;
        }
    }
    for (i = 0; i < count; i++)
    {
        if (i < count - 1)
        {
            printf("%d,", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    return 0;
}
int Exchange(int a)
{
    int s = 0;
    while (a > 0)
    {
        s *= 10;
        s += n % 10;
        n / 10;
    }
    return s;
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    int x = Exchange(a);
    printf("%d", x);
    return 0;
}
include<stdio.h>
int Exchange(int a)
{
    int s = 0;
    while (a != 0)
    {
        s *= 10;
        s += a % 10;
        a / 10;
    }
    return s;
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    int x = Exchange(a);
    printf("%d", x);
    return 0;
}

int Exchange(int n)
{
    int s = 0;
    while (n != 0)
    {
        s *= 10;
        s += n % 10;
        n = n / 10;
    }
    return s;
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    int x = Exchange(a);
    printf("%d", x);
    return 0;
}
include<stdio.h>
int Exchange(int n)
{
    int s = 0;
    while (n != 0)
    {
        s *= 10;
        s += n % 10;
        n = n / 10;
    }
    return s;
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    int x = Exchange(a);
    printf("%d", x);
    return 0;
}