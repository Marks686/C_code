#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct stu
//{
//	char name[11];
//	int birth;
//	char number[18];
//};
//int main()
//{
//	int n, j;
//	int i = 0;
//	scanf("%d", &n);
//	struct stu p[n], t;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d %s", &p[i].name, &p[i].birth, &p[i].number);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int min = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (p[min].birth > p[j].birth)
//			{
//				min = j;
//			}
//		}
//		if(min != i)
//		{
//			t = p[min];
//			p[min] = p[i];
//			p[i] = t;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %d %s\n", p[i].name, p[i].birth, p[i].number);
//	}
//	return 0;
//}
//struct stu
//{
//	char name[11];
//	int birth;
//	char number[18];
//};
//int main()
//{
//	int j;
//	int i = 0;
//	struct stu p[3], t;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s %d %s", &p[i].name, &p[i].birth, &p[i].number);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int min = i;
//		for (j = i + 1; j < 3; j++)
//		{
//			if (p[min].birth > p[j].birth)
//			{
//				min = i;
//			}
//		}
//		if (min != i)
//		{
//			t = p[i];
//			p[i] = p[min];
//			p[min] = p[i];
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d %s\n", p[i].name, p[i].birth, p[i].number);
//	}
//	return 0;
//}
//#include<stdio.h>
//struct student
//{
//    char name[11];
//    int birth;
//    char number[18];
//};
//int main()
//{
//    int n, j;
//    int i;
//    scanf("%d", &n);
//    struct student p[n], t;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s %d %s", &p[i].name, &p[i].birth, &p[i].number);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int min = i;
//        for (j = i + 1; j < n; j++)
//        {
//            if (p[min].birth > p[j].birth)
//            {
//                min = j;
//            }
//        }
//        if (min != i)
//        {
//            t = p[min];
//            p[min] = p[i];
//            p[i] = t;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%s %d %s\n", p[i].name, p[i].birth, p[i].number);
//    }
//    return 0;
//}
//
//2.
//#include<stdio.h>
//struct stu
//{
//    char name[11];
//    int birth;
//    char number[18];
//};
//int main()
//{
//    int n, j;
//    int i = 0;
//    scanf("%d", &n);
//    struct stu p[n], t;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s %d %s", &p[i].name, &p[i].birth, &p[i].number);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int min = i;
//        for (j = i + 1; j < n; j++)
//        {
//            if (p[min].birth > p[j].birth)
//            {
//                min = i;
//            }
//        }
//        if (min != i)
//        {
//            t = p[min];
//            p[min] = p[i];
//            p[i] = t;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s %d %s", p[i].name, p[i].birth, p[i].number);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	int j = 0;
//	char str [5][80];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s",str[i]);
//		if (strlen(str[i]) > max)
//		{
//			max = strlen(str[i]);
//			j = i;
//		}
//	}
//	printf("The longest is :%s ", str[j]);
////	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int n = 0;
//	scanf("%d", &n);
//	int max = 0;
//	char str[5][80];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &str[i]);
//		if (strlen(str[i]) > max)
//		{
//			max = strlen(str[i]);
//			j = i;
//		}
//	}
//	printf("The longest is :%s", str[j]);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	int n;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = n; i <= n  + 3; i++)
//	{
//		for (j = n; j <= n + 3; j++)
//		{
//			for (k = n; k <= n + 3; k++)
//			{
//				if (i != j && j != k && i != k)
//				{
//					count++;
//					printf("%d%d%d", i, j, k);
//					if (count % 6 == 0)
//						printf("\n");
//					else
//						printf(" ");
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	char xuehao[10];
//	char xingming[20];
//	int x;
//	int y;
//	int z;
//};
//int main()
//{
//	int n = 0;
//	int i, j;
//	int max = 0;
//	scanf("%d", &n);
//	struct stu p[5];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d", &p[i].xuehao, &p[i].xingming, &p[i].x, &p[i].y, & p[i].z);
//		if (p[i].x + p[i].y + p[i].z > max)
//		{
//			max = p[i].x + p[i].y + p[i].z;
//			j = i;
//		}
//	}
//	printf("%s %s %d", p[j].xingming, p[j].xuehao, max);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[80];
    int i = 0;
    int n = 0;
    int f = 0;
    gets(a);
    int sum = strlen(a);
    n = sum - 1;
    if (n % 2 == 0)
    {
        for (i = 0; i < n / 2; i++)
        {
            if (a[i] == a[n - i ])
            {
                f = 1;
            }
        }
    }
    else
    {
        for (i = 0; i < (n - 1) / 2; i++)
        {
            if (a[i] == a[n - i ])
            {
                f = 1;
            }
        }
    }
    if (f == 1)
    {
        printf("yes");
    }
    else
        printf("no");
    return 0;
}