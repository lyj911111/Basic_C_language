#include <stdio.h>

/*
	����ü�� �����ϴ� ����
	-> struct  type_name  val_name;
	
*/

struct point		//	point��� ����� ���� �ڷ����� ����.
{
	int xpos;		//	x��ǥ
	int ypos;		//	y��ǥ
};

struct person		//	person�̶�� ����� ���� �ڷ����� ����.
{
	char name[20];		// �̸��� ����
	char phoneNum[20];	// ��ȭ��ȣ�� ����
	int age;			// ���̸� ����.
};

int main()
{
	struct point pos;		//	pos���� xpos�� ypos�� ���� ������ ����. pos�� ��� ������ ���� �縦 �Բ���. ��, pos�� ����� xpos ypos��δ� �Ҹ�.
	struct person man;		//	man���� 3���� ������ ���� ������ ����.

	// �ɹ��� �����ϴ� ���.
	pos.xpos = 20;			//	pos��� ���� �� xpos�� �����Ͽ� 20�� �־��.

	scanf("%s", man.phoneNum);
	printf("%s \n", man.name);

	return 0;
}