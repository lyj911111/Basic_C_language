#include <stdio.h>
#include <stdlib.h>

/*
	문자열을 반환하는 동적할당 예제
*/

// 이 함수는 호출될때마다 새로운 메모리 공간이 할당되고, 이 메모리공간은 함수를 빠져나간 후에도 소멸되지 않는다.
char * ReadUserName(void)
{
	char * name = (char*)malloc(sizeof(char) * 30);	//	char형 x 30, 즉 30byte를 heap영역에 할당, (char *) 으로 자료형 변환
	printf("what's your name? ");					//	* name 이  30byte의 메모리를 가리키는 포인터가 된다.
	gets(name);	
	return name;
}

int main(void)
{
	char * name1;									 
	char * name2;

	name1 = ReadUserName();				//	함수에서 반환된 char * 를 name1의 메모리에 저장
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name1: %s \n", name2);

	printf("again name1: %s \n", name1);
	printf("again name2: %s \n", name2);

	free(name1);
	free(name2);

	// 메모리 공간이 소멸되었으므로, 쓰레기값이 나옴.
	printf("again name1: %s \n", name1);
	printf("again name2: %s \n", name2);

	return 0;
}