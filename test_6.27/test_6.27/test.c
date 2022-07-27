#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//arr1相当于1的地址,arr2相当于2的地址,arr3相当于3的地址
//arr1 arr2 arr3都是整型的地址，所以parr这个数组应该是int*类型的 
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[3] = { arr1,arr2,arr3 };

	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}
