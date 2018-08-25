#include <stdio.h>

/*
	모든 주소값을 저장할 수 있는 void 포인터, (type정보 필요없음, 오직 주소만 저장)
	type(자료형) 이 존재하지 않기 때문에,  *연산은 불가능하다.
	
	선언방법: void * ptr;

	*ptr = 3.14 ; 이러한 연산은 불가능하다. 왜냐하면, 자료형을 모르기 때문이다.
	ptr++;		  이러한 연산도 불가능하다. 자료형을 몰라서.
*/

void func(void)
{
	return 0;
}

int main()
{
	int num = 20;
	void * ptr;				// void 포인터 선언.
	void(*funcptr) (void);	// 함수포인터 선언.

	ptr = &num;				// ptr포인터에 num의 주소값을 저장 (그러나 int형 type은 못따라온다)
	printf("%p \n", ptr);	// ptr이 가리키는 주소값 출력
	printf("%p \n", &num);	// num의 주소값 출력   (ptr이 가리키는 주소값 = num주소값)

	printf("%p \n", &ptr);	//	ptr자체의 주소값.

	// void 포인터에 함수포인터도 저장이 가능하다!!!!!
	ptr = funcptr;

	return 0;
}