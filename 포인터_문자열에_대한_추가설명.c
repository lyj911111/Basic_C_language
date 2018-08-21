#include <stdio.h>

/*
	상수 형태의 문자열 특징.

	1.
		printf 에서도 문자열의 맨앞 주소값이 반환되어 나간다.
	2.
		함수를 호출할때 문자열을 전달해도 문자열이 통채로 전달되는 것이 아니고, 맨 앞에있는 문자의 주소값이 전달되는 것이다.
*/

void WhoAreYou(char * str)	//	"Hong" 문자열의 맨 앞 'H'의 주소값이 char * (char형 주소값) 으로 들어오므로 받는 인자를 이렇게 사용한다.
{

}

int main()
{
	printf("this string is Constant as well"); // 이 또한, 문자열의 맨 앞 't'의 주소값을 갖고있는 상수형태의 주소값에 불과하다.

	WhoAreYou("Hong");		//	문자열의 맨 앞 'H'의 주소값의 인자가 반환되어 함수에 들어간다.

	return 0;
}