#include <stdio.h>

/*
	구조체 포인터 선언하기, 활용하기.
	구조체 포인터 선언후 접근해 값을 바꾸기.
	예제 1. : 구조체 포인터의 -> 연산자 사용법.
	예제 2. : 구조체내 구조체 포인터 선언하기
	예제 3. : (빈번하지 않음) 구조체들 끼리 참조할때, "자료구조"에서 사용.
	+구조체 변수 주소값과 (&point)와 구조체 변수 첫번째 주소값(&point.xpos)는 일치한다.
*/

// 예제 3.
struct point
{
	int xpos;
	int ypos;
	struct point * ptr;			// ** 구조체 내 같은 포인터를 선언할 수 있음.
};

int main()
{
	struct point pos1 = { 1, 1 };
	struct point pos2 = { 2, 2 };
	struct point pos3 = { 3, 3 };

	pos1.ptr = &pos2;	//	pos1과 pos2를 연결
	pos2.ptr = &pos3;	//	pos2와 pos3을 연결
	pos3.ptr = &pos1;	//	pos3과 pos1을 연결

	printf("점의 연결 관계... \n");
	printf("[%d %d]와 [%d %d]의 연결\n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d %d]와 [%d %d]의 연결\n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d %d]와 [%d %d]의 연결\n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);

	return 0;
}





// 예제2.
/*
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
*/

/*
// 예제 1.
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