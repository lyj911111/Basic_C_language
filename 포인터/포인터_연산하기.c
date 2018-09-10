#include <stdio.h>

/*
포인터의 연산
메모리 접근 연산기호 : *ptr , ptr[]	, + , -


*/
#define problem 2		//	내가 볼 예제 입력.


#if problem == 1
int main()
{
	int arr[3];
	int * ptr = arr;	//	ptr이 배열의 첫번째 주소를 가리킴, 즉 서로 같은 배열을 공유.

	*ptr = 10;			//	첫번째 배열에 10을 대입.
	ptr++;				//	int형 포인터 이므로 +4가 이루어짐. 즉 배열의 2번째로 이동함.
	*ptr = 20;			//	2번째 배열에 20이 대입됨.
	ptr++;				//	또다시 +4가 이루어지고 즉, 3번째 배열로 이동이됨.
	*ptr = 30;			//	세번째 배열에 30이 채워짐.

	printf("[%d, %d, %d]\n", arr[0], arr[1], arr[2]);		//	배열값을 확인해보면, 내부가 채워져있음을 확인

	ptr -= 2;			//	현재 3번째 배열을 가리키고있는 포인터에 -2를 함으로써 다시 첫번째로 보냄. 즉, -8이 연산됨.

	printf("[%d, %d, %d]\n", ptr[0], ptr[1], ptr[2]);

	return 0;
}
#endif

#if problem == 2

int main()
{
	int arr[3] = { 11,22,33 };
	int * ptr = arr;			//	arr와 ptr 동기화

	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));	//	첫번째 배열으로부터 +4(int) 씩 포인터 연산

	// 배열값을 뒤로 한칸씩 증가. ptr++ 연산으로.
	printf("%d \n",*ptr);
	ptr++;
	printf("%d \n", *ptr);
	ptr++;


	// 배열값을 다시 앞으로 한칸씩 이동. ptr-- 연산으로.
	printf("%d \n", *ptr);
	ptr--;
	printf("%d \n", *ptr);
	ptr--;
	printf("%d \n", *ptr);
	ptr--;

	return 0;
}
#endif // 2



