#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int min, max;
	int cnt = 1;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		min = b;
	}
	else
		min = a;

	while (cnt != min)
	{
		if (a % cnt == 0 && b % cnt == 0)
			max = cnt;
		cnt++;
	}

	printf("두 수의 최대공약수: %d\n", max);

	return 0;
}