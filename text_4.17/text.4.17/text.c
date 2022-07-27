#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int i = 0;
//	char passward[20] = { 0 };
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("ÇëÊäÈëÃÜÂë£º>");
//		scanf("%s", passward);
//		if (strcmp(passward,"Lovewangmin") == 0)
//		{
//			printf("ÃÜÂëÕýÈ·,½±ÀøÍõÃôÒ»¸öÎÇ£¡");
//			break;
//		}
//		else
//		{
//			printf("ÃÜÂë´íÎó");
//		}
//	}
//	if (i == 3)
//	{
//		printf("ÃÜÂëÊäÈëÒÑ´íÎóÈý´Î£¬Çë30·ÖÖÓºóÔÙÊÔ");
//	}
//	return 0;
//}
int main() 
{
	int i = 0;
	char password[20] = { 0 };
	printf("ÇëÊäÈëÃÜÂë:>");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password,"Lovelikaixuan") == 0)
		{
			printf("ÃÜÂëÕýÈ·£¡");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈëÃÜÂë¡£");
		}
	}
	if (i == 3)
		printf("ÃÜÂë´íÎó£¬ÇëÈýÊ®·ÖÖÓºóÔÙÊÔ¡£");
	return 0;
}
