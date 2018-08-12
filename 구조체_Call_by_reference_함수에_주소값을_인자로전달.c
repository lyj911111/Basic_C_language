#include <stdio.h>

/*
	구조체 기반의 Call-by-Reference 값의 주소를 전달.

*/

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void OrgSymtrans(Point * ptr)	//	포인터 인자 받음. 원점 대칭 함수.
{								//	포인터 구조체맴버에 접근.
	ptr->xpos = (ptr->xpos) * -1;	//	ptr이 가리키고있는 맴버 xpos에 연산하여 저장하라.
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
	printf("[%d %d] \n", pos.xpos, pos.ypos);
}

int main()
{
	Point pos = {7, -2};

	OrgSymtrans(&pos);	//	포인터 이므로 주소값을 전달.
	ShowPosition(pos);	//	원점대칭을 출력

	OrgSymtrans(&pos);	//	포인터 이므로 주소값을 전달.
	ShowPosition(pos);	//	원점대칭을 출력

	return 0;
}