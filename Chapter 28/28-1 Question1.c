	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>

	typedef struct book {
		char author[30];
		char name[20];
		int page;
	}Book;

	int main()
	{
		Book books[3];
		int i;

		printf("���� ���� �Է�\n");
		for (i = 0; 3 > i; i++)
		{
			printf("����: "); fgets(books[i].author, sizeof(books[i].author), stdin);
			printf("����: "); fgets(books[i].name, sizeof(books[i].name), stdin);
			printf("������ ��: "); scanf("%d", &books[i].page);
			getc(stdin);
		}
		printf("\n");
		printf("���� ���� ���\n");
		for (i = 0; 3 > i; i++)
		{
			printf("����: "); fputs(books[i].author, stdout);
			printf("����: "); fputs(books[i].name, stdout);
			printf("������ ��: %d\n", books[i].page);
		}

		return 0;
	}