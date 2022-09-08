#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main1()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10];
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;
				goto end;
			}
		}
	}
end:
	if (flag == 0)
	{
		printf("no\n");
	}
	else
	{
		printf("yes\n");
	}
	return 0;
}
int main()
{
	int n = 0;
	int arr[50] = { 0 };
	int i = 0;
	int flag1 = 0;
	int flag2 = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else
			{
				flag2 = 1;
			}
		}
	}
	if (flag1 + flag2 == 1)
	{
		printf("sorted\n");
	}
	else
	{
		printf("unsorted\n");
	}
	return 0;
}
char* my_strcat(char* dest,char* src)
{
	char* ret = dest;
	assert(dest && src);
	while(*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
char* my_strcpy(char* str2, const char* str1)
{
	assert(str2 && str1);
	char* ret = str2;
	while (*str2++ = *str1++)
	{
		;
	}
	return ret;
}
size_t my_strlen(const char* str)
{
	size_t count = 0;
	assert(str);
	while(*str != 0)
	{
		count++;
		str++;
	}
	return count;
}
char* strstr(const char* str1, const char* str2)
{
	char* cp = (char*)str1;
	char* s1, * s2;
	if (!*str2)
		return((char*)str1);
	while (*cp)
	{
		s1 = cp;
		s2 = (char*)str2;
		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;
		if (!*s2)
			return(cp);
		cp++;
	}
	return(NULL);