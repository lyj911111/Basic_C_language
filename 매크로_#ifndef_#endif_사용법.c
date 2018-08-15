#include <stdio.h>

/*
	#ifndef  'n' = not, 이므로, 정의가 되어있지 않으면 #ifndef 아래 코드를 컴파일문에 포함시킴.
	정의가 되있지 않으면 포함한다!!  정의가 된것은 제외함.
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

#ifndef MUL		// 정의 되어있으므로, 컴파일에서 제외.
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
#endif

#ifdef DIV
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
#endif

	return 0;
}