#include <stdio.h>

/*
	#ifdef 는 정의만 되어있어도 컴파일에 포함되고,
	정의가 되있지 않으면 포함하지 않음. "단지 정의만 되어있어도" 컴파일에 포함.
*/

#define ADD 0	//	#define ADD
#define MIN 1	//	#define MIN  으로만 선언해도 됨!!!! (뒤가 필요 없음)

#define MUL		
#define DIV

int main()
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);


#ifdef ADD		// 매크로 ADD가 정의 되어있으면 실행하라!! 뒤에 값이 무엇이든 상관없음. 그냥 정의가 되어있어도 포함.
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

#ifdef MUL
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
#endif

#ifdef DIV
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
#endif

	return 0;
}