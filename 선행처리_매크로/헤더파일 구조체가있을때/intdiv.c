/*
	intdiv.c ���Ͽ����� struct�� �ִ� ��������� �ҷ��ͼ�
	�� ��������� struct�� ������ �Լ��� �����.

	��, ����ü�� ���� ������Ͽ� ����ü������ �ϰ� 
	�ʿ��� ��� .c ���Ͽ��� �ҷ��� ����Ѵ�.
*/

#include "struct.h"

Div IntDiv(int num1, int num2)
{
	Div dval;
	dval.quotient = num1 / num2;
	dval.remainder = num1 % num2;

	return dval;
}
