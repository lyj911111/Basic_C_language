#include <stdio.h>
#include <string.h>

/*
	함수 원형:
	char * strcpy(char * dest, const char * src);				//	src에 문자열을, dest의 문자열에 복사한다.
	char * strncpy(char * dest, const char * src, size_t n);	//	위와 같으나, n개의 길이로 최대 길이를 제한.

*/

//예제.
int main()
{
	char str1[30] = "simple string";	//	str1 의 string을 str2 으로 복사할 예정임.
	char str2[30];

	strcpy(str2, str1);

	printf("%s", str2);

	return 0;
}