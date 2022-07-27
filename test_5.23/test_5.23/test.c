#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[10];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int arr2[10] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		arr2[n - i - 1] = arr[i];
//	}
//	int m = 0;
//	scanf("%d", &m);
//	printf("%d",arr2[m]);
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr1[10];
//    int arr2[10];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        arr2[n - i - 1] = arr1[i];
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr1[10];
//    int arr2[10];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        arr2[n - i - 1] = arr1[i];
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    int a[n];
//    for (i = n - 1; i >= 0; i--)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", a[i]);
//        if (i < n - 1)
//            printf(" ");
//    }
//    return 0;
//}
//int main()
//{
//	int n, x;
//	scanf("%d %d", &n,&x);
//	int i = 0;
//	int arr[5];
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//		if (x == arr[i])
//		{
//			printf("%d", i);
//			count++;
//		}
//	}
//	if (count == 0)
//		printf("Not Found");
//	return 0;
//}
int main()
{
	int n = 0;
	int count = 0;
	int arr1[20];
	int arr2[20];
	int i=0,j = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	
		if (arr1[i] % 2 == 0)
		{
			arr2[j++] = arr1[i];
			count++;
		}
	}
	if (count != 0)
	{
		for (i = 0; i < j; i++)
		{
			if (i != j - 1)
				printf("%d ", arr2[i]);
			else
				printf("%d", arr2[i]);
		}
	}
	else
		printf("None");
	return 0;
}
