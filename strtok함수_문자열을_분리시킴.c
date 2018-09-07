#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	문자열을 (공백, 콤마 등)으로 구분문자 ,영어로 delimiter단위 처리
	의미있는 하나의 단어를 Token이라고 함.

	문자열을 분리시키는 strtok() 함수 쓰는법.
*/
int main()
{
	char srcString1[] = "Sky is blue";		//	입력에 의거한 메모리 할당.
	char srcString2[] = "Data,is,data";		//	,로 분리한 문자열 할당.

	char * tokenPtr1;

	char * delimiter1 = " ";


	// token 단위 분리해주는 함수.
	tokenPtr1 = strtok(srcString1,delimiter1);	//	공백으로 분리후 tokenPtr1에 단어 한개씩 저장.


	while (tokenPtr1 != NULL)
	{
		printf("%s \n",tokenPtr1);
		tokenPtr1 = strtok(NULL, delimiter1);

	}

	return 0;
}