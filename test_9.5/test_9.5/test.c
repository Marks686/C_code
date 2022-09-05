#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>

void* my_memcpy(void* dest,void* src,size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
//memcpy函数是不用来处理重叠的内存之间的数据拷贝
//可以用memmove处理重叠的内存之间的数据拷贝  
test1()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr1, 24);
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
}
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
void* my_memmove(void* dest, void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
test2()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
	//int arr2[20] = { 0 };
	my_memmove(arr1+2, arr1, 20);
	//memcpy(arr1 + 2, arr1, 20);在vs编译器memcpy也可以完成重叠的任务

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}
int main1() 
{
	test2();
	return 0;
}
#include<math.h>
int main2()
{
	int sum = 0;
	int input = 0;
	scanf("%d", &input);
	int i = 0;
	while (input != 0)
	{
		int bit = input % 10;
		if (bit % 2 == 1)
		{
			sum += 1 * pow(10, i);
			i++;
		}
		else
		{
			sum += 0 * pow(10, i);
			i++;
		}
		input /= 10;
	}
	printf("%d\n", sum);
	return 0;
}
int main3()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i + j < n - 1)
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
// double price = 0.0;
int main4()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120)
							{
								printf("a=%d b=%d c= %d d=%d e=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
int main5()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("%c\n", killer);
		}
	}
	return 0;
}
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] == 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}