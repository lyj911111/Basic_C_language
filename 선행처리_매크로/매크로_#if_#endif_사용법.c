#include <stdio.h>

/*
	조건부 컴파일 매크로.
	즉, 조건에 맞으면 컴파일 하고 맞지 않으면 컴파일 대상에서 제외!
*/

#define ADD 0	//	이곳에서 TRUE 로 만들면 됨. 컴파일 대상에 포함.
#define MIN 1	//	FALSE 의 경우 문장에서 지워버림.

int main()
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

// 왼쪽으로 정렬되는 이유? 컴파일로 실행되는 것이 아니라, label, 즉 포스트잇처럼 표시해 주는 것이라 생각.
#if ADD		// ADD 가 1이면, 실행.
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#if MIN
	printf("%d + %d = %d \n", num1, num2, num1 - num2);
#endif


	return 0;
}