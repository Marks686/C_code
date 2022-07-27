#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 7 % 2;
//	printf("%d", a);
//	return 0;
//}
//移位操作符，移动的是二进制位
int main()
{
	int a = 7;
	int b = a << 1;
	printf("a = %d\n", a);
	printf("b = %d", b);
	return 0;
}

