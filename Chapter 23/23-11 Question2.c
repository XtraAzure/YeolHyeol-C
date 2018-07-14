#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct rectangle
{
	Point u1; // 좌 상당
	Point lr; // 우 하단
}Rectangle;

void ShowRecArea(Rectangle rec)
{
	printf("넓이: %d \n", (rec.lr.xpos - rec.u1.xpos) * (rec.lr.ypos - rec.u1.ypos));
}

void ShowRecPos(Rectangle rec)
{
	printf("좌 상단: [%d, %d] \n", rec.u1.xpos, rec.u1.ypos);
	printf("좌 하단: [%d, %d] \n", rec.u1.xpos, rec.lr.ypos);
	printf("우 상단: [%d, %d] \n", rec.lr.xpos, rec.u1.ypos);
	printf("우 하단: [%d, %d] \n", rec.lr.xpos, rec.lr.ypos);
}

int main()
{
	Rectangle rec1 = { {1,1,}, {4,4} };
	Rectangle rec2 = { {0,0}, {7,5} };
	ShowRecArea(rec1);
	ShowRecPos(rec1);
	ShowRecArea(rec2);
	ShowRecPos(rec2);
	return 0;
}