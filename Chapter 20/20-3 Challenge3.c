#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	printf("������ ����: 0���� %d���� \n", 99);
	for (i = 0; i < 5; i++)
		printf("���� ���: %d \n", rand() % 99);

	system("pause");
	return 0;
}