#include <stdio.h>
#include <string.h>

// String concatenation ���ڿ��� ����, ���� �Ѵ�. (���ڿ��� �����δ�.)
/*

	�Լ� ����:
	char * strcat(char * dest, const char * scr);
	char * strcat(char * dest, const char * scr, size_t n);

	-> ���ٿ��� ���ڿ��� �ּ� �� ��ȯ

*/

int main()
{
	char str1[30] = "First~";
	char str2[30] = "Second";

	puts(str1);					//	���̱� ��.
	strcat(str1,str2);			//	str1 �ڿ� str2�� �̾� ����. [First~'\0']���� NULL �ڸ��� str2�� ä��� NULL�� �� �ڷ� ����.								
	puts(str1);					//	���̱� ��.
								//	**���ǻ���: str1 �� str2�� �� ����� �迭������ ���� �־�� �ڿ� ä����.


	return 0;
}