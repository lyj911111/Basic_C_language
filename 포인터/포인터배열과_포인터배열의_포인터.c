#include <stdio.h>
/*
	포인터 배열과 포인터배열의 포인터형.
	int * arr1[20];
	int * arr2[30]; 과 같은것.

	int arr1[3]; 에서 arr의 자료형은 (*int)이다, 왜? 배열의 첫번쨰를 가리키고, 그 자료형은 int 이므로.
	int * arr1[20]; 에서 arr1의 자료형은 int* * 이다. 왜? arr1 의 자료형이 int* 이고, 그 앞에 int*가 있으므로 int **

*/

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int * ptr3 = &num3;

	// 배열의 선언의 자료형이 int* 이므로, 배열 내에 들어갈 인자는 int* 형이 되어야 함
	int * ptrArr[] = {ptr1, ptr2, ptr3};
	/*				   ptrArr	
		ptr1 -> num1 <-[ 0 ]	
		ptr2 -> num2 <-[ 1 ]
		ptr3 -> num3 <-[ 2 ]
								이런식의 포인터가 선언됬다는 것임.
	*/


	// ptrArr은 기본적으로 *int 자료형이고, 앞에 선언한 자료형이 int* 이므로, ptrArr 자체는 int** 자료형임.
	int** dptr = ptrArr;
	// 배열에 포인터를 선언하여 같은 첫번째 주소값을 공유함. 포인터를 배열 처럼 사용할 수 있다.

	dptr[0] = 10;
	dptr[1] = 20;
	dptr[2] = 30;

	printf("%d %d %d \n", dptr[0], dptr[1], dptr[2]);

	return 0;
}