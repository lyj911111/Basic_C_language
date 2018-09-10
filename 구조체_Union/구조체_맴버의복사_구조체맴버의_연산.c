#include <stdio.h>

/*
	����ü �ɹ��� ����
	����ü �ɹ��������� +,/,*,- �� ������ �Ұ���. ���� ��� �Լ��� ������ ��.

*/

typedef struct point
{
	int xpos;
	int ypos;
}Point;
/*
int main()
{
	Point pos1 = { 1 , 2 };  // ����ü �ɹ��� �ʱ�ȭ
	Point pos2;

	pos2 = pos1;    //  �� ������ �ϸ�, pos1�� �ɹ��� ���� pos2�� �״�� "����" ���ȴ�.

	printf("%d\n", sizeof(pos1));		//	����ü ������ ũ��. => (int�� 2���̹Ƿ�, 8�� ��ȯ)

	printf("%d %d \n", pos2);		//	pos1�� ����� ���� ����.

	return 0;
}
*/
Point AddPoint(Point pos1, Point pos2)	//	����ü�� ���� �Լ��� ���� +������ ��.
{
	Point pos = { pos1.xpos + pos2.xpos , pos1.ypos + pos2.ypos};
	return pos;
}

Point MinPoint(Point pos1, Point pos2)	//	����ü�� ���� �Լ��� ���� -������ ��.
{
	Point pos = { pos1.xpos - pos2.xpos , pos1.ypos - pos2.ypos };
	return pos;
}

int main()
{
	Point pos1 = { 5, 6 };
	Point pos2 = { 2, 9 };
	Point result;				// ������ ��� ���� ����.

	result = AddPoint(pos1, pos2);

	printf("���� ���: [%d %d] \n", result.xpos , result.ypos);

	result = MinPoint(pos1, pos2);
	printf("���� ���: [%d %d] \n", result.xpos, result.ypos);

	return 0;
}
