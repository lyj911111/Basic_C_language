#include <stdio.h>

/*
	����ü ������ �����ϱ�, Ȱ���ϱ�.
	����ü ������ ������ ������ ���� �ٲٱ�.
*/

struct point
{
	int xpos;
	int ypos;
};


int main()
{
	struct point pos = { 11 , 12 };	//	����ü�� �ʱⰪ xpos = 11, ypos = 12  �� ����.

	struct point * pptr = &pos;	//	pptr�̶�� ������ ����. pos�� �ּҿ� ����.

	printf("%d, %d\n", pos.xpos, pos.ypos);

	(*pptr).xpos = 10;		//	pptr �̶�� ������ ������ ����Ű�� [.]�ɹ� [xpos]�� 10�� �����϶�~
	(*pptr).ypos = 20;

	printf("%d, %d\n", pos.xpos, pos.ypos);

							//	**************** �̷��� �Ẹ�� ���� *************************
	pptr->xpos = 60;		//  pptr �̶�� ������ ������ ����Ű�� �ɹ� xpos�� 60�� �����϶�~
	pptr->ypos = 70;

	printf("%d, %d\n", pos.xpos, pos.ypos);

	return 0;
}