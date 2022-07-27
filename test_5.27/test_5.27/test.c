#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	//生成1-100000的数
//	for (i = 0; i <=100000; i++)
//	{
//		int n = 1;//n为位数，任何数的位数至少都是1，所以将1赋值给n
//
//		int temp = i;//i不断在变，较危险，所以把每次一次新生成的i放在temp中
//
//		int sum = 0;//用来统计各个位上的数的n次方和
//
//	//计算该数有几位
//		while (temp/10)//每次除10 若结果不为0，该数位数加1，若为0，则表示已经计算完该数的位数，恰好结束循环
//		{
//			n++;//统计该数的位数
//
//			temp /= 10;//每次该数都会减少一位，若此时temp = 0，则不进入循环，该数位数计算完毕 
//		}
//		temp = i;
//	//得到这个数的每一位，计算它的n次方之和
//		while (temp)
//		{
//			sum += pow(temp % 10, n);//pow（a,b）-->a的b次幂 若使用此函数需要引头文件#include<math.h>
//			temp /= 10;
//		}
//
//		//此时在判断该数i和各个位数的n次幂是否相等 相等则输出，不相等进行下一个数的判断
//		if (sum == i)//这里在判断sum和i是否相等，不可误用成赋值符号 例如 if（sum = i）err
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", );
//	return 0;
//}
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水(编程实现)
int main()
{

	return 0;
}