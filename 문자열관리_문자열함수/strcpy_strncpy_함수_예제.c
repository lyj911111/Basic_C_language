#include <stdio.h>
#include <string.h>

/*
	함수 원형:
	char * strcpy(char * dest, const char * src);				//	src에 문자열을, dest의 문자열에 복사한다.
	char * strncpy(char * dest, const char * src, size_t n);	//	위와 같으나, n개의 길이로 최대 길이를 제한.

*/


/*
//예제 1.
int main()
{
	char str1[30] = "simple string";	//	str1 의 string을 str2 으로 복사할 예정임.
	char str2[30];

	//strcpy(str2, str1);
	strncpy(str2, str1, sizeof(str2));	//	str1에 저장된 문자열을 str2로 복사하되, str2의 최대 크기는 sizeof(str2)의 반환값 만큼으로 한정해라.
										//	str2값의 크기보다 커지면, 메모리 침범이 이루어지기 때문에, 안정적인 사용 방법임!

	printf("%s", str2);

	return 0;
}*/

//예제 2.
int main()
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	//case1
	strcpy(str2, str1);
	puts(str2);

	//case2
	strncpy(str3, str1, sizeof(str3));		//	의도: str1의 문자열 길이를 str3의 문자열 길이 만큼만 복사하겠다는 의도. 즉,1234만.
	puts(str3);							// 결과: [12345]까지는 출력하고, '\0'문자를 만날때까지 쓰래기 값을 계속해서 출력함.

	//case3
	strncpy(str3, str1, sizeof(str3) - 1);	//	맨 마지막자리만 빼고 복사를 하라! (Null이 들어갈 공간 마련하기 위해)
	str3[sizeof(str3) - 1] = 0;			//	str[5-1] = str[4], 즉, 문자열의 마지막 자리에 0을 대입. 문자열을 끝냄.

	puts(str3);

	return 0;
}