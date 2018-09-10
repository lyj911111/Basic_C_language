#include <stdio.h>
#include <string.h>

/*
	함수형태: unsigned int strlen(const char * s)
	용도	: s의 string 의 길이를 반환함. 
			  ex) strlen(str) 아래 의 경우, NULL 문자를 제외한 7을 반환함.
*/

// 예제 작성.

void RemoveBSN(char str[])
{
	int len = strlen(str);								//	len에는 'Enter키'포함, NULL문자 빼고, 7이 저장됨. [123456'\n']
	str[len - 1] = 0;									//	str[7-1] = str[6] 자리에 0을 대입. 즉, 'Enter키' 자리에 0을 대입하여 
}														//	문자열을 6에서 끝냄.

int main()
{
	char str[100];										
	printf("문자열 입력: ");
	fgets(str,sizeof(str),stdin);						//	키보드로 부터 입력 받음 ,123456 를 입력하면
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	RemoveBSN(str);										//	위에 함수 작동.

	printf("길이: %d, 내용: %s \n", strlen(str), str);	//	함수 작동 전과 후 비교해보기.
	return 0;
}







/*
int main()
{
	char str[] = "1234567";
	printf("%u \n", strlen(str));	// %u 는 unsigned int값을 출력하는데 사용, 
									// 그러나 이 경우 %d 로 충분히 표현 가능.
									// %u 와 %d 의 출력할 수 있는 값의 차이는 있지만, 큰 값이 아니므로 상관 없다.
}
*/