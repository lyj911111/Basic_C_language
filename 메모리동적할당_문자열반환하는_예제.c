#include <stdio.h>
#include <stdlib.h>

/*
	���ڿ��� ��ȯ�ϴ� �����Ҵ� ����
*/

// �� �Լ��� ȣ��ɶ����� ���ο� �޸� ������ �Ҵ�ǰ�, �� �޸𸮰����� �Լ��� �������� �Ŀ��� �Ҹ���� �ʴ´�.
char * ReadUserName(void)
{
	char * name = (char*)malloc(sizeof(char) * 30);	//	char�� x 30, �� 30byte�� heap������ �Ҵ�, (char *) ���� �ڷ��� ��ȯ
	printf("what's your name? ");					//	* name ��  30byte�� �޸𸮸� ����Ű�� �����Ͱ� �ȴ�.
	gets(name);	
	return name;
}

int main(void)
{
	char * name1;									 
	char * name2;

	name1 = ReadUserName();				//	�Լ����� ��ȯ�� char * �� name1�� �޸𸮿� ����
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name1: %s \n", name2);

	printf("again name1: %s \n", name1);
	printf("again name2: %s \n", name2);

	free(name1);
	free(name2);

	// �޸� ������ �Ҹ�Ǿ����Ƿ�, �����Ⱚ�� ����.
	printf("again name1: %s \n", name1);
	printf("again name2: %s \n", name2);

	return 0;
}