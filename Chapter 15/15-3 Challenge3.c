#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int i;
	int a = 0, b = 9;
	int Input[10];
	int Order[10];

	printf("�� 10���� �����Է�\n");

	for (i = 0; i<10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &Input[i]);
	}


	for (i = 0; i<10; i++)
	{
		if (Input[i] % 2 == 1)
		{
			Order[a] = Input[i];
			a++;
		}
		else
		{
			Order[b] = Input[i];
			b--;
		}
	}

	printf("�迭����� ���: ");
	for (i = 0; i<10; i++)
		printf("%d ", Order[i]);
	printf("\n");

	return 0;

}
