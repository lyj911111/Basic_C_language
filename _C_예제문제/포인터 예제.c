#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define problem 3

#if problem == 1
// 인텔이 little endian 인지, Big endian인지 알아보는 프로그램.
// => 리틀엔디언
int main()
{
	int x = 0x12345678;
	unsigned char * xp = (char*)&x;

	printf("바이트 순서는 %x,%x,%x,%x", xp[0], xp[1], xp[2], xp[3]);


	return 0;
}
#endif

#if problem == 2
// 2개의 정수의 합과 차를 동시에 반환하는 함수를 작성하고 테스트 하라.
void set_sum_diff(int x, int y, int * p_sum, int * p_diff)
{
	int sum=0; int diff=0;
	sum = x + y;
	diff = x - y;

	*p_sum = sum;
	*p_diff = diff;
}

int main()
{
	int x, y;
	int p_s = 0;
	int p_d = 0;

	printf("2개의 숫자를 입력하시오. \n");
	scanf("%d %d", &x, &y);

	set_sum_diff(x,y, &p_s , &p_d);

	printf("합은: %d, 차는: %d \n", *(&p_s), *(&p_d));

	return 0;
}
#endif

#if problem == 3
// 정수배열을 받아서 원소들을 난수로 채우는 함수를 작성하로 테스트하라.
void array_fill(int * A, int size)
{
	for (int i = 0; i < size; i++)
	{

	}
}

int main()
{
	srand((unsigned)time(NULL));	//	랜덤함수 기준

	char input = 0;


	return 0;
}
#endif