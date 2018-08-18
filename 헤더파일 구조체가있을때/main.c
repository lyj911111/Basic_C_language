/*
	구조체는 헤더파일에 정의하고
	필요할때 호출해서 사용한다.
*/

#include <stdio.h>
#include "struct.h"

extern Div IntDiv(int num1, int num2);	//	외부어딘가 Div IntDiv함수가 있다는 것을 알려줌

int main()
{
	Div val = IntDiv(5, 2);				//	변수선언을 하기때문에 구조체가 필요하다.
	printf("몫: %d \n", val.quotient);
	printf("나머지: %d \n", val.remainder);

	return 0;
}