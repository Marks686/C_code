#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    int x, y = 0;
//    scanf("%d %d", &x, &y);
//    int i = 0;
//    int a[10];
//    int count = 0;
//    for (i = 0; i < x; i++)
//    {
//        scanf("%d", &a[i]);
//
//        if (a[i] == y)
//            printf("Found %d at %d", y, count);
//        count++;
//        for (i = 0; i < x; i++)
//        {
//            a[i] != y;
//            printf("Not found %d", y);
//        }
//    }
//
//    return 0;
//}
//for (i = 0; i < x; i++)
//{
//    a[i] != y;
//    printf("Not found %d", y);
//}
//int main()
//{
//    int x, y = 0;
//    scanf("%d %d", &x, &y);
//    int i = 0;
//    int a[10];
//    int count = 0;
//    int a = 0;
//    for (i = 0; i < x; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (i = 0; i < x; i++)
//    {
//        if (a[i] == y)
//        {
//            printf("Found %d at %d", y, count);
//            a++;
//        }
//        count++;
//    }
//    if (a == 0)
//        printf("Not found %d", y);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[20];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    for (i = n - 1; i >= 0; i--)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i, j;
//    int arr[20][20];
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == j)
//            {
//                printf("%d ", arr[i][j]);
//            }
//        }
//    }
//    printf("\n");
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == n - 1 - j)
//            {
//                printf("%d ", arr[j][i]);
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == j)
//            {
//                printf("%d ", arr[i][j]);
//            }
//            printf("\n");
//            for (i = 0; i < n; i++)
//            {
//                for (j = 0; j < n; j++)
//                {
//                    if (j == n - 1 - i)
//                    {
//                        printf("%d ", arr[j][i]);
//                    }
//                }
//            }
//            return 0;
//        }
//int main()
//{
//    int m, n;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    int arr[10][10];
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d\n", arr[i][j] + arr[i][j + 1]);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int m, n;
//    int sum = 0;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    int arr[10][10];
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        sum = 0;
//
//        for (j = 0; j < n; j++)
//        {
//           sum += arr[i][j];
//        }
//            printf("%d\n", sum);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main(void) {
//    int m, n, i, j, sum = 0;
//    int a[10][10] = { 0 };
//    scanf("%d %d", &m, &n);
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//            scanf("%d ", &a[i][j]);
//        }
//
//    }
//    for (i = 0; i < m; i++) {
//        sum = 0;
//        for (j = 0; j < n; j++) {
//            sum += a[i][j];
//        }
//        printf("%d\n", sum);
//    }
//
//    return 0;
//
//}
//#include<string.h>
//int main()
//{
//    char a = 30;
//    scanf("%c", &a);
//    int b = sizeof(a);
//    printf("%d", b);
//    return 0;
//}
//int main()
//{
//    char ch[20];
//    scanf("%s", ch);
//    gets(ch);
//    printf("%d", strlen(ch));
//    return 0;
//}
//int main()
//{
//    int ch[20];
//    gets(ch);
//    printf("%d", strlen(ch));
//    return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//   /* int i, a[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, * p[4];
//
//    for (i = 0; i < 4; i++) {
//        p[i] = &a[i * 3];
//    }
//    printf("%d\n", p[3][2]);*/
//
//    int a[3] = { 0, 1, 2 };
//
//    return 0;
//}
//int main()
//{
//    int x, y, z;
//    scanf("%d%d%d", &x, &y, &z);
////    printf("x+y+z=%d\n", x + y + z);
////}
//#include <stdio.h>
//main()
//{
//	int  a;
//	a = (int)1.99 * 3;
//	printf("%d\n", a);
//}
//#include <stdio.h>
//main()
//{
//	int  a;
//	a = (int)1.99 * 3;
//	printf("%d\n", a);
//}
//int main()
//{
//	//printf("%5.2f", 4321.5678);
//	printf("%d", (int)18.5 % 5);
//	return 0;
//}
