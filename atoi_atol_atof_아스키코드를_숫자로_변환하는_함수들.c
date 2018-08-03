#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	atoi 함수,  atol 함수,  atof함수

	함수 원형:
	int atoi(const char * str);			Aschii코드 -> int
	iong atol(const char * str);		Aschii코드 -> long
	double atof(const char * str);		Aschii코드 -> float  변환

	※ 주의!
		이 함수들은 모두 stdlib.h 에 정의되어 있으므로 불러와야 함 !!!!!!!!!!!!!!

*/

//예제.
int main()
{
	char str[20];
	printf("정수입력: ");
	scanf("%s", str);

	printf("%d \n", atoi(str));

	printf("실수입력: ");
	scanf("%s", str);

	printf("%g \n", atof(str));

	return 0;
}