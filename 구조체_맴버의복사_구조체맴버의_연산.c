#include <stdio.h>

/*
	구조체 맴버의 복사
	구조체 맴버내에서는 +,/,*,- 의 연산이 불가능. 원할 경우 함수로 만들어야 함.

*/

typedef struct point
{
	int xpos;
	int ypos;
}Point;
/*
int main()
{
	Point pos1 = { 1 , 2 };  // 구조체 맴버의 초기화
	Point pos2;

	pos2 = pos1;    //  이 연산을 하면, pos1의 맴버의 값이 pos2에 그대로 "복사" 가된다.

	printf("%d\n", sizeof(pos1));		//	구조체 변수의 크기. => (int형 2개이므로, 8이 반환)

	printf("%d %d \n", pos2);		//	pos1의 복사된 값이 나옴.

	return 0;
}
*/
Point AddPoint(Point pos1, Point pos2)	//	구조체의 값을 함수를 통해 +연산을 함.
{
	Point pos = { pos1.xpos + pos2.xpos , pos1.ypos + pos2.ypos};
	return pos;
}

Point MinPoint(Point pos1, Point pos2)	//	구조체의 값을 함수를 통해 -연산을 함.
{
	Point pos = { pos1.xpos - pos2.xpos , pos1.ypos - pos2.ypos };
	return pos;
}

int main()
{
	Point pos1 = { 5, 6 };
	Point pos2 = { 2, 9 };
	Point result;				// 연산의 결과 값을 저장.

	result = AddPoint(pos1, pos2);

	printf("덧셈 결과: [%d %d] \n", result.xpos , result.ypos);

	result = MinPoint(pos1, pos2);
	printf("뺄셈 결과: [%d %d] \n", result.xpos, result.ypos);

	return 0;
}
