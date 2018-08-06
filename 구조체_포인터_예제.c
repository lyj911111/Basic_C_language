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

// 구조체 변수로 구조체를 선언할 수 있다.
struct circle
{
	double radius;
	struct point * center;		//	*** center라는 구조체 포인터변수를 선언.
};

int main()
{
	struct point cen = { 2 , 7 };
	double rad = 5.5;

	struct circle ring = { rad, &cen };		//	ring이라는 구조체변수에 rad값과 (cen 구조체 point에 접근)값을 지정.

	printf("원의 반지름 : %g \n", rad);
								  // ring의 맴버에 접근, center가 가리키는 곳에 접근
	printf("원의 중심 [%d %d] \n", (ring.center)->xpos, (ring.center)->ypos);

	return 0;
}

/*
// 예제
int main()
{
	// 구조체 자료형으로 변수 선언하기.
	struct point pos1 = {1 ,2};
	struct point pos2 = { 100, 200 };

	struct point * pptr = &pos1;  //	pptr이 가리키는 대상 pos1

	// pptr이라는 포인터변수가 가리키는 맴버의 xpos에 접근하여 연산하라
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;

					 // pptr이라는 포인터변수가 가리키는 맴버의 xpos를 출력하라
	printf("%d %d \n",pptr->xpos, pptr->ypos);

	pptr = &pos2;	//	pptr이 가리키는 대상 pos2로 변경.

	// pptr이라는 포인터변수가 가리키는 맴버에 접근해 xpos를 연산하라
	pptr->xpos += 2;
	pptr->ypos += 2;

	printf("%d %d \n", pptr->xpos, pptr->ypos);


	return 0;
}

*/


/*
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
}*/