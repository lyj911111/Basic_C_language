#include <stdio.h>

#define HIT_NUM 7		//	<=  이 조건이 맞을때 수행함.

/*

	#elif 사용 방법. 
	#if만 해당!!!!!!!!!!

*/

int main()
{
#if HIT_NUM == 5
	puts("상수 5를 포함하라");
#elif HIT_NUM == 6
	puts("상수 6를 포함하라");
#elif HIT_NUM == 7			//	<= HIT_NUM 이 7 이므로 여기만 컴파일함.
	puts("상수 7를 포함하라");
#else
	puts("상수 8를 포함하라");
#endif


	return 0;
}

/*
	#ifndef ADD
	#elif
	#elif
	#endif
	쓸수는 있지만, 부자연스러움......
*/