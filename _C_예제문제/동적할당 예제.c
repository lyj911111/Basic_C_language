#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	메모리할당 Malloc & free 함수 예제, 테스트.

*/

#define test 2

#if test==1
int main()
{
				//casting 생략해도 되긴함.
	float * ptr = malloc(sizeof(float));			// Heap 데이터 영역을 차지.
	*ptr = 3.14;

	printf("float size is : %d \n", sizeof(float));
	printf("Data is %f \n ", *ptr);
	printf("Address is %p \n \n", ptr);

	free(ptr);										//	Heap 데이터 영역을 해제

	printf("After free() Data is %f \n", *ptr);
	printf("After Address is %p \n", ptr);			//	주소는 그데로?
	/*
	*ptr = 1.23;
	printf("After free() Data is %f \n", *ptr);
	printf("After Address is %p \n", ptr);
	*/
	return 0;
}
#endif

void Customized_String_Copy(char * dst, char * src)	//	destination, source
{
	do
	{
		*dst++ = *src++;		//	source의 코드를 destination 코드에 넘겨라
	} while (*src);				//	source에 '\0' 이 들어오면 끝내라.
	*dst = '\0';				//	destination 의 문자열 마지막에 '\0'을 넣음.
}

int main()
{
	char ch[4] = { 'A','B','C','\0'};	//	배열을 쓸때 항상 \0을 염두해두기
	char st[4] = { "ABC\0" };
	char * ptr = "ABC";					//	포인터는 '\0'이 자동으로 생성되므로 쓸필요 없음.

					  //casting		// '\0'이 들어갈 공간 마련
	char * ptrMalloc = (char *)malloc(strlen(ptr)+1);	//	ptr의 길이만큼 Heap영역에 메모리 할당. 그 메모리의 주소를  ptrMalloc 포인터가 가리킴.
	Customized_String_Copy(ptrMalloc, ptr);			//	ptr의 문자열을 Heap영역에 할당한 ptrMalloc에 넣음.

	printf("character[0]: %c \n", ch[0]);
	printf("string[0]: %c \n", st[0]);
	printf("ptr의 첫번째: %c \n",*(ptr+0));								//	포인터의 첫번째 문자.
	printf("\n");

	printf("문자열출력 ch: %s \n", ch);
	printf("문자열출력 st: %s \n", st);
	printf("문자열출력 pointer String: %s \n", ptr);
	printf("\n");
	printf("동적 할당시킨 메모리의 문자열 출력: %s \n", ptrMalloc);


	free(ptrMalloc);								//	동적할당 메모리 해제

	return 0;
}







