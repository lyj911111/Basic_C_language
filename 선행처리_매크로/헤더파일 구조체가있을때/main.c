/*
	����ü�� ������Ͽ� �����ϰ�
	�ʿ��Ҷ� ȣ���ؼ� ����Ѵ�.
*/

#include <stdio.h>
#include "struct.h"

extern Div IntDiv(int num1, int num2);	//	�ܺξ�� Div IntDiv�Լ��� �ִٴ� ���� �˷���

int main()
{
	Div val = IntDiv(5, 2);				//	���������� �ϱ⶧���� ����ü�� �ʿ��ϴ�.
	printf("��: %d \n", val.quotient);
	printf("������: %d \n", val.remainder);

	return 0;
}