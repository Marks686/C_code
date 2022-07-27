#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int day(int y, int m, int d) {
//    if (m > 0 && m < 13 && d>0 && d < 32) {
//        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
//            if (m == 2 && d >= 30) {
//                printf("NO");
//            }if (m == 2 && d < 30) {
//                printf("YES");
//            }
//            if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30) {
//                printf("YES");
//            }if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
//                printf("NO");
//            }
//            if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31) {
//                printf("YES");
//            }if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31) {
//                printf("NO");
//            }
//        }
//        else {
//            if (m == 2 && d >= 29) {
//                printf("NO");
//            }if (m == 2 && d < 29) {
//                printf("YES");
//            }
//            if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30) {
//                printf("YES");
//            }if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
//                printf("NO");
//            }
//            if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31) {
//                printf("YES");
//            }if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31) {
//                printf("NO");
//            }
//        }
//    }
//    else {
//        printf("NO");
//    }return 0;
//}
//int main(void) {
//    int y, m, d;
//    scanf("%d%d%d", &y, &m, &d);
//    day(y, m, d);
//    return 0;
//}
int main()
{
    int i = 0;
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < sz; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}