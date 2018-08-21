#include <stdio.h>

/*
	포인터 변수로 이루어진 배열. 즉, 포인터 배열
	예) int * arr[3];
	예) double * arr[4];

*/

#define pro 2 // 보고자 하는 예제 문제 입력.


// ※ 문자열을 저장하는 포인터 배열 !!!!!!!!!!!!!!!!!!!
#if pro == 2
int main()
{
	// 주소값을 담을 수 있는 포인터변수 strArr 임.
	char * strArr[3] = { "Simple","String","Array" };	//	임의 메모리에 "~~~" 문자열이 생성되고, 첫번째 알파벳의 주소값이 반환됨. 즉, 배열에는 {0xXX, 0xYY, 0xZZ} 같은 주소값을 지니고 있음.
													  // [Char형 변수 주소값]을 3개만 담을 수 있는 메모리 공간을 마련한 것이다.
	printf("%s \n", strArr[0]);		// strArr[0] 은 "Simple"의 맨앞 'S'의 주소값을 지칭한다.
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);

	return 0;
}
#endif


// 포인터 배열의 기본적인 연습.
#if pro == 1
int main()
{
	int num1 = 10, num2 = 20, num3 = 30;

	int arra[3] = { num1, num2, num3 };

	printf("%d \n", arra[0]);
	printf("%d \n", arra[1]);
	printf("%d \n", arra[2]);

	int * arr[3] = { &num1, &num2, &num3 };	//	arr[3] 의 배열 내 index에 (int *) 주소값을 담겠다.

	printf("%d \n", *arr[0]);	//arr의 첫번째 index가 가리키고 있는 주소의 값을 읽겠다.
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);

	return 0;
}
#endif

