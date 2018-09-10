#include <stdio.h>

/*
	더블포인터 **ptr

	더블 포인터를 이용해 
	swapIntptr 함수 만들기.

	num1 -> num2 값으로,
	num2 -> num1 값으로,
*/

void SwapIntPtr(int* * p1, int* * p2)	//	주소값의 인자를 받기 위해
										//  (*p1)의 자료형 int*, ptr1에 저장하기 위해서는 자료형이 같아야 한다.
{
	int * temp = *p1;	//	*p1 = ptr1 을 의미, ptr1의 주소를 temp에 저장.
	*p1 = *p2;			//	ptr2의 주소를 ptr1에 저장.
	*p2 = temp;			//	*p2 = ptr2 이고, ptr2의 자료형은 (int *) 이므로 temp의 자료형과 같아서 대입 가능.
}

int main()
{
	int num1 = 10, num2 = 20;		
	int * ptr1 = NULL;
	int * ptr2 = NULL;	//	포인터 초기화
	
	ptr1 = &num1, ptr2 = &num2;

	SwapIntPtr(&ptr1, &ptr2);	//	함수를 통해 값을 변경하려면, 그 주소값을 인자로 전달해야함.

	/*
		즉, p1 -> ptr1 -> num1 을 가리키고,
			p2 -> ptr2 -> num2 를 가리킴.
	*/


	printf("num1: %d\n num2: %d \n", *ptr1, *ptr2);

	return 0;
}