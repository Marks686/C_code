#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//实现一个函数，可以旋转字符串中的k个字符
void left_rotate1(char arr[],int k)
{
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		//1
		char tmp = arr[0];
		//2
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		//3
		arr[len - 1] = tmp;
	}
}
void left_rotate2(char arr[], int k)
{
	int len = strlen(arr);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j < len -1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}
#include<assert.h>
void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_rotate(char arr[], int k)
{
	int len = strlen(arr);
	k %= len;
	reverse(arr,arr+k-1);//左
	reverse(arr+k,arr+len-1);//右
	reverse(arr,arr+len-1);//整

}
int main1()
{
	char arr[] = "abcdef";//cdefab
	int k = 0;
	scanf("%d", &k);
	left_rotate(arr,k);
	printf("%s\n", arr);
	return 0;
}
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，
//矩阵从上到下是递增的，请编写程序在这样的矩
//阵中查找某个数字是否存在。
//1 2 3
//4 5 6
//7 8 9

struct Point
{
	int x;
	int y;

};
struct Point find_num1(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;
	struct Point p = { -1,-1 };
	while (x <= r-1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			p.x = x;
			p.y = y;
			return p;
		}
    }
	return p;
}
int find_num2(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;
	while (x <= r - 1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main2()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	struct Point ret = find_num1(arr, 3, 3, k);
	printf("%d %d\n", ret.x,ret.y);
	return 0;
}
int is_left_move(char arr1[], char arr2[])
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		char tmp = arr1[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr1[j] = arr1[j + 1];

		}
		arr1[len - 1] = tmp;
		if (strcmp(arr2, arr1) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("ok\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;

}