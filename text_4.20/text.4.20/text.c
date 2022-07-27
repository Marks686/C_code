#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d         ", j, i, j * i);
//			if (j == i)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
void menu()
{
	printf("**************************************\n");
	printf("**************************************\n");
	printf("*************  1.play  ***************\n");
	printf("*************  0.exit  ***************\n");
	printf("**************************************\n");
	printf("**************************************\n");
}
void game()
{
	int guess = 0;
	RAND_MAX;
	int ret = rand()%100+1;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了！！大聪明你一共猜了几次啊？\n");
				break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("选择1为开始游戏\n选择0为退出游戏\n请输入你的选择：\n");
			scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入");
				break;
		}
	} while (input);
	return 0;
}