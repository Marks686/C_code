//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////#include <stdio.h>
////void test(int arr[])//ok?
////{}
////void test(int arr[10])//ok?
////{}
////void test(int* arr)//ok?
////{}
////void test2(int* arr[20])//ok?
////{}
////void test2(int** arr)//ok?
////{}
////int main()
////{
////	int arr[10] = { 0 };
////	int* arr2[20] = { 0 };
////	test(arr);
////	test2(arr2);
////}
////#include <stdio.h>
////void print(int* p, int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d\n", *(p + i));
////	}
////}
////int main()
////{
////	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
////	int* p = arr;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	//一级指针p，传给函数
////	print(p, sz);
////	return 0;
////}
////int arr[5] = { 0 };
//////&数组名 - 取出数组的地址
////int(*p)[5] = &arr;//数组指针
////
//// 	//int a = 10;
// //   int * pa = &a;
//	//*pa = 20;
//	// printf("%d ", *pa);
////
//////&函数名 - 取出的就是函数的地址呢？
/////*printf("%p ", &Add);*/
////int(*pf)(int, int) = &Add;
////int ret = (*pf)(2, 3);
////printf("%d\n", ret);
//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int (*pf)(int,int))
//{
//	int a = 1;
//	int b = 4;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}
//
//@[TOC](文章目录)
//
//-- -
//
//
//# 一、数组传参、指针传参
//写代码的时候，难免会把【数组】或者【指针】传给函数，那函数的参数该如何设计呢？
//## 1.一维数组传参
//> **一维数组传参 * *
//
//![在这里插入图片描述](https://img-blog.csdnimg.cn/33da62c8283f4bcd98a76ab9d20a9f92.png)
//## 2.二维数组传参
//> **二维数组传参 * *
//
//![在这里插入图片描述](https://img-blog.csdnimg.cn/5b18c3bb6ddc400aa6fe9077b7e21f5d.png)
//
//## 3.一级指针传参
//> **一级指针传参 * *
//
//
//![在这里插入图片描述](https://img-blog.csdnimg.cn/e78d1b3292b2446786f6c05c6b67d4ce.png)
//## 4.二级指针传参
//
//> 二级指针传参
//
//
//![在这里插入图片描述](https://img-blog.csdnimg.cn/488492e8469b48a0a83b9bfbf1bb652b.png)
//
//# 二、函数指针
//
//一般是函数指针和数组指针类比
//
//
//** 数组指针—指向数组的指针就是数组指针
//函数指针—指向函数的指针就是函数指针**
//
//```c
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//&函数名 - 取出的是不是函数的地址呢？
//	printf("%p ", &Add);
//	//如果把&Add 换成Add 拿出的结果是一样的
//	return 0;
//}
//
//```
//
//> ** 打印出的是函数的地址**
//
//
//```c
//003410B4
//```
//取地址函数名确实拿到的是 * *函数的地址 * *
//对函数来说， & 函数名和函数名都是函数的地址
//
//> **如何存函数的地址？有什么应用？ * *
//
//
//```c
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = &Add;
//	int ret = (*pf)(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}
//```
//> ** 打印结果**
//
//```c
//5
//```
//这里其实就做到了间接的（通过地址来调用函数）通过函数指着访问函数。
//
//> **简单的应用： * *
//
//```c
//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int (*pf)(int, int))
//{
//	int a = 1;
//	int b = 4;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}
//```
//
//> ** 输出结果**
//
//```c
//5
//```
//有了函数指针的这样一个东西，我们就可以把函数地址进行传参，传给另外一个函数，这个函数想调用那个函数的时候，就可以通过函数指针调用。
//
