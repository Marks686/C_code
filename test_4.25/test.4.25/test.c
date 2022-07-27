#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k > 0)
//	{
//		return n * pow(n, (k - 1));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	pow(n, k);
//	printf("%d", pow(n, k));
//	return 0;
//}
//int temp(int x)
//{
//	int sum = 0;
//	int a = 0;
//	if (x != 0)
//	{
//			a = x % 10;	
//			x = x / 10;
//			sum = a + temp(x);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数：");
//	scanf_s("%d", &n);
//	int ret = temp(n);
//	printf("这个整数的各个位上的数之和为%d", ret);
//	return 0;
//}
//int temp(int n)
//{
//	int s = 0;
//	while (n != 0)
//	{
//		s *= 10;
//		s += n % 10;
//		n /= 10;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = temp(n);
//	printf("%d",ret);
//	return 0;
//}
#include<stdio.h>
int main()
{
    int i, j, sum, n;
    double a = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = i;
        for (j = i + 1; j <= 2 * i - 1; j++)
        {
            sum += j;
        }
        a += 1.0 / sum;
    }
    printf("sum = %.6f", a);
    return 0;
}
