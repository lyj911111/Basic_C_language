#include <stdio.h>
#include <math.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1, pos2; // pos1 �� pos2�� ����ü �ڷ��� ����
	double distance;

	fputs("point1 pos: ", stdout);	// ����Ϳ� ���
	scanf("%d %d", &pos1.xpos, &pos1.ypos);		// pos1�� x,y��ǥ �Է�

	fputs("point2 pos: ", stdout);	// ����Ϳ� ���
	scanf("%d %d", &pos2.xpos, &pos2.ypos);		// pos1�� x,y��ǥ �Է�

	// ���� ���� �Ÿ� ����, sqrt( (x1 - x2)^2 + (y1 - y2)^2 )
	distance = sqrt((double)((pos1.xpos - pos2.xpos)*(pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

	printf("���� ������ �Ÿ��� %g �Դϴ�.\n", distance);

	return 0;
}
