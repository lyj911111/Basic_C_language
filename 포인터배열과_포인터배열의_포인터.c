#include <stdio.h>
/*
	������ �迭�� �����͹迭�� ��������.
	int * arr1[20];
	int * arr2[30]; �� ������.

	int arr1[3]; ���� arr�� �ڷ����� (*int)�̴�, ��? �迭�� ù������ ����Ű��, �� �ڷ����� int �̹Ƿ�.
	int * arr1[20]; ���� arr1�� �ڷ����� int* * �̴�. ��? arr1 �� �ڷ����� int* �̰�, �� �տ� int*�� �����Ƿ� int **

*/

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int * ptr3 = &num3;

	// �迭�� ������ �ڷ����� int* �̹Ƿ�, �迭 ���� �� ���ڴ� int* ���� �Ǿ�� ��
	int * ptrArr[] = {ptr1, ptr2, ptr3};
	/*				   ptrArr	
		ptr1 -> num1 <-[ 0 ]	
		ptr2 -> num2 <-[ 1 ]
		ptr3 -> num3 <-[ 2 ]
								�̷����� �����Ͱ� ������ٴ� ����.
	*/


	// ptrArr�� �⺻������ *int �ڷ����̰�, �տ� ������ �ڷ����� int* �̹Ƿ�, ptrArr ��ü�� int** �ڷ�����.
	int** dptr = ptrArr;
	// �迭�� �����͸� �����Ͽ� ���� ù��° �ּҰ��� ������. �����͸� �迭 ó�� ����� �� �ִ�.

	dptr[0] = 10;
	dptr[1] = 20;
	dptr[2] = 30;

	printf("%d %d %d \n", dptr[0], dptr[1], dptr[2]);

	return 0;
}