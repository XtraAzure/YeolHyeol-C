#include <stdio.h>

int MaxNum(int n1, int n2, int n3)
{
	if (n1 > n2)
		return (n1 > n3) ? n1 : n3;
	else
		return (n2 > n3) ? n2 : n3;
}

int MinNum(int n1, int n2, int n3)
{
	if (n1 < n2)
		return (n1 < n3) ? n1 : n3;
	else
		return (n2 < n3) ? n2 : n3;
}

void QuestionOne()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수: %d \n", MaxNum(num1, num2, num3));
	printf("가장 작은 수: %d \n", MinNum(num1, num2, num3));
}

double CelToFah(double Cel)
{
	double Fah;
	Fah = 1.8 *Cel + 32;
	return Fah;
}

double FahToCel(double Fah)
{
	double Cel;
	Cel = (Fah - 32) * (5.0 / 9.0);
}

void QuestionTwo()
{
	double Deg;
	scanf("%lf", &Deg);
	printf("FahToCel: %d\nCelToFah: %d \n", FahToCel(Deg), CelToFah(Deg));
}

void ShowFibo(int num)
{
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1)
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);

	for (i = 0; i < num - 2; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

void QuestionThree()
{
	int n;
	scanf("%d", &n);
	if (n < 1)
	{
		printf("1이상의 값을 입력하세요.\n");
		return -1;
	}
	ShowFibo(n);
}

int main()
{
	QuestionOne();
	QuestonTwo();
	QuestionThree();

	return 0;
}