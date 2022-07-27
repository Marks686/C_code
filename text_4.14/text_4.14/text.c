#define _CRT_SECURE_NO_WARNINGS
////    int b,c,d,a=0;
////    scanf("%d", &a);
////    b = a/10000;
////    c = (a%10000)/100;
////    d = (a%10000)%100;
////    
////    printf("year=%d\n", b);
////    printf("month=%02d\n", c);
////    printf("day=%02d\n", d);
////    return 0;
////}
#include <stdio.h>
int main()
{
	int a;
	float b, c, d;
	scanf("%d;%f,%f,%f", &a, &b, &c, &d);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//    int num;
//    float x, y, z;
//    scanf("%d;%f,%f,%f", &num, &x, &y, &z);
//    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.", num, x, y, z);
//
//    return 0;
//}
//int main()
//{
//	int a = printf("Hello world!");
//	printf("/n",a);
//	printf("%d", a);
//	return 0;
//}