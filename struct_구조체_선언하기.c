# include <stdio.h>

/*
	구조체, struct 에 대한 이해.
	여러 자료형(int, double 등)을 하나로 묶어서 표현할 수 있도록 함.
	struct [자료형] 죽, 사용자 정의 자료형을 만듦.

	구조체를 정의 하는 방법.

*/

// x, y점은 서로 독립된 것이 아니라, 하나의 정보를 표현한다. 늘 함께함.
struct point	//	데이터를 묶겠다. 그리고 이름을 짓는다.  x,y의 포인트 점 생성.
{
	int xpos;		
	int ypos;
};

struct person
{
	char name[20];		// 이름을 저장
	char phoneNum[20];	// 전화번호를 저장
	int age;			// 나이를 저장.
};

///////////// 구조체 사용 다른 방법 /////////////////////////
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

////////////// 두 구조체 선언이 같은 선언임 ///////////////////////////////////


int main()
{

	return 0;
}