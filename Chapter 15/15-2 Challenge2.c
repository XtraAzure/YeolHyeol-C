#include <stdio.h>

int main()
{
	int num;
	int save[100];
	int i = 0, j;
	printf("10���� ���� �Է�: ");
	scanf("%d", &num);

	while (num != 0)
	{
		save[i] = num % 2;
		i++;
		num = num / 2;
	}
	printf("%d\n", i);
	for (j = i - 1; j >= 0; j--)
		printf("%d", save[j]);
	printf("\n");

	return 0;
}