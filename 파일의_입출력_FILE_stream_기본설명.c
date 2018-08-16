#include <stdio.h>

/*
	fopen() 함수    (file open 함수)
	파일 이름으로 인자전달.
	*/
#ifdef
	int main(void)
	{
		FILE * fp1
			= fopen("fin.dat", ... );  <= 이처럼 "fin.dat"이라는 파일이름을 인자로 전달.
	}
#endif
/*

	fopen함수는 실질적으로 stream의 형성을 OS에게 요청하는 함수!.
	운영체제(OS)가 허용하면, Read & Write를 할 수 있도록 만듦.

	FILE은 표준 C 에서 정의한 구조체. 를 기반으로 한 pointer변수 fp1.
	즉, < fp1 -> FILE 구조체 변수 > 을 가리키고 있음.

	FILE구조체도, 결국 OS가 stream을 원활하게 만들기 위한 하나의 Resource(자원)으로 생성한 것임.

	포인터 fp1을 이용하여 파일에 접근!!

	FILE * fopen(const char * filename, const char * mode);

			(스트림을 형성할 파일 이름, 형성할 스트림의 종류) 를 fopen에 전달.
	** fopen함수가 호출되면, FILE 구조체 변수가 생성됨!
	** 생성된 FILE구조체 변수에는 '파일에 대한 정보'가 담긴다.
	** FILE 구조체의 포인터는 ex) fp1 은 사실상 파일을 가리키는 '지시자'의 역할을 한다.

*/
int main()
{

}