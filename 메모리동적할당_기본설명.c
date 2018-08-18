#include <stdio.h>
#include <stdlib.h>		//	malloc함수 포함.
/*
	메모리의 동적할당.
	함수 -> "malloc()" , "free()" 에 대한 이해.
	지역변수, 전역변수 선언으로만 해결이 불가능 할 때,


	함수 형태:

	void * malloc(size_t size);		 // Heap 영역으로의 메모리 공간 할당.
	void free(void * ptr);			 // Heap 영역에 할당된 메모리 공간 해제

	-> 함수 성공시 할당된 메모리 주소값, 실패시 NULL반환

*/

/*	동적할당이 필요한 예,

char * ReadUserName(void)	//	사용자로부터 name을 입력받아 char * 주소값을 반환하는 함수
{
	char name[30];					//	메모리 공간 할당
	printf("what is your name? ");
	gets(name);						//	사용자로부터 값을 받아 메모리에 저장
	return name;					//	주소값으로 반환 (배열이름이 주소이므로)
}

//	메모리는 실제, 값을 삭제하지 않고, 사용이 종료되어 소멸되었다고 인식된 값은 쓰레기값으로 인식되고, 그위에 덮어 씌움.

int main(void)
{
	char * name1;					//	name1, name2 주소값으로 선언
	char * name2;

	name1 = ReadUserName();			
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name1: %s \n", name2);	//	※ 지역변수로 쓸 경우, name1 으로 반환된 값은 함수가 끝남에 따라 소멸되고 말음.

	return 0;
}

*/

int main()
{
	void * ptr1 = malloc(4);	//	4바이트를 힙 영역에 할당
	void * ptr2 = malloc(12);	//	12바이트를 힙 영역에 할당

	free(ptr1);					//	ptr1 이 가리키는 4바이트의 메모리 공간 해제
	free(ptr2);					//	ptr2 가 가리키는 4바이트의 메모리 공간 해제

	// <void * ptr1> 의 <void *> 는 모든 주소값을 담을 수 있는 만능 상자. 그러나 <*ptr1> 의 연산을 불가능.
	// 그래서  < int * ptr = (int *)ptr1 = malloc(4); > 으로 강제 형 변환 시켜줌.


	return 0;
}

/*
	malloc 함수의 반환형이 void 포인터인 이유?
	
	ㅡ> malloc 함수는 인자로 숫자하나 전달만 받음, 메모리의 용도를 알 수가 없다. 따라서, 메모리의 포인터형을 결정짓지 못함.
		따라서 다음과 같은 형 변환을 거쳐야 함. (아래)

	
		정형적인 함수 형태                                    실제 의미
	void * ptr1 = malloc(sizeof(int));			->	void * ptr1 = malloc(4)
	void * ptr2 = malloc(sizeof(double));		->  void * ptr2 = malloc(8)
	void * ptr3 = malloc(sizeof(int)*7);		->	void * ptr3 = malloc(28)	//	int형 변수 7개, 즉, 배열을 의미함.
	void * ptr4 = malloc(sizeof(double)*9);		->	void * ptr4 = malloc(72)	//	double형 변수 9개,

	malloc함수는 실제 메모리 크기만 할당해주고, 어떤 자료형인지 구분할 수가 없다.
	그래서 주소값만 반환하고, 실제 자료형은 프로그래머가 정해서 쓰도록 한다.

*/
#ifdef malloc 함수의 가장 모범적인 호출 형태.

void   * ptr1 = (int *)malloc(sizeof(int));
double * ptr2 = (double *)malloc(sizeof(double));
int    * ptr3 = (int *)malloc(sizeof(int) * 7);
double * ptr4 = (double *)malloc(sizeof(double) * 9);
#endif

