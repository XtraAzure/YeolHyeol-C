#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int cnt = 0;
	printf("상수 n 입력: ");
	scanf("%d", &n);

	while (n != 0)
	{
		n = n / 2;
		cnt++;
	}

	printf("공식을 만족하는 k의 최댓값은 %d\n", cnt - 1);

	return 0; 
}