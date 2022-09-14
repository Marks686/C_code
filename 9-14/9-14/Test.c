
#include<stdio.h>

enum Day//一种枚举类型
{
	//枚举常量
	Mon = 1,//0+1
	Tues,//1+1
	Wed,//2+1
	Thur,//3+1
	Fri,//4+1
	Sat,//5+1
	Sun//6+1
};//是个图纸，不会占用空间

//struct Stu
//{
//	int a;
//	char c;
//};
//#define Mon 1
//#define Tues 2

int main1()
{
	enum Day d = Fri;
	printf("%d\n", Mon);
	printf("%d\n", Tues);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Sat);
	printf("%d\n", Sun);

	return 0;
}

union Un
{
	int a;
	char c;
};

struct st
{
	int a;
	char c;
};

//共用
int main2()
{
	union Un u;
	u.a = 0x11223344;
	u.c = 0x00;
	//   printf("%d\n", sizeof(u));

	//printf("%p\n", &u);
	//printf("%p\n", &(u.a));
	//printf("%p\n", &(u.c));


	return 0;
}

//判断大小端
//1

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main3()
{
	int a = 1;//0x 00 00 00 01
	//小端-----01 00 00 00
	//大端-----00 00 00 01
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n ");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}

//union Un
//{
//	char arr[5];
//	int i;
//};
union Un
{
	short arr[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union Un));
	return 0;
}