#include <stdio.h>
#include <string.h>

/*
	�Լ�����: unsigned int strlen(const char * s)
	�뵵	: s�� string �� ���̸� ��ȯ��. 
			  ex) strlen(str) �Ʒ� �� ���, NULL ���ڸ� ������ 7�� ��ȯ��.
*/


int main()
{
	char str[] = "1234567";
	printf("%u \n", strlen(str));	// %u �� unsigned int���� ����ϴµ� ���, 
									// �׷��� �� ��� %d �� ����� ǥ�� ����.
									// %u �� %d �� ����� �� �ִ� ���� ���̴� ������, ū ���� �ƴϹǷ� ��� ����.
}