#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>



//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间
//	return 0;
//}
int main1()
{
	int arr[10] = { 0 };
	//动态内存开辟
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p);
	p = NULL;

	return 0;
}
int main2()
{
	while (1)
	{
		malloc(1);
	}
	return 0;
}
//kai10gekongjian 
int main3()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;

	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	//释放
	free(p);
	p = NULL;
	return 0;
}



int main4()
{
	int arr[10] = { 0 };
	//动态内存开辟
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//扩容
	int* ptr = (int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}

	//使用
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;

	return 0;
}

int main5()
{
	realloc(NULL, 40);//等价于malloc(40);
	return 0;
}
//对动态开辟空间的越界访问
int main6()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//访问
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		p[i] = i;
	}
	free(p);
	p = NULL;
	return 0;
}

//对非动态开辟内存使用free释放

int main7()
{
	int a = 10;
	int* p = &a;

	free(p);
	p = NULL;
	return 0;
}

//使用free释放动态内存开辟的一部分

int main8()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		p++;
	}
	free(p);
	p = NULL;
	return 0;
}

//对同一块空间的多次释放

int main9()
{
	int* p = (int*)malloc(40);

	free(p);
	//一定要把p赋为空指针

	free(p);
	return 0;
}


//动态开辟内存忘记释放（内存泄漏）

void test()
{
	int* p = (int*)malloc(100);
	//......

	int flag = 0;
	scanf("%d", &flag);
	if (flag == 5)
	{
		return;
	}

	//如果flag == 5，free还没来及被执行
	free(p);
	p = NULL;
}
int* test2()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		return p;
	}
	//空间开辟成功

	//...........

	return p;
}
int main10()
{
	//test();
	int* ret = test2();
	//忘记释放了

	return 0;
}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}