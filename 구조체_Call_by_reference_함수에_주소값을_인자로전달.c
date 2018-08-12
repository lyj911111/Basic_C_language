#include <stdio.h>

/*
	����ü ����� Call-by-Reference ���� �ּҸ� ����.

*/

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void OrgSymtrans(Point * ptr)	//	������ ���� ����. ���� ��Ī �Լ�.
{								//	������ ����ü�ɹ��� ����.
	ptr->xpos = (ptr->xpos) * -1;	//	ptr�� ����Ű���ִ� �ɹ� xpos�� �����Ͽ� �����϶�.
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
	printf("[%d %d] \n", pos.xpos, pos.ypos);
}

int main()
{
	Point pos = {7, -2};

	OrgSymtrans(&pos);	//	������ �̹Ƿ� �ּҰ��� ����.
	ShowPosition(pos);	//	������Ī�� ���

	OrgSymtrans(&pos);	//	������ �̹Ƿ� �ּҰ��� ����.
	ShowPosition(pos);	//	������Ī�� ���

	return 0;
}