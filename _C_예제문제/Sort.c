#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#if 1
/* 
	4월 27일 
	과제 1
	입력받은 8자리 정수 내림차순 정렬하기
*/
int main(void)
{
	char input = 0;							// input : rand함수로 부터 입력받는 값
	unsigned int sort_a = 0, sort_b = 0;	// sort_a : 정렬된 정수, sort_b : 입력받은 정수
	unsigned int a = 0, b = 0;				// a, b : 2개의 정수 비교 변수(a - 낮은 자릿수, b- a보다 1자리 높은 자릿수)
	int i = 0, j = 0;						// i, j : for문 조건 변수
	int mask = 0x0000000f;					// mask : 비교한 자릿수를 0으로 채우기 위한 마스크값

	srand((unsigned)time(NULL));

	/*0~9까지 랜덤한 정수를 변수에 입력*/
	for (i = 0 ;i<8 ;i++)
	{
		input = rand() % 10;
	
		sort_b = sort_b << 4;
		sort_b = sort_b + input;

		sort_a = sort_b;
		/*
		printf("%08x\n", sort_b);
		*/
	}

	/*
	printf("\n");
	*/

	/*4bit(nibble) 한자리씩 비교를 위한 for문 */
	for (j = 6 ; j>=0 ;j-- )
	{
		/*각각의 자릿수와 그 앞자릿수를 이동시켜서 a와 b에 저장*/
		for (i = 0; i < j+1; i++)
		{
			a = (sort_a & (15 << i * 4));
			a = a >> i * 4;
			b = (sort_a & (15 << (i + 1) * 4));
			b = b >> (i + 1) * 4;

			/*
			printf("%08x\n", a);
			printf("%08x\n", b);
			*/

			/*a와 b의 값을 비교하여 낮은 자리의 값이 크면 두 자리를 변경*/
			if (a > b)
			{
				sort_a = sort_a & ~(mask << (i + 1) * 4);
				sort_a = sort_a | a << (i + 1) * 4;
				sort_a = sort_a & ~(mask << i * 4);
				sort_a = sort_a | b << i * 4;
			}

			/*
			printf("\n");
			printf("%08x\n", sort_b);
			printf("%08x\n", sort_a);
			*/

		}

		/*
		printf("\n");
		printf("%08x\n", sort_b);
		printf("%08x\n", sort_a);
		*/

	}

	printf("======================\n");
	printf("입력된 정수 : %08x\n", sort_b);
	printf("정렬된 정수 : %08x\n", sort_a);
	printf("======================\n");

	return 0;
	
}


#elif 0
/*
	4월 27일
	과제 2
	입력받은 8자리 정수 홀수, 짝수 나눠서 내림차순 정렬하기
*/
int main(void)
{
	char input = 0;							// input : rand함수로 부터 입력받는 값
	unsigned int sort_a = 0, sort_b = 0;	// sort_a : 정렬된 정수, sort_b : 입력받은 정수
	unsigned int a = 0, b = 0;				// a, b : 2개의 정수 비교 변수(a - 낮은 자릿수, b- a보다 1자리 높은 자릿수)
	int i = 0, j = 0;						// i, j : for문 조건 변수
	int mask = 0x0000000f;					// mask : 비교한 자릿수를 0으로 채우기 위한 마스크값

	srand((unsigned)time(NULL));

	/*0~9까지 랜덤한 정수를 변수에 입력*/
	for (i = 0; i<8; i++)
	{
		input = rand() % 10;

		sort_b = sort_b << 4;
		sort_b = sort_b + input;

		sort_a = sort_b;
		printf("%08x\n", sort_b);
	}

	printf("\n");

	/*4bit(nibble) 한자리씩 비교를 위한 for문 */
	for (j = 6; j >= 0; j--)
	{
		/*각각의 자릿수와 그 앞자릿수를 이동시켜서 a와 b에 저장*/
		for (i = 0; i < j + 1; i++)
		{
			a = (sort_a & (15 << i * 4));
			a = a >> i * 4;
			b = (sort_a & (15 << (i + 1) * 4));
			b = b >> (i + 1) * 4;

			/*
			printf("%08x\n", a);
			printf("%08x\n", b);
			*/

			/*a와 b가 홀수인지 짝수인지 구분하여 홀수이면 왼쪽으로 이동*/
			if (a % 2 > b % 2)
			{
				sort_a = sort_a & ~(mask << (i + 1) * 4);
				sort_a = sort_a | a << (i + 1) * 4;
				sort_a = sort_a & ~(mask << i * 4);
				sort_a = sort_a | b << i * 4;
				/*printf("%08x\n", sort_a);*/
			}

			/*a와 b가 홀수 또는 짝수로 같을 때 내림차순으로 정렬*/
			if (a % 2 == b % 2)
			{
				if (a > b)
				{
					sort_a = sort_a & ~(mask << (i + 1) * 4);
					sort_a = sort_a | a << (i + 1) * 4;
					sort_a = sort_a & ~(mask << i * 4);
					sort_a = sort_a | b << i * 4;
					/*printf("%08x\n", sort_a);*/
				}
			}
		}
	}

	printf("======================\n");
	printf("입력된 정수 : %08x\n", sort_b);
	printf("정렬된 정수 : %08x\n", sort_a);
	printf("======================\n");

	return 0;

}

#endif