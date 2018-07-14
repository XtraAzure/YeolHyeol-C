#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define SUM a + c
#define MUL a*c - b*d
#define COMSUM b + d
#define COMMUL b*c + a*d

int main()
{
	float a, b;
	float c, d;

	printf("복소수 입력1[실수 허수]: ");
	scanf("%f %f", &a, &b);
	printf("복소수 입력2[실수 허수]: ");
	scanf("%f %f", &c, &d);

	printf("합의 결과] 실수: %f %f\n", SUM, COMSUM);
	printf("곱의 결과] 실수: %f %f\n", MUL, COMMUL);

	return 0;
}