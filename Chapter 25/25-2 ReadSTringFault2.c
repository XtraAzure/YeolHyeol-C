#include <stdio.h>
char name[30];

char *ReadUserName()
{
	printf("What's your name? ");
	gets(name);
	return name;
}

int main()
{
	char *name1;
	char *name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);
	// malloc과 free 함수를 써야지 정상된다
	return 0;
}