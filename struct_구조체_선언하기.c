# include <stdio.h>

/*
	����ü, struct �� ���� ����.
	���� �ڷ���(int, double ��)�� �ϳ��� ��� ǥ���� �� �ֵ��� ��.
	struct [�ڷ���] ��, ����� ���� �ڷ����� ����.

	����ü�� ���� �ϴ� ���.

*/

// x, y���� ���� ������ ���� �ƴ϶�, �ϳ��� ������ ǥ���Ѵ�. �� �Բ���.
struct point	//	�����͸� ���ڴ�. �׸��� �̸��� ���´�.  x,y�� ����Ʈ �� ����.
{
	int xpos;		
	int ypos;
};

struct person
{
	char name[20];		// �̸��� ����
	char phoneNum[20];	// ��ȭ��ȣ�� ����
	int age;			// ���̸� ����.
};

///////////// ����ü ��� �ٸ� ��� /////////////////////////
struct point
{
	int xpos;
	int ypos;
}pos1, pos2, pos3 ;

struct point
{
	int xpos;
	int ypos;
};
struct point pos1, pos2, pos3;  

////////////// �� ����ü ������ ���� ������ ///////////////////////////////////


int main()
{

	return 0;
}