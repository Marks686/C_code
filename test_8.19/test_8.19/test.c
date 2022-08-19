#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int (*pf)(int,int) = Add;//pf是函数指针
//
//	int (*arr[4])(int, int) = {Add, Sub, Mul, Div};//arr就是函数指针的数组
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d \n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	//函数指针数组
//	int (*pfArr[])(int, int) = { 0,Add, Sub, Mul, Div };
//
//	//指向【函数指针数组】的指针
//	int (*(*ppfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for ( i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//假设数组是拍好序
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//qsort
//void qsort(void* base, //排序的数据的起始位置
//	       size_t num,//待排序的数据元素的个数
//	       size_t width,//待排序的数据元素的大小（单位是字节）
//	       int(* comp)(const void* e1, const void* e2)//函数指针 - 比较函数
//           );

//__cdecl - 函数调用约定

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - * (int*)e2);
	//if (*(int*)e1 > *(int*)e2)
	//{
	//	return 1;
	//}
	//else if(*(int*)e1 == *(int*)e2)
	//{
	//	return 0;
	//}
	//else
	//{
	//	return -1;
	//}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//把数组排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*bubble_sort(arr, sz);*/
	qsort(arr, sz, sizeof(arr[0]),cmp_int );
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;

}
//int main()
//{
//	int a = 10;
//	//char* pa = &a;//int*
//	void* pv = &a;//void* 是无具体类型的指针，可以接受任意类型的地址
//	//void* 是无具体类型的指针，所以不能解引用，也不能+-整数
//	return 0;
//}