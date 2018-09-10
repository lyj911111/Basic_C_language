#include <stdio.h>

/*
	구조체 포인터 선언하기, 활용하기.
	구조체 포인터 선언후 접근해 값을 바꾸기.
*/

struct point
{
	int xpos;
	int ypos;
};


int main()
{
	struct point pos = { 11 , 12 };	//	구조체에 초기값 xpos = 11, ypos = 12  를 지정.

	struct point * pptr = &pos;	//	pptr이라는 포인터 선언. pos의 주소에 접근.

	printf("%d, %d\n", pos.xpos, pos.ypos);

	(*pptr).xpos = 10;		//	pptr 이라는 포인터 변수가 가리키는 [.]맴버 [xpos]에 10을 저장하라~
	(*pptr).ypos = 20;

	printf("%d, %d\n", pos.xpos, pos.ypos);

							//	**************** 이렇게 써보는 연습 *************************
	pptr->xpos = 60;		//  pptr 이라는 포인터 변수가 가리키는 맴버 xpos에 60을 저장하라~
	pptr->ypos = 70;

	printf("%d, %d\n", pos.xpos, pos.ypos);

	return 0;
}