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
	printf("���� ������ �Է�: ");
	scanf("%lf", &rad);
	printf("���� ����: %g \n", AREA(rad));
}

void QuestionThree()
{
	int num1, num2;
	printf("�� ���� ���� �Է�:");
	scanf("%d %d", &num1, &num2);
	printf("%d��(��) �� ū �� �Դϴ�. \n", MAX(num1, num2));
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();

	return 0;
}