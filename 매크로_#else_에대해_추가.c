#include <stdio.h>

/*
	#else의 삽입 추가!  #if, #ifdef, #ifndef 에서,
*/

#define HIT_NUM	 5	//	<= 여기 값을 5 또는 4 등 다른값으로 바꿔서 실험.

int main()
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#if HIT_NUM == 5					//	참이면 포함되고, (연산자도 포함이 가능하다)
	puts("현재값은 5이다.");
#else								//	참이 아닌 그 외인경우 여길 포함하라
	puts("현재값은 5가 아니다.");
#endif

	return 0;
}


/*
	#ifdef A
		A가 정의가 되어있으면 여길 포함해라
	#else
		A가 정의되어 있지 않으면, 여길 포함해라.
	#endif
*/

/*
	#ifndef B
		B가 정의 되어있으면 여길 제외하고 else를 컴파일에 포함!
	#else
		이곳을 포함해라 B가 정의 안되면,
	#endif

*/