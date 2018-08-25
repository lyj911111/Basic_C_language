#include <stdio.h>

/*
	1. 함수의 이름은 함수가 저장된 메모리공간을 가리키는 포인터이다. (= 함수포인터) 즉, 함수이름 = 상수.
	2. 함수이름의 의미하는 '주소값' 은 "함수 포인터 변수"를 선언해 저장가능.
	3. 함수포인터변수를 선언하려면, 함수포인터의 Type(자료형)을 알아야 한다.

	포인터를 선언하기 위해서는, 주소값과 자료형이 주어져야 하는데, 함수의 이름을 다음과 같이 생각하고 포인터를 선언한다.
	함수 읽기. (함수포인터를 선언하기 위하여)

	ex) int fct(int a );
	1.
		이 함수의 주소값은? fct의 주소. (함수이름 = 주소값)
	2.
		type형은?	"Parameter가 int 이고, return값이 int 이다."

	ex) double Fct (double a , double b );
	1.
		함수의 주소값? 함수이름 Fct 의 주소.
	2.
		type형은?	"Parameter가 2개의 double, return값이 double 이다."


	아래 예제에서 선언한 함수포인터변수 2개.
	int (*fptr) (int, int);
	void (*ptrstring) (char *);
*/


int fct(int a, int b)
{
	int c = 0;

	c = a - b;

	return c;
}

void ShowString(char * str)
{
	printf("%s \n", str);
}

int main()
{
	char * str = "ich liebe dich";
	
	
	// 함수포인터를 선언하기!!
	// [자료형: 매개변수 int형인, 리턴값이 int형 2개인] 포인터함수 fptr 를 선언!!
	//	함수이름은 의미없다. *만 있으면 될뿐, 그러나 자료형은 반드시 일치해야 한다.
	int(*fptr) (int,int);


	fptr = fct;		//	fptr -> fct의 주소를 가리킴. (함수이름이 주소값이므로)

	// 상수 함수 포인터로 출력
	printf("%d \n", (fct(5, 7)) );

	// 변수 함수 포인터로 출력
	printf("%d \n", (fptr(10, 15)) );


	// 함수 포인터 선언하기.
	// 자료형: char * (케릭터 포인터형을 매개변수로 받고, return값은 없다)
	void(*ptrstring)(char *);

	// ptrstring -> ShowString함수를 가리킴.
	ptrstring = ShowString;

	ShowString(str);
	ptrstring(str);

	return 0;
}

/*
	fct 는  '상수' 함수포인터 이름이 될 수 있다! (변경 불가)
	fptr 은 '변수' 함수포인터 이름이 될 수 있다! (변경 가능)
*/