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

		printf("도서 정보 입력\n");
		for (i = 0; 3 > i; i++)
		{
			printf("저자: "); fgets(books[i].author, sizeof(books[i].author), stdin);
			printf("제목: "); fgets(books[i].name, sizeof(books[i].name), stdin);
			printf("페이지 수: "); scanf("%d", &books[i].page);
			getc(stdin);
		}
		printf("\n");
		printf("도서 정보 출력\n");
		for (i = 0; 3 > i; i++)
		{
			printf("저자: "); fputs(books[i].author, stdout);
			printf("제목: "); fputs(books[i].name, stdout);
			printf("페이지 수: %d\n", books[i].page);
		}

		return 0;
	}