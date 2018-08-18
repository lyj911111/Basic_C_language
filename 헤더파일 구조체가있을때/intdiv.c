/*
	intdiv.c 파일에서는 struct가 있는 헤더파일을 불러와서
	그 헤더파일의 struct를 가지고 함수를 만든다.

	즉, 구조체의 경우는 헤더파일에 구조체선언을 하고 
	필요할 경우 .c 파일에서 불러와 사용한다.
*/

#include "struct.h"

Div IntDiv(int num1, int num2)
{
	Div dval;
	dval.quotient = num1 / num2;
	dval.remainder = num1 % num2;

	return dval;
}
