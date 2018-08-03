#include <stdio.h>
#include <string.h>

/*
	함수형태: unsigned int strlen(const char * s)
	용도	: s의 string 의 길이를 반환함. 
			  ex) strlen(str) 아래 의 경우, NULL 문자를 제외한 7을 반환함.
*/


int main()
{
	char str[] = "1234567";
	printf("%u \n", strlen(str));	// %u 는 unsigned int값을 출력하는데 사용, 
									// 그러나 이 경우 %d 로 충분히 표현 가능.
									// %u 와 %d 의 출력할 수 있는 값의 차이는 있지만, 큰 값이 아니므로 상관 없다.
}