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