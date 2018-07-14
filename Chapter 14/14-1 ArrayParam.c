#include <stdio.h>

void ShowArrayElm(int *param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

int main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArrayElm(arr1, sizeof(arr1) / sizeof(int));
	ShowArrayElm(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}