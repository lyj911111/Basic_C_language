#include <stdio.h>

/*
	����ü ������ �����ϱ�, Ȱ���ϱ�.
	����ü ������ ������ ������ ���� �ٲٱ�.
	���� 1. : ����ü �������� -> ������ ����.
	���� 2. : ����ü�� ����ü ������ �����ϱ�
	���� 3. : (������� ����) ����ü�� ���� �����Ҷ�, "�ڷᱸ��"���� ���.
	+����ü ���� �ּҰ��� (&point)�� ����ü ���� ù��° �ּҰ�(&point.xpos)�� ��ġ�Ѵ�.
*/

// ���� 3.
struct point
{
	int xpos;
	int ypos;
	struct point * ptr;			// ** ����ü �� ���� �����͸� ������ �� ����.
};

int main()
{
	struct point pos1 = { 1, 1 };
	struct point pos2 = { 2, 2 };
	struct point pos3 = { 3, 3 };

	pos1.ptr = &pos2;	//	pos1�� pos2�� ����
	pos2.ptr = &pos3;	//	pos2�� pos3�� ����
	pos3.ptr = &pos1;	//	pos3�� pos1�� ����

	printf("���� ���� ����... \n");
	printf("[%d %d]�� [%d %d]�� ����\n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d %d]�� [%d %d]�� ����\n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d %d]�� [%d %d]�� ����\n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);

	return 0;
}





// ����2.
/*
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
*/

/*
// ���� 1.
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