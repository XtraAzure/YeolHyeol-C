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

	printf("���Ҽ� �Է�1[�Ǽ� ���]: ");
	scanf("%f %f", &a, &b);
	printf("���Ҽ� �Է�2[�Ǽ� ���]: ");
	scanf("%f %f", &c, &d);

	printf("���� ���] �Ǽ�: %f %f\n", SUM, COMSUM);
	printf("���� ���] �Ǽ�: %f %f\n", MUL, COMMUL);

	return 0;
}