#include <stdio.h>
#include <string.h>

#define LEN_NAME 10
#define LEN_NUM 15
#define MAXNUM 10

// ��ó: http://happygj.tistory.com/330 

typedef struct phonebook
{
	char name[LEN_NAME];
	char number[LEN_NUM];
} PB;

void Insert(struct phonebook* list);
void Delete(struct phonebook* list);
void Search(struct phonebook* list);
void PrintAll(struct phonebook* list);

int n = 0; // ��ü �ο� üũ�� ����

int main(void)
{
	int sel;
	// ����ü �迭 ����: �ִ� 10����� ���� ����
	PB *plist;

	plist = (PB*)malloc(sizeof(PB)*MAXNUM);

	// ���ϴ� �޴� ���� & ��� ����
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

		// 5���̸� ���� & 1~5 ���̰� �ƴ϶�� ���� �޽��� ǥ��
		if (sel == 5)
			break;

		if (sel<1 || sel>5)
		{
			puts("Input Range: 1~5. Try Again. \n");
			continue;
		}

		switch (sel) // ���ϴ� �׸� ���� �Լ� ����
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

// �߰� �Լ�

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
		puts("There is no one. You can't delete anyone."); // ������ ��ϵ� ����� ���� ��� ���� �޽��� ǥ��
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

// �˻� �Լ�

void Search(struct phonebook* list)
{
	char tempname[LEN_NAME];
	int i;

	if (n == 0)
	{
		puts("There is no one. You can't search anyone."); // ������ ��ϵ� ����� ���� ��� ���� �޽��� ǥ��
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

// ��� �Լ�
void PrintAll(struct phonebook* list)
{
	int i;

	if (n == 0)
	{
		puts("There is no one to show."); // ������ ��ϵ� ����� ���� ��� ���� �޽��� ǥ��
		return;
	}

	puts("[PRINT ALL DATA]");
	for (i = 0; i < n; i++)
		printf("Name: %s / Tel: %s \n", list[i].name, list[i].number);
}