#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 7,8,9,10,11,12 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	int temp[6] = { 0 };
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		temp[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp[i];
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//void init(int arr[], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//int main()
//{
//	int set = 0;
//	int arr[] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz,set);
//	return 0;
//}
//void Init(int arr[], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
