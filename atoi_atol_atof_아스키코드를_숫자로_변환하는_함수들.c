#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	atoi �Լ�,  atol �Լ�,  atof�Լ�

	�Լ� ����:
	int atoi(const char * str);			Aschii�ڵ� -> int
	iong atol(const char * str);		Aschii�ڵ� -> long
	double atof(const char * str);		Aschii�ڵ� -> float  ��ȯ

	�� ����!
		�� �Լ����� ��� stdlib.h �� ���ǵǾ� �����Ƿ� �ҷ��;� �� !!!!!!!!!!!!!!

*/

//����.
int main()
{
	char str[20];
	printf("�����Է�: ");
	scanf("%s", str);

	printf("%d \n", atoi(str));

	printf("�Ǽ��Է�: ");
	scanf("%s", str);

	printf("%g \n", atof(str));

	return 0;
}