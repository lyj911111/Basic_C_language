#include <stdio.h>

/* typedef �����ϰ� Ȱ���ϱ�.

	�����. typedef A B		<= B�� ����
			  typedef A B C		<= C�� ����



*/

//���� ����.

typedef int INT;
typedef int * PTR_INT;

typedef unsigned int U_INT;
typedef unsigned int * PTR_UINT;

typedef unsigned char UCHAR;
typedef unsigned char * PTR_UCHAR;

// ����ü ���ǿ� typedef ���� !!!!!!************************ 
///////////////////////////////////

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;  // ����ü ���� �� struct point �ڷ�����, Point��� �̸��� �ο��ϱ� ���� ����.
/////////////////////////////////////
///////     �� ģ �� ��  ////////////
/////////////////////////////////////

//  =>  �̿Ͱ��� ����ü ������Բ� typedef������ �ؼ� ����ü �̸��� ���ϰ� ����� �� �ִ�.
typedef struct point
{
	int xpos;
	int ypos;
}Point;


int main()
{
	struct point pos1;   // <= ������ �����ߴ� ���.

	Point pos2;		//	<= typedef�� �����ϰ� ���� ����ü�� �����ϴ� ���. (struct�� �� �ʿ䰡 ����)

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
// ����ü ���ǿ� typedef ���� ���� ����.

typedef struct point
{
	xpos;
	ypos;
}Point;

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

///////// �� �����ϰ� ������ �� �ִ�.

typedef struct //���� ������ ���� �ִ�.
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;		// ������ Person�� �ַ� ����ϴϱ�.


int main()
{
	Point pos = { 10 , 20 };		//	struct Point�ڷ������� pos�� �Ҵ�, �ʱⰪ ����. { xpos = 10, ypos= 20 }�̶�� �� 
	Person man = {"�̽±�", };

	return 0;
}