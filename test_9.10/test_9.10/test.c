#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;  
};
int main1()
{
	printf("%d ", sizeof(struct A));//8
	return 0;
}
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4 ;
};
int main()
{
	struct S s = { 0 };
	printf("%d ", sizeof(struct S));//3

	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	return 0;
}