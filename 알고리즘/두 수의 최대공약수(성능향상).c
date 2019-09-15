/*
	최대공약수 구하기 알고리즘(성능 개선 모드)
	2개 값 입력, 최대 공약수 출력 함수

	알고리즘:
		1. v가 0이 아니면,
			1.1. u = u % v
			1.2. u와 v를 교환
			1.3. 1으로 돌아감.
		2. v가 0이면 u가 최대공약수
*/

#include<stdio.h>

int GCD(void) {
	int u = 0;
	int v = 0;
	int temp = 0;
	int result = 0;

	printf("2개의 값을 입력하시오.\n");
	printf("a:");
	scanf_s("%d", &u);
	printf("b:");
	scanf_s("%d", &v);

	while(v != 0)	// v가 0이 아니면 무한 반복
	{
		u = u % v;	// 1.1.
		temp = v;	// 1.2.
		v = u;
		u = temp;
	}
	result = u;		// 2.

	return result;
}

int main(void)
{
	int result;
	result = GCD();
	printf("최대공약수는: %d", result);

	return 0;
}