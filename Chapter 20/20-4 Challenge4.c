#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	srand((int)time(NULL));
	for (i = 0; i < 5; i++)
		printf("���� ���: %d \n", rand() % 6 + 1);

	system("pause");
	return 0;
}