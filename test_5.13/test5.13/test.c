#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d ", &n);
//    int arr[50];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//
//    }
  /*  for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);

    }*/

//    int del = 0;
//    scanf("%d", &del);
//    for (i = 0; i < n; i++)
//    {
//       
//        if (arr[i] != del)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
////{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10000];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int max = arr[0];
//    int min = arr[0];
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//        if (arr[i] < min)
//            min = arr[i];
//    }
//    printf("%d ", max - min);
//    return 0;
//}
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) == 1)
//    {
//        if (ch >= 'a' && ch <= 'z')
//            printf("%c\n", ch - 32);
//        else
//            printf("%c\n", ch + 32);
//        getchar();
//    }
//    return 0;
//}
//}
//int main()
//{
//    char ch = 0;
//
//
//    while (scanf("%c", &ch) == 1)
//    {
//        if (ch >= 'a' && ch <= 'z')
//            printf("%c\n", ch - 32);
//        else
//            printf("%c\n", ch + 32);
//        getchar();
//
//    }
//    return 0;
//}
int main()
{
    char ch = 0;
    while (scanf("%c", &ch) == 1)
    {
        if (ch >= 'a' && ch <= 'z')
            printf("%c", ch - 32);
        else if(ch >= 'A'&& ch <= 'Z')
            printf("%c", ch + 32);
    }
    return 0;
}