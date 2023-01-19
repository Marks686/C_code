#include<stdio.h>

//声明来自外部的函数
extern int Add(int x,int y);
int main()
{
    int a = 1;
    int b = 1;
    int sum = Add(a,b);
    printf("%d\n",sum);
    return 0;
}