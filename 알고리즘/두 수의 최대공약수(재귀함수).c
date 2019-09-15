/*
	최대공약수 구하기 알고리즘(Recursive Function 모드 (재귀함수))
	2개 값 입력, 최대 공약수 출력 함수

	알고리즘:
		1. v가 0이 아니면,
			1.1. u = u % v
			1.2. u와 v를 교환
			1.3. 1으로 돌아감.
		2. v가 0이면 u가 최대공약수
*/

#include<stdio.h>

int GCD_recursion(int u, int v) {
	
	if (v == 0)
		return u;
	else
		return GCD_recursion(v, u % v);
}

int main(void)
{
	int u, v, result;
	
	printf("2개의 값을 입력하시오.\n");
	printf("a:");
	scanf_s("%d", &u);
	printf("b:");
	scanf_s("%d", &v);

	result = GCD_recursion(u, v);
	printf("최대공약수는: %d", result);

	return 0;
}