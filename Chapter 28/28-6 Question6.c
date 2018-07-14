#include <stdio.h>
#include <string.h>

#define LEN_NAME 10
#define LEN_NUM 15
#define MAXNUM 10

// 출처: http://happygj.tistory.com/330 

typedef struct phonebook
{
	char name[LEN_NAME];
	char number[LEN_NUM];
} PB;

void Insert(struct phonebook* list);
void Delete(struct phonebook* list);
void Search(struct phonebook* list);
void PrintAll(struct phonebook* list);

int n = 0; // 전체 인원 체크용 변수

int main(void)
{
	int sel;
	// 구조체 배열 선언: 최대 10명까지 저장 가능
	PB *plist;

	plist = (PB*)malloc(sizeof(PB)*MAXNUM);

	// 원하는 메뉴 선택 & 명령 수행
	while (1)
	{
		puts("-------- Menu --------");
		puts("           1. Insert");
		puts("           2. Delete");
		puts("           3. Search");
		puts("           4. Print All");
		puts("           5. Exit");
		fputs("Choose the item: ", stdout);

		scanf("%d", &sel);
		fflush(stdin);
		putchar('\n');

		// 5번이면 끝냄 & 1~5 사이가 아니라면 에러 메시지 표시
		if (sel == 5)
			break;

		if (sel<1 || sel>5)
		{
			puts("Input Range: 1~5. Try Again. \n");
			continue;
		}

		switch (sel) // 원하는 항목에 따라 함수 실행
		{
		case 1:
			Insert(plist);
			break;
		case 2:
			Delete(plist);
			break;
		case 3:
			Search(plist);
			break;
		case 4:
			PrintAll(plist);
			break;
		}
		putchar('\n');
	}

	system("pause");
	return 0;

}

// 추가 함수

void Insert(struct phonebook* list)
{
	char tempname[LEN_NAME], tempnum[LEN_NUM];
	puts("[INSERT]");
	fputs("Input Name: ", stdout);

	scanf("%s", tempname);
	fflush(stdin);

	strcpy(list[n].name, tempname);
	fputs("Input Tel Number: ", stdout);

	scanf("%s", tempnum);
	fflush(stdin);

	strcpy(list[n].number, tempnum);

	puts("-----> Data Inserted");
	n++;
}

void Delete(struct phonebook* list)
{
	char tempname[LEN_NAME];
	int i, j;

	if (n == 0)
	{
		puts("There is no one. You can't delete anyone."); // 기존에 등록된 사람이 없을 경우 에러 메시지 표시
		return;
	}

	puts("[DELETE]");
	fputs("Input Name You Want to Delete: ", stdout);
	
	scanf("%s", tempname);
	fflush(stdin);

	for (i = 0; i<n; i++)
		if (strcmp(list[i].name, tempname) == 0)
		{
			for (j = i + 1; j<n; j++)
			{
				strcpy(list[j - 1].name, list[j].name);
				strcpy(list[j - 1].number, list[j].number);
			}

			n--;
			printf("-----> %s, Deleted \n", tempname);
			return;
		}
	puts("There is no one who has that name.");
}

// 검색 함수

void Search(struct phonebook* list)
{
	char tempname[LEN_NAME];
	int i;

	if (n == 0)
	{
		puts("There is no one. You can't search anyone."); // 기존에 등록된 사람이 없을 경우 에러 메시지 표시
		return;
	}

	puts("[SEARCH]");
	fputs("Input Name You Want to Search: ", stdout);
	
	scanf("%s", tempname);
	fflush(stdin);
	putchar('\n');

	for (i = 0; i<n; i++)
		if (strcmp(list[i].name, tempname) == 0)
		{
			puts("*Search Result*");
			printf("Name: %s / Tel: %s \n", list[i].name, list[i].number);
			return;
		}
	puts("There is no one who has that name.");
}

// 출력 함수
void PrintAll(struct phonebook* list)
{
	int i;

	if (n == 0)
	{
		puts("There is no one to show."); // 기존에 등록된 사람이 없을 경우 에러 메시지 표시
		return;
	}

	puts("[PRINT ALL DATA]");
	for (i = 0; i < n; i++)
		printf("Name: %s / Tel: %s \n", list[i].name, list[i].number);
}