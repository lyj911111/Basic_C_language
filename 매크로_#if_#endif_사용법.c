#include <stdio.h>

/*
	���Ǻ� ������ ��ũ��.
	��, ���ǿ� ������ ������ �ϰ� ���� ������ ������ ��󿡼� ����!
*/

#define ADD 0	//	�̰����� TRUE �� ����� ��. ������ ��� ����.
#define MIN 1	//	FALSE �� ��� ���忡�� ��������.

int main()
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

// �������� ���ĵǴ� ����? �����Ϸ� ����Ǵ� ���� �ƴ϶�, label, �� ����Ʈ��ó�� ǥ���� �ִ� ���̶� ����.
#if ADD		// ADD �� 1�̸�, ����.
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#if MIN
	printf("%d + %d = %d \n", num1, num2, num1 - num2);
#endif


	return 0;
}