#include <stdio.h>

/*
	���������� **ptr

	���� �����͸� �̿��� 
	swapIntptr �Լ� �����.

	num1 -> num2 ������,
	num2 -> num1 ������,
*/

void SwapIntPtr(int* * p1, int* * p2)	//	�ּҰ��� ���ڸ� �ޱ� ����
										//  (*p1)�� �ڷ��� int*, ptr1�� �����ϱ� ���ؼ��� �ڷ����� ���ƾ� �Ѵ�.
{
	int * temp = *p1;	//	*p1 = ptr1 �� �ǹ�, ptr1�� �ּҸ� temp�� ����.
	*p1 = *p2;			//	ptr2�� �ּҸ� ptr1�� ����.
	*p2 = temp;			//	*p2 = ptr2 �̰�, ptr2�� �ڷ����� (int *) �̹Ƿ� temp�� �ڷ����� ���Ƽ� ���� ����.
}

int main()
{
	int num1 = 10, num2 = 20;		
	int * ptr1 = NULL;
	int * ptr2 = NULL;	//	������ �ʱ�ȭ
	
	ptr1 = &num1, ptr2 = &num2;

	SwapIntPtr(&ptr1, &ptr2);	//	�Լ��� ���� ���� �����Ϸ���, �� �ּҰ��� ���ڷ� �����ؾ���.

	/*
		��, p1 -> ptr1 -> num1 �� ����Ű��,
			p2 -> ptr2 -> num2 �� ����Ŵ.
	*/


	printf("num1: %d\n num2: %d \n", *ptr1, *ptr2);

	return 0;
}