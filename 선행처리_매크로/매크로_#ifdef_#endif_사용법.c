#include <stdio.h>

/*
	#ifdef �� ���Ǹ� �Ǿ��־ �����Ͽ� ���Եǰ�,
	���ǰ� ������ ������ �������� ����. "���� ���Ǹ� �Ǿ��־" �����Ͽ� ����.
*/

#define ADD 0	//	#define ADD
#define MIN 1	//	#define MIN  ���θ� �����ص� ��!!!! (�ڰ� �ʿ� ����)

#define MUL		
#define DIV

int main()
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);


#ifdef ADD		// ��ũ�� ADD�� ���� �Ǿ������� �����϶�!! �ڿ� ���� �����̵� �������. �׳� ���ǰ� �Ǿ��־ ����.
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

#ifdef MUL
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
#endif

#ifdef DIV
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
#endif

	return 0;
}