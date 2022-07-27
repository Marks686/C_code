#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
	//double g = 10, t = 2, s;
	//s = 1 / 2 * g * t * t;
	//printf("%g\n", s);
	/*int a = 0;*/
	//printf("%d\n", -5 % -3);
	//printf("%d\n", 5 % -3);
	//printf("%d\n", -5 % 3);
	//int n = 4, s;
	//s = 1 / 2 * n * (n + 1);
	//printf("%d\n", s);
	//int a = -5, b = -3, c;
	//c = a % b;
	////printf("%d\n", c);
	//int main(void)
	//{
	//	int a[3][3] = { {1,2,3}, {4,6,2}, {9,3,6} }, s = 0;
	//	int i, j, k = 1;
	//	for (i = 0; i < 3; i++) {
	//		for (j = 0; j < 3; j++)
	//			a[i][j] = a[i][j] / k;
	//		k++;
	//	}
	//	for (i = 0; i < 3; i++)
	//		s += a[i][i];
	//	printf("%d", s);
	//	return 0;int a[3][3]={1,0,2,1,0,2,1,0,1},i,j,s=0;
	//	for (i = 0; i < 3; i++)
	//		for (j = 0; j < i; j++)  s = s + a[i][j];

	////}

	//return 0;
//}
int main(void)
{
	char ch[7] = { "12ab56" };
	int i, s = 0;
	for (i = 0; ch[i] >= '0' && ch[i] <= '9'; i += 2)
		s = 10 * s + ch[i] - '0';
	printf("%d\n", s);
	return 0;
}
