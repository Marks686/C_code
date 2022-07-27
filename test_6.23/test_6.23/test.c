#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//*说明pc是指针 char告诉我们pc指向的对象ch它的类型是char类型
//	//这就是char*定义的一个pc指针变量
//	*pc = 'b';//pc找到ch并改变它
//
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//    const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1 != p2");
//	if (arr1 == arr2)
//		printf("arr1 == arr2");
//	else
//		printf("arr1 != arr2");
//
//	return 0;
//}
//文章目录
//一、字符指针
//在初阶指针里我们已经我们已经学习了指针，在初阶指针的基础上我们再深入挖掘一些指针的知识，有字符指针、数组指针、指针数组、数组传参和指针传参、函数指针、函数指针数组、指向函数指针数组的指针、回调函数、指针和数组面试试题的解析。
//
//指针的概念：
//
//1.指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
//2.指针的大小是固定的4 / 8个字节（32位平台 / 64位平台）
//3.指针是有类型，指针的类型决定了指针的±整数的步长，指针解引用操作的时候的权限。
//4.指针的运算…
//我们继续探讨指针的高级主题。
//
//一、字符指针
//字符指针：char *
//
//在c语言中有两种常见的书写形式：
//第一种：
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	//*说明pc是指针 char告诉我们pc指向的对象ch它的类型是char类型
//	//这就是char*定义的一个pc指针变量
//	*pc = 'b';//pc找到ch并改变它
//
//	printf("%c\n", ch);
//	return 0;
//}
//字符指针可以存放一个字符的地址
//第二种：
//
//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);
//	return 0;
//}
//在这里插入图片描述
//我们发现打印的结果是abcdef是一个字符串，那么这个地方p里面放的是不是就是字符串？
//答案：不是。
//在这里插入图片描述
//
//int a = 10；
//int b = a + 2；
//a+2的值赋给b，a+2是表达式 表达式的赋值给b
//表达式有值属性和类型属性，
//a+2的值属性就是12，
//因为a是int类型，2也是int类型，所以a+2的类型属性是int。
/*当我们看到abcdef字符串作为表达式一部分，把字符串abcdef赋给p的时候，把“abcdef”当成一个表达式，这个表达式赋给p的是首字符a的地址。非要把abcdef放到p里面去是放不下的，abcdef已经6个字符了，再加上后面还隐藏的\0，如果放到p里面去，p有可能是
4个字节，1个字符需要1个字节的空间，4个字节是放不了7个字符的，所以绝对不可能是把abcdef放到p里面去，这种写法是把字符串首字符a 的地址赋值给p，因为p里面放的是a的地址，打印字符串的时候给个 % s打印字符串，只需要告诉从哪开始就可以了，p里放的是a的地址，它就知道从a后面往后打印，直到遇到\0。

int main()
{
	char* p = "abcdef";
	*p = 'w';
	printf("%s\n", p);
	return 0;
}
如果这个代码在编译器上报警告，其实是把a的地址放到p里是不安全的，abcdef是个常量字符串，意思就是它不能被改，我把起始地址放到p里去，这个p权限就变大了，p没有被修饰，也就是p敢去改abcdef的内容，如果非要强行改，程序就会崩溃，所以报警告其实是很正常的

在这里插入图片描述

我们可以在加个const，就是限制了p不能改，之后p = ‘w’这种写法编译器直接判断错误, 这样就有效的保护字符串。

int main()
{
	const char* p = "abcdef";
	*p = 'w';
	printf("%s\n", p);
	return 0;
}
在这里插入图片描述

一道笔试题：

int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
		printf("p1==p2\n");
	else
		printf("p1 != p2");
	if (arr1 == arr2)
		printf("arr1 == arr2");
	else
		printf("arr1 != arr2");

	return 0;
}
结果是：

p1 == p2
arr1 != arr2
p1和p2指向同一个字符串，这个字符串是常量字符串，放在内存中的只读区里，只读区的空间只能读不能写，只能用不能改，既然abcdef是常量字符串的话不能被改，那abcdef这样的常量字符串有没有必要存在多份，其实存一份就够了，假设a的起始地址是0x0012ff40，那么p1里存的就是这个值，p2也是这个值，所以p1 == p2，因为它俩里面放的值是相等的，再往下，发现arr1 和 arr2不相等，因为在那里，我们创建的两个独立数组，用abcdef初始化arr1[]数组，arr1[]要放下abcdef\0，就要在内存中开辟一段空间，arr2[]也一样，两块空间的起始地址不*/一样，arr1和arr2都是起始地址，它俩在内存中的地址绝对是不相等的。