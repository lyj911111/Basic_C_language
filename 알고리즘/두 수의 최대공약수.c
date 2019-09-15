/*
	최대공약수 구하기 알고리즘
	2개 값 입력, 최대 공약수 출력 함수

	알고리즘:
		1. v가 u보다 크면 v와 u값을 바꾼다.
		2. u = u - v
		3. u가 0이면 v가 최대공약수. 아니면 다시 처음으로 돌아간다.
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

	while(1)
	{
		if (v > u) {
			temp = u;
			u = v;			// 1. v가 u보다 크다면, v와 u값을 바꾼다.
			v = temp;

			u = u - v;		// 2. 
		}
		else {
			u = u - v;
		}

		if (u == 0)
		{
			result = v;		// 3. u가 0이면 v가 최대공약수
			break;
		}
	}
	return result;
}

int main(void)
{
	int result;
	result = GCD();
	printf("최대공약수는: %d", result);

	return 0;
}