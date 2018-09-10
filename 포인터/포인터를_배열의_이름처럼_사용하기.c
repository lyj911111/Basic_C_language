#include <stdio.h>

/*
	포인터를 배열의 이름처럼 사용하기.
	
	포인터 ptr과 배열 arr 이 서로 같은 곳을 가리키도록 만듦!
*/

int main()
{
	int arr[3] = { 15, 30, 55 };
	int * ptr = &arr[0];
  //int * ptr = arr;    같은 문장.	배열의 첫번째 항을 ptr 과 공유.
  //					즉, 서로 같은 arr[0] 의 주소를 가르키고 있음.

	printf("%d %d \n", ptr[0], ptr[1]);
	printf("%d %d \n", arr[0], arr[1]);		//	첫번째, 두번째 index 서로같다.

	printf("%d %d \n", *arr, *ptr);			//	arr이 가리키는 주소에 들어있는 값 표시.
											//	ptr이 가리키는 주소에 들어있는 값 표시.

	return 0;
}
