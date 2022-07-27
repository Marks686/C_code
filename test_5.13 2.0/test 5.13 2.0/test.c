#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) == 1)
//    {
//        if (ch >= 'a' && ch <= 'z')
//            printf("%d", ch - 32);
//        else
//            printf("%d", ch + 32);
//    }
//    return 0;
//}
int tule(int n)
{	
	if (n == 1)
		return 1;
	else
		return  n + tule(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	tule(n);
	printf("%d", tule(n));
	
	return 0;
}