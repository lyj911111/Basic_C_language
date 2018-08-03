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

	//strcpy(str2, str1);
	strncpy(str2, str1, sizeof(str2));	//	str1에 저장된 문자열을 str2로 복사하되, str2의 최대 크기는 sizeof(str2)의 반환값 만큼으로 한정해라.
										//	str2값의 크기보다 커지면, 메모리 침범이 이루어지기 때문에, 안정적인 사용 방법임!


	printf("%s", str2);

	return 0;
}