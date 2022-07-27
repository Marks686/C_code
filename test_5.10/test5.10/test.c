#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int x = 5, y = 6;
void incxy() 
{ 
	x++;
	y++; 
} 
int main(void) 
{ 
	int x = 3;
    incxy();
    printf("%d, %d\n", x, y);
    return 0; 
}