#include <stdio.h>
#include <string.h>

/*
	�Լ� ����:
	char * strcpy(char * dest, const char * src);				//	src�� ���ڿ���, dest�� ���ڿ��� �����Ѵ�.
	char * strncpy(char * dest, const char * src, size_t n);	//	���� ������, n���� ���̷� �ִ� ���̸� ����.

*/

//����.
int main()
{
	char str1[30] = "simple string";	//	str1 �� string�� str2 ���� ������ ������.
	char str2[30];

	//strcpy(str2, str1);
	strncpy(str2, str1, sizeof(str2));	//	str1�� ����� ���ڿ��� str2�� �����ϵ�, str2�� �ִ� ũ��� sizeof(str2)�� ��ȯ�� ��ŭ���� �����ض�.
										//	str2���� ũ�⺸�� Ŀ����, �޸� ħ���� �̷������ ������, �������� ��� �����!


	printf("%s", str2);

	return 0;
}