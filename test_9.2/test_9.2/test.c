#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//1.
	//if (*str1 > *str2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}
	//2.
	return (*str1 - *str2);
}
int main()
{
	char arr1[] = "abcq";
	char arr2[] = "abcq";
	int ret = my_strcmp(arr1, arr2);
	if (ret < 0)
	{
		printf("<");
	}
	else if (ret == 0)
	{
		printf("==");
	}
	else
	{
		printf(">");
	}
	return 0;
}