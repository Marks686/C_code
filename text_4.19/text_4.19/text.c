#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	
//	printf("请输入十个数：");
//	for (i = 0; i <10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	
//	{		
//		if (arr[i] > max)
//		{	
//			max = arr[i];
//		}
//	}
//	printf("最大的数是%d", max);
//	return 0;
//}
void swap(int* px, int* py)
{
	int c = 0;
	c = *px;
	*px = *py;
	*py = c;
}
int main()
{
	int a = 1;
	int b = 2;
	swap(&a, &b);
	printf(" %d %d\n", a, b);
	return 0;
}
