#include <stdio.h>

/*
매크로, 선행처리기에 관하여...

소스파일이 처리되는 과정.
소스파일 -> 선행처리기 거친 소스파일(#으로 시작되는 코드 사라짐) -> 컴파일러 -> Object file( =bianary file) -> linker(운영체제가 요구하는 포맷으로 실행파일 생성) -> exe실행파일.

1. 선행처리가 하는 역할은, #으로 시작하는 명령을 모두 처리, 치환하고, 삭제한 후 컴파일이 진행됨. ;을 찍지 않는 이유는, 소멸되기 때문에 컴파일러에게 문장의 끝을 알려줄 필요가 없음.
	[#define]  [Pi]    [3.1415]
	선행처리지시  매크로  매크로몸체

2. 매크로 확장(Macro Extension)
	매크로를 이용해 함수를 정의한 후 parameter값에 따라 함수값이 실행되도록 함.
	ex) SQUARE(3) -> (3*3)로 치환.

3. 매크로 1줄에 정의 하는것이 관례지만, 2줄에 또는 다음줄에 걸쳐서 정의하고자 할때, '\'를 이용함.
	ex) #define SQAURE(X) \
		((X)*(X))


4. 먼저 정의된(위에서 정의된) 매크로를 사용할 수 있다.
	ex) #define PI 3.14
		#define PRODUCT(X,Y)    ((X)+(Y))
		#define CIRCLE_AREA(R)  (PRODUCT( (R),(R) )*PI)
	이처럼 위에 정의해 놓은 매크로를 이용해 다음 매크로에 선언가능.

*/

//	[1].
//		#으로 시작하는 것은, 선행처리기에 명령을 내리는 것.
//		PI를 3.14로 무조건 치환하라, 선행처리 이후 소스파일에 명령문에서는 소멸되버림.
#define  PI  3.14
#define NAME "홍길동"
#define PRINT_ADDR puts("주소: 경기도 용인시\n")

//	[2].
//		단순 상수를 치환하는 것이 아니고, 매개변수 X에 대한 함수매크로 정의
//		SQUARE(X) 함수를 만나면, X*X (임의의 값X) 로 치환하라. ex) SQUARE(3) -> (3*3)로 치환.
#define SQUARE(X)  X*X  // 연산의 문제가 많음.

//** 최상의 해결책, 가장 모범적인 기준.
#define SQUARE_FINAL(X)  ((X)*(X)) //으로 정의하면, 모든 연산에서 제곱근이 가능함.
// 결론 괄호의 기준, 내가 치환하고자 하는 모든 변수X 에 괄호를 쳐주고 맨 마지막에 큰 괄호를 쳐주면 된다.


// [3].
//		2줄을 이용하여 정의하는 방법. ( 여러줄도 가능)
#define SQUARE_NEXT_LINE(X) \
		((X)*(X))

// [4].
//		이미 정의된 매크로를 이용해 매크로 선언방법.
#define SND_PI 3.14
#define PRODUCT(X,Y)	((X)*(Y))
#define CIRCLE_AREA(R)	(PRODUCT((R),(R)) * SND_PI)

int main()
{
	// 1. 예제
	printf("이름: %s \n", NAME);	// 문자열내용을 그데로 갖음.
	PRINT_ADDR;					// 뒤에 정의된 함수를 그데로 갖음.

								// 2. 예제
	int num = 20;
	printf("제곱근 값은 : %d \n", SQUARE(num));
	printf("-5의 제곱근 값은 : %d \n", SQUARE(-5));
	printf("2.5의 제곱근 값은 : %g \n", SQUARE(2.5));
	printf("3+2의 제곱근은? %d \n", SQUARE(3 + 2)); // <= 의도한값은 25이지만, 출력은 11이 나옴.
											   // 선행처리기는 3+2*3+2 로 인식하여, 괄호 연산을 하지 않았음.
	printf("(3+2)의 제곱근은? %d \n", SQUARE((3 + 2)));
	// 내부에 괄호를 더 넣으면, 선행처리기는 비로소 (3+2) * (3+2)로 인식한다.
	// SQUARE X*X 와, SQUARE ((X)*(X)) 비교.
	num = 120 / SQUARE(2);
	printf("SQUARE(X*X)일때 연산, %d \n", num);

	num = 120 / SQUARE_FINAL(2);
	printf("SQUARE((X)*(X))일때 연산, %d \n", num);

	// 4. 예제

	double rad = 2.1;
	printf("반지름 %g인 원의 넓이: %g \n", rad, CIRCLE_AREA(rad));


	return 0;
}


/*
	결론!
	1. 매크로함수는 일반 함수 보다 실행속도가 빠르다.
		(별도의 메모리공간 필요X, 호출 및 반환과정 X)
	2. 매크로함수는 자료형에 따라 별도로 정의 하지 않아도 됨.
*/