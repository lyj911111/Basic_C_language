#include <stdio.h>

/*
	������ ������ �̷���� �迭. ��, ������ �迭
	��) int * arr[3];
	��) double * arr[4];

*/

#define pro 2 // ������ �ϴ� ���� ���� �Է�.


// �� ���ڿ��� �����ϴ� ������ �迭 !!!!!!!!!!!!!!!!!!!
#if pro == 2
int main()
{
	// �ּҰ��� ���� �� �ִ� �����ͺ��� strArr ��.
	char * strArr[3] = { "Simple","String","Array" };	//	���� �޸𸮿� "~~~" ���ڿ��� �����ǰ�, ù��° ���ĺ��� �ּҰ��� ��ȯ��. ��, �迭���� {0xXX, 0xYY, 0xZZ} ���� �ּҰ��� ���ϰ� ����.
													  // [Char�� ���� �ּҰ�]�� 3���� ���� �� �ִ� �޸� ������ ������ ���̴�.
	printf("%s \n", strArr[0]);		// strArr[0] �� "Simple"�� �Ǿ� 'S'�� �ּҰ��� ��Ī�Ѵ�.
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);

	return 0;
}
#endif


// ������ �迭�� �⺻���� ����.
#if pro == 1
int main()
{
	int num1 = 10, num2 = 20, num3 = 30;

	int arra[3] = { num1, num2, num3 };

	printf("%d \n", arra[0]);
	printf("%d \n", arra[1]);
	printf("%d \n", arra[2]);

	int * arr[3] = { &num1, &num2, &num3 };	//	arr[3] �� �迭 �� index�� (int *) �ּҰ��� ��ڴ�.

	printf("%d \n", *arr[0]);	//arr�� ù��° index�� ����Ű�� �ִ� �ּ��� ���� �аڴ�.
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);

	return 0;
}
#endif

