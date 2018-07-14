#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int remainder;
	int i = 0;
	int j;
	char mod[8];
	scanf("%d", &num);

	while (num != 0)
	{
		mod[i] = num % 16;
		num = num / 16;
		if (10 <= mod[i])
			mod[i] += 'A' - 10;
		else
			mod[i] += '0';
		i++;
	}
	if (i == 0)
		printf("0");
	for (j = i - 1; j >= 0; j--)
		printf("%c", mod[j]);
	printf("\n");

	return 0;
}