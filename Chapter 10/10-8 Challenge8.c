#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int Recursion(int num)
{
	static int total = 1;

	total = total * 2;

	if (num == 1)
		return total;
	else
		return Recursion(num - 1);

}

int main()
{
	int n;
	int result;

	printf("���� �Է�: ");
	scanf("%d", &n);

	result = Recursion(n);

	printf("2�� %d���� %d", n, result);

	return 0;
}