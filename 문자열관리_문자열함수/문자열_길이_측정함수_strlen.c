#include <stdio.h>
#include <string.h>

/*
	�Լ�����: unsigned int strlen(const char * s)
	�뵵	: s�� string �� ���̸� ��ȯ��. 
			  ex) strlen(str) �Ʒ� �� ���, NULL ���ڸ� ������ 7�� ��ȯ��.
*/

// ���� �ۼ�.

void RemoveBSN(char str[])
{
	int len = strlen(str);								//	len���� 'EnterŰ'����, NULL���� ����, 7�� �����. [123456'\n']
	str[len - 1] = 0;									//	str[7-1] = str[6] �ڸ��� 0�� ����. ��, 'EnterŰ' �ڸ��� 0�� �����Ͽ� 
}														//	���ڿ��� 6���� ����.

int main()
{
	char str[100];										
	printf("���ڿ� �Է�: ");
	fgets(str,sizeof(str),stdin);						//	Ű����� ���� �Է� ���� ,123456 �� �Է��ϸ�
	printf("����: %d, ����: %s \n", strlen(str), str);

	RemoveBSN(str);										//	���� �Լ� �۵�.

	printf("����: %d, ����: %s \n", strlen(str), str);	//	�Լ� �۵� ���� �� ���غ���.
	return 0;
}







/*
int main()
{
	char str[] = "1234567";
	printf("%u \n", strlen(str));	// %u �� unsigned int���� ����ϴµ� ���, 
									// �׷��� �� ��� %d �� ����� ǥ�� ����.
									// %u �� %d �� ����� �� �ִ� ���� ���̴� ������, ū ���� �ƴϹǷ� ��� ����.
}
*/