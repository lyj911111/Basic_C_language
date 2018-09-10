#include <stdio.h>

/* typedef 선언하고 활용하기.

	사용방법. typedef A B		<= B를 선언
			  typedef A B C		<= C를 선언



*/

//선언 예제.

typedef int INT;
typedef int * PTR_INT;

typedef unsigned int U_INT;
typedef unsigned int * PTR_UINT;

typedef unsigned char UCHAR;
typedef unsigned char * PTR_UCHAR;

// 구조체 정의와 typedef 선언 !!!!!!************************ 
///////////////////////////////////

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;  // 구조체 정의 후 struct point 자료형에, Point라는 이름을 부여하기 위한 선언.
/////////////////////////////////////
///////     합 친 형 태  ////////////
/////////////////////////////////////

//  =>  이와같이 구조체 선언와함께 typedef선언을 해서 구조체 이름을 편리하게 사용할 수 있다.
typedef struct point
{
	int xpos;
	int ypos;
}Point;


int main()
{
	struct point pos1;   // <= 이전에 선언했던 방식.

	Point pos2;		//	<= typedef를 선언하고 이후 구조체를 선언하는 방식. (struct를 쓸 필요가 없다)

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
// 구조체 정의와 typedef 선언 관련 예제.

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

///////// 더 간단하게 선언할 수 있다.

typedef struct //여기 생략할 수도 있다.
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;		// 어차피 Person을 주로 사용하니까.


int main()
{
	Point pos = { 10 , 20 };		//	struct Point자료형선언 pos를 할당, 초기값 대입. { xpos = 10, ypos= 20 }이라는 뜻 
	Person man = {"이승기", };

	return 0;
}