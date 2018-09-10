#include <stdio.h>
#include <string.h>

/*
	메모리 관련 함수들.
	memcpy( a , b , sizeof() )  :  메모리 b를 a로 복사. 메모리의 사이즈 값을 전달해주어야함.
	memcmp( a , b , sizeof() )  :  메모리 a와 b를 비교, 같을시 0을 출력. 메모리 사이즈를 전달해야 함.
	memset( a , 0 , sizeof() )  :  메모리 a를 0으로 초기화 또는 어떤값으로 초기화 시킬 수 있음. 메모리 사이즈를 전달해야함.
*/
int main()
{
	char mems1string[12];
	char mems2string[12] = "Sky is blue";
	
	//memory copy, mem2에 있는 문자열 주소값을을 mem1로 옮김. (문자열 '\0'포함 (char형)12개가 전달됨)
	memcpy(mems1string, mems2string, sizeof(mems1string));
	printf("%s \n",mems1string);

	//memory compare, 비교 (비교대상1, 비교대상2, 메모리크기(size) )
	//서로 같을 시, 0값이 출력.
	printf("%d \n", memcmp( mems2string, mems2string, sizeof(mems2string)));

	//memory set (Destination, '초기화값', 사이즈)
	//맨 앞부터 4자리까지 'x'로 채워짐.
	//보통 메모리 초기화로 쓰임. 0을 대입해서.
	printf("%s \n", memset( mems2string,'x',5));
	printf("%s \n", memset( mems2string,0, sizeof(mems2string)));	// <- 이와같이 쓰임.
	return 0;
}