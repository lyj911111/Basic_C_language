#include <stdio.h>

/*
	매크로 연산자. (매크로를 기반으로한 연산)
	1.	#
	2.	##

	예제.
*/

#define STR(ABC)		#ABC	//	인자 ABC를 -> "ABC"의 문자열로 치환하라.

// 예제1. #연산자.
#define STRING_JOB(A,B)	#A "의 직업은 " #B "입니다."

int main()
{
	printf("%s \n", STRING_JOB(이동춘, 나무꾼));
	printf("%s \n", STRING_JOB(한상순, 사냥꾼));

	return 0;
}