#include <stdio.h>

int ConvCase(int ch)
{
	int diff = 'a' - 'A'; // ��� ������ ��ҹ��ڰ� ���� ũ��� ����.
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main()
{
	int ch;
	printf("���� �Է�: ");
	ch = getchar(); // ���� �Է�
	ch = ConvCase(ch); // ���� ��ȯ
	if (ch == -1)
	{
		puts("������ ��� �Է��Դϴ�.\n");
		return -1;
	}
	putchar(ch); //��ȯ�� ���� ���
	return 0;
}