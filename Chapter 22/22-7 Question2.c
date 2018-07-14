#include <stdio.h>

struct employee
{
	char name[20]; // 이름
	char pid[20]; //주민번호
	int salary; //급여
};

int main()
{
	struct employee arr[3];
	int i;

	for (i = 0; 3 > i; i++)
	{
		printf("이름: ");
		scanf("%s", arr[i].name);
		printf("주민번호: ");
		scanf("%s", arr[i].pid);
		printf("급여: ");
		scanf("%d", &arr[i].salary);
	}

	for (i = 0; 3 > i; i++)
	{
		printf("이름: %s \n", arr[i].name);
		printf("주민번호: %s \n", arr[i].pid);
		printf("급여: %d \n", &arr[i].salary);
	}
	return 0;
}