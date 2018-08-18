#include <stdio.h>
#include <stdlib.h>

/*
	heap영역으로 접근 동적 메모리할당 기본예제
*/

int main(void)
{
	// heap영역에 메모리 할당하기.
	int * ptr1 = (int *)malloc(sizeof(int));		//	ptr1에 4byte(int메모리크기)로 메모리를 할당
	int * ptr2 = (int *)malloc(sizeof(int) * 7);	//	ptr2에 4byte x 7= 28 byte의 메모리를 할당
	
	int i;

	*ptr1 = 20;			//	ptr1 에 값을 저장.

	for (i = 0; i < 7; i++)
	{
		ptr2[i] = i + 1;
	}
	printf("%d \n", *ptr1);

	for (i = 0; i < 7; i++)
	{
		printf("%d ", ptr2[i]);
	}

	free(ptr1);		//	이순간 ptr1의 메모리가 소멸됨.
	free(ptr2);

	// 메모리 할당 디버깅에 쓰는 코드!!
	if (ptr1 == NULL)
	{ 
		// 이곳은 메모리 할당 실패에 따른 오류 처리...
		// 메모리 할당을 하다보면, free로 메모리를 해제해주어야 하는데,
		// 실수로 해제를 해주지 않으면, 메모리가 꽉차 메모리 오류가 발생할 수 도있다.
		// 이를 예방해주기 위해서 malloc함수가 실패하면, NULL을 반환하는데,
		// 이 값을 이용해 오류를 처리한다.
	}

	return 0;
}

/*
	free 함수를 호출하지 않으면?
	 -> 할당된 메모리 공간은 resource를 계속 차지함.

	malloc함수와 free함수는 항상 쌍을 이루는 습관을 갖도록 한다.

*/