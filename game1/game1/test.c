#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("*********   1.play  ********\n");
	printf("*********   0.exit  ********\n");
	printf("****************************\n");
	printf("****************************\n");

}
void game()
{
	char board[ROW][COL] = { 0 };//棋盘
	//初始化棋盘的函数
	InitBoard(board, 3, 3);
	DispalyBoard(board, ROW, COL);//打印棋盘
}
int main()
{
	int  input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}