#include <stdio.h>

int main()
{
	int num = 15;

	int result1 = num << 1; // numÀÇ ºñÆ® ¿­À» ¿ŞÂÊÀ¸·Î 1Ä­¾¿ ÀÌµ¿ 
	int result2 = num << 2; // numÀÇ ºñÆ® ¿­À» ¿ŞÂÊÀ¸·Î 2Ä­¾¿ ÀÌµ¿
	int result3 = num << 3; // numÀÇ ºñÆ® ¿­À» ¿ŞÂÊÀ¸·Î 3Ä­¾¿ ÀÌµ¿

	printf("1Ä­ ÀÌµ¿ °á°ú: %d \n", result1);
	printf("2Ä­ ÀÌµ¿ °á°ú: %d \n", result2);
	printf("3Ä­ ÀÌµ¿ °á°ú: %d \n", result3);

	return 0;
}