#include <stdio.h>

/*
	구조체를 선언하는 형태
	-> struct  type_name  val_name;
	
*/

struct point		//	point라는 사용자 정의 자료형을 생성.
{
	int xpos;		//	x좌표
	int ypos;		//	y좌표
};

struct person		//	person이라는 사용자 정의 자료형을 생성.
{
	char name[20];		// 이름을 저장
	char phoneNum[20];	// 전화번호를 저장
	int age;			// 나이를 저장.
};

int main()
{
	struct point pos;		//	pos에는 xpos와 ypos가 묶여 가지고 있음. pos내 모든 변수는 생과 사를 함께함. 즉, pos를 지우면 xpos ypos모두다 소멸.
	struct person man;		//	man에는 3개의 변수가 묶여 가지고 있음.

	// 맴버에 접근하는 방식.
	pos.xpos = 20;			//	pos라는 변수 내 xpos에 접근하여 20을 넣어라.

	scanf("%s", man.phoneNum);
	printf("%s \n", man.name);

	return 0;
}