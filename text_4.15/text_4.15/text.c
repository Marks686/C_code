#define _CRT_SECURE_NO_WARNINGS
//{
//	int a, b, c;
//	a = 0;
//	b = 0;
//	c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && b > c)
//		printf("%d %d %d", a, b, c);
//	if (a > c && c > b)
//		printf("%d %d %d", a, c, b);
//	if (b > a && a > c);
//	    printf("%d %d %d", b, a, c);
//	if (b > c && c > a);
//	    printf("%d %d %d", b, c, a);
//	if (c > a && a > b)
//		printf("%d %d %d", c, a, b);
//	if (c > b && b > a)
//		printf("%d %d %d", c, b, a);
//
//	return 0;
//}
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("是奇数 ：%d ", a);
//	else
//		printf("是偶数");
//	return 0;
//}
//
//{
//	/*int i = 1;
//	while (i % 2 == 1 , i < 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}*/
//	int a, b, c, x;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	if (a < c)
//	{
//		x = a;
//		a = c;
//		c = x;
//	}
//	if (b < c)
//	{
//		x = b;
//		b = c;
//		c = x;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

	/*int a = 1;
	for (a = 1; a < 100; a++)
	{
		if ( a % 3 == 0)
		{
			printf("%d ", a);
			
		}
		
	}
	return 0;*/
#include <stdio.h>
int main()
    {
        int a, b, temp,r,orgin_a,orgin_b; 
        printf("请输入两位数：\n");
        scanf("%d %d", &a, &b); 
		orgin_a = a;
		orgin_b = b;
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		r = a % b;
		while (r != 0)
		{
			a = b;
			b = r;
			r = a % b;
		}
		printf("%d和%d的最大公约数是%d", orgin_a, orgin_b, b);
        return 0;
    }

