#include <stdio.h>

void ClearLineFromReadBuffer(void);

int main()
{
	char perID[7];							//	ex) 911105'\0' �� 7�� �迭 �ʿ�.
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ�: ", stdout);	//	����Ϳ� ���
	fgets(perID, sizeof(perID), stdin);		//	�ִ� ũ�� 7 byte�� Ű����� ���� �Է� ����.

	/************/
	ClearLineFromReadBuffer();				//	�Է� ���۸� ����. �׳� �о����. ��ȯ����.
	/************/

	fputs("�̸� �Է�: ", stdout);			//	����Ϳ� ���
	fgets(name, sizeof(name), stdin);		//	�ִ� ũ�� 10 byte�� Ű����� ���� �Է� ����.

	printf("�ֹι�ȣ: %s \n", perID);
	printf("�̸�: %s \n", name);

	return 0;
}

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');		//	���ڿ��� �� '����Ű'�� ���ö����� ��� Read�� �Ǿ���. ��, ������ ���� ������� �ʰ� �׳� ������.
}