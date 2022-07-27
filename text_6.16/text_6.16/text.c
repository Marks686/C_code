#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;//a是整形变量占用四个内存空间
//	int* pa = &a;
//	//pa是一个指针变量，用来存放地址
//	return 0;
//}
//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	//sizeof返回的值的类型是无符号整型 unsigned int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}
//指针类型的意义
//16进制 0 1 2 3 4 5 6 7 8 9 a b c d e f
//int main()
//{
//	int a = 0x11223344;
//	//换成二进制0001000100100010
//	int* pa = &a;
//	*pa = 0;
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//
//	char* pc = (char*)&a;//int *
//	*pc = 0;
// 	return 0;
//
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);
//
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc+1);
//
//	return 0;
//}
int main()
{
	int a = 0;
	float* pf = &a;
	*pf = 100.0;

	return 0;
}