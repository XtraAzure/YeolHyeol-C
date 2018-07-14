#include <stdio.h>

struct employee
{
	char name[20]; // 이름
	char pid[20]; //주민번호
	int salary; //급여
};

int main()
{
	struct employee emp;
	printf("이름: ");
	scanf("%s", emp.name);
	printf("주민번호: ");
	scanf("%s", emp.pid);
	printf("급여: ");
	scanf("%d", &emp.salary);

	printf("이름: %s \n", emp.name);
	printf("주민번호: %s \n", emp.pid);
	printf("급여: %d \n", emp.salary);
	return 0;
}