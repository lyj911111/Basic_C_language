#include <stdio.h>

/*
	���Ϸκ��� �����͸� �о�� ����.
*/

int main()
{
	int ch, i;
	FILE * fp = fopen("data.txt", "rt");	//	data.txt �� read ��Ʈ���� ���� ��û
	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);			//	fp���� ���� �о� ch�� �����϶�
		printf("%c \n", ch);	//	ch�� ����� ���� ����϶�
	}
	fclose(fp);		//	fopen()�ϸ�, fclose() �ؼ� �ݵ�� ��Ʈ���� ��������.

	return 0;
}