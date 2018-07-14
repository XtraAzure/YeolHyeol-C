#include <stdio.h>
#define ADD(x,y,z) ((x)+(y)+(z))
#define MUL(x,y,z) ((x)*(y)*(z))
#define PI 3.1415
#define AREA(r) ((r)*(r)*PI)
#define MAX(a,b) ((a)>(b) ? (a):(b))

void QuestionOne()
{
	printf("3+4+5 = %d \n", ADD(3, 4, 5));
	printf("3x4x5 = %d \n", MUL(3, 4, 5));
}

void QuestionTwo()
{
	double rad;
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);
	printf("원의 넓이: %g \n", AREA(rad));
}

void QuestionThree()
{
	int num1, num2;
	printf("두 개의 정수 입력:");
	scanf("%d %d", &num1, &num2);
	printf("%d가(이) 더 큰 수 입니다. \n", MAX(num1, num2));
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();

	return 0;
}