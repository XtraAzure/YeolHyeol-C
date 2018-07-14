#include <stdio.h>
#define STRING_JOB (A,B)	#A "의 작업은 " #B "입니다."

int main()
{
	printf("%s \n", STRING_JOB(이동춘, 나무꾼));
	printf("%s \n", STRING_JOB(한상순, 사냥꾼));
	return 0;
}