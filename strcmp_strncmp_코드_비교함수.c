#include <stdio.h>
#include <string.h>

// String Compare 문자열 비교 함수 (같은가? 다른가?)
/*

	함수 원형:
	int strcmp(const * s1, const * s2);					왼쪽이크면 0보다 큼, 오른쪽이 크면 0보다 작음.
	int strncmp(const * s1, const * s2, sizt_t n);		n값 비교할 문자열의 갯수.(몇번째 자리까지?)

	-> 두 문자열이 같으면 0을 반환, s1이 크면 0보다 큰값 반환, s2가 크면 0보다 작은값을 반환. 
		값의 크고작음은 '아스키코드 값'에 근거함.
		값의 크기는 알 수 없다. 0보다 크고 작음을 이용해야함.

		A: 0x41		알파벳이 클수록 값이 큼.   a : 0x61 소문자가 대문자보다 값이 큼. (아스키 코드표 참고) 
		B: 0x42								   b : 0x62
		C: 0x43								   c : 0x63
		D: 0x44								   d : 0x64

		맨앞에 부터 비교하면서 문자열이 크면 이미 판명이 나버림.
*/

//	대부분 문자열 비교할 때만 사용함. 비교하기보다 같은지 다른지 사용함.


/*
// 예제 1.
int main()
{
	printf("%d \n", strcmp("ABCD", "ABCD"));		//	같으므로 0을 반환

	printf("%d \n", strcmp("ABCD", "ABCC"));		//	C < D 이므로 s1이 값이큼. 0보다 큰값 반환.				(왼쪽이 큼)
	printf("%d \n", strcmp("ABCD", "ABCDE"));		//	ABCD까지 같으나, E값이 나와서 s2가 더 큼. 0보다 작은값 반환.(오른쪽이 큼)

	return 0;
}
*/


// 예제 2.
int main()
{
	char str1[20];
	char str2[20];

	printf("문자열 입력 1: ");
	scanf("%s", str1);

	printf("문자열 입력 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))		// str1, str2가 같으면 0이 출력 그럼 False가 되는데, !(not)을 붙임으로 써 True를 만들어서 if 내부를 실행 시킴.
	{
		puts("두 문자열은 완벽히 동일합니다.");
	}
	else
	{
		puts("두 문자는 동일하지 않습니다.");

		if (!strncmp(str1, str2, 3))				//	str1, str2 의 3번째 까지 문자를 비교해 일치하면 0을 반환하는데 if(False),그러나 !을 만나서 if(TRUE) 이므로 내부를 실행함.
			puts("그러나 앞 세글자는 동일합니다.");
	}

}