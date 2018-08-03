#include <stdio.h>
#include <string.h>

// String concatenation 문자열을 연결, 연속 한다. (문자열을 덧붙인다.)
/*

	함수 원형:
	char * strcat(char * dest, const char * scr);
	char * strcat(char * dest, const char * scr, size_t n);

	-> 덧붙여질 문자열의 주소 값 반환

*/

int main()
{
	char str1[30] = "First~";
	char str2[30] = "Second";

	puts(str1);					//	붙이기 전.
	strcat(str1,str2);			//	str1 뒤에 str2를 이어 붙임. [First~'\0']여기 NULL 자리를 str2로 채우고 NULL을 맨 뒤로 보냄.								
	puts(str1);					//	붙이기 후.
								//	**주의사항: str1 이 str2가 들어갈 충분한 배열공간을 갖고 있어야 뒤에 채워짐.


	return 0;
}