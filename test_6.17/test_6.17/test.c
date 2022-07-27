#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	test();
//
//	int* p = test();
//
//	return 0;
//}
int main()
{
	/*int a = 0;
	int* p = &a;
	*p = 20; */
	//明确的给指针进行初始化，但是有时候会出现一种情况，暂时不知道给指针初始化什么值，那么此时我们给它初始化成空指针，
	//int* p2 = NULL;//NULL就是0
	//*p2 = 100;



	int* p3 = NULL;
	if (p3 != NULL)
	{
		*p3 = 100;
	}
	  return 0;
}