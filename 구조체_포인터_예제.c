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

// ����ü ������ ����ü�� ������ �� �ִ�.
struct circle
{
	double radius;
	struct point * center;		//	*** center��� ����ü �����ͺ����� ����.
};

int main()
{
	struct point cen = { 2 , 7 };
	double rad = 5.5;

	struct circle ring = { rad, &cen };		//	ring�̶�� ����ü������ rad���� (cen ����ü point�� ����)���� ����.

	printf("���� ������ : %g \n", rad);
								  // ring�� �ɹ��� ����, center�� ����Ű�� ���� ����
	printf("���� �߽� [%d %d] \n", (ring.center)->xpos, (ring.center)->ypos);

	return 0;
}

/*
// ����
int main()
{
	// ����ü �ڷ������� ���� �����ϱ�.
	struct point pos1 = {1 ,2};
	struct point pos2 = { 100, 200 };

	struct point * pptr = &pos1;  //	pptr�� ����Ű�� ��� pos1

	// pptr�̶�� �����ͺ����� ����Ű�� �ɹ��� xpos�� �����Ͽ� �����϶�
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;

					 // pptr�̶�� �����ͺ����� ����Ű�� �ɹ��� xpos�� ����϶�
	printf("%d %d \n",pptr->xpos, pptr->ypos);

	pptr = &pos2;	//	pptr�� ����Ű�� ��� pos2�� ����.

	// pptr�̶�� �����ͺ����� ����Ű�� �ɹ��� ������ xpos�� �����϶�
	pptr->xpos += 2;
	pptr->ypos += 2;

	printf("%d %d \n", pptr->xpos, pptr->ypos);


	return 0;
}

*/


/*
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
}*/