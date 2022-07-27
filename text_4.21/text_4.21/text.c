#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <Windows.h>
int main()
{
	char input[100] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("嘿嘿你的电脑将在30s后关机，如果你输入：我是小帅哥我要好好学习代码李凯轩是帅哥===111大帅哥 将取消关机\n");
	scanf("%s", input);
	if (strcmp(input,"我是小帅哥我要好好学习代码李凯轩是帅哥===111大帅哥") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}