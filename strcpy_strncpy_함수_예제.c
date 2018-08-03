#include <stdio.h>
#include <string.h>

/*
	�Լ� ����:
	char * strcpy(char * dest, const char * src);				//	src�� ���ڿ���, dest�� ���ڿ��� �����Ѵ�.
	char * strncpy(char * dest, const char * src, size_t n);	//	���� ������, n���� ���̷� �ִ� ���̸� ����.

*/


/*
//���� 1.
int main()
{
	char str1[30] = "simple string";	//	str1 �� string�� str2 ���� ������ ������.
	char str2[30];

	//strcpy(str2, str1);
	strncpy(str2, str1, sizeof(str2));	//	str1�� ����� ���ڿ��� str2�� �����ϵ�, str2�� �ִ� ũ��� sizeof(str2)�� ��ȯ�� ��ŭ���� �����ض�.
										//	str2���� ũ�⺸�� Ŀ����, �޸� ħ���� �̷������ ������, �������� ��� �����!

	printf("%s", str2);

	return 0;
}*/

//���� 2.
int main()
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	//case1
	strcpy(str2, str1);
	puts(str2);

	//case2
	strncpy(str3, str1, sizeof(str3));		//	�ǵ�: str1�� ���ڿ� ���̸� str3�� ���ڿ� ���� ��ŭ�� �����ϰڴٴ� �ǵ�. ��,1234��.
	puts(str3);							// ���: [12345]������ ����ϰ�, '\0'���ڸ� ���������� ������ ���� ����ؼ� �����.

	//case3
	strncpy(str3, str1, sizeof(str3) - 1);	//	�� �������ڸ��� ���� ���縦 �϶�! (Null�� �� ���� �����ϱ� ����)
	str3[sizeof(str3) - 1] = 0;			//	str[5-1] = str[4], ��, ���ڿ��� ������ �ڸ��� 0�� ����. ���ڿ��� ����.

	puts(str3);

	return 0;
}