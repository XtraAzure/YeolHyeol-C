#include <stdio.h>

int ConvCase(int ch)
{
	int diff = 'a' - 'A'; // 모든 문자의 대소문자간 차의 크기는 같다.
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
	printf("문자 입력: ");
	ch = getchar(); // 문자 입력
	ch = ConvCase(ch); // 문자 변환
	if (ch == -1)
	{
		puts("범위를 벗어난 입력입니다.\n");
		return -1;
	}
	putchar(ch); //변환된 문자 출력
	return 0;
}