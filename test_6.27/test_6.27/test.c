#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//arr1�൱��1�ĵ�ַ,arr2�൱��2�ĵ�ַ,arr3�൱��3�ĵ�ַ
//arr1 arr2 arr3�������͵ĵ�ַ������parr�������Ӧ����int*���͵� 
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