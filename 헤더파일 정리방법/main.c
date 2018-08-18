#include <stdio.h>
/*
	헤더파일의 디자인과 활용.

	#include 의 역할 그 내부에 있는 인자들을 단지 포함시켜준다.
*/

// 내가 사용할 해더파일 포함.
// 수학의 기본연산을 필요로 하는 것이 아니고, 넓이구하기와 둘레구하기만 필요.
#include "areaArith.h"
#include "roundArith.h"

int main()
{
	printf("삼각형 넓이(밑변4, 높이2): %g \n",TriangleArea(4,2));
	printf("원의 넓이(반지름 3): %g \n", CircleArea(3));

	printf("직사각형 둘레(밑변2.5, 높이5.2): %g \n", RectangleRound(2.5, 5.2));
	printf("정사각형 둘레(변의 길이: 3): %g \n", SquareRound(3));


	return 0;
}