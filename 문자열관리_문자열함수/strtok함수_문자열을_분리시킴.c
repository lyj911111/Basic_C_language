#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	���ڿ��� (����, �޸� ��)���� ���й��� ,����� delimiter���� ó��
	�ǹ��ִ� �ϳ��� �ܾ Token�̶�� ��.

	���ڿ��� �и���Ű�� strtok() �Լ� ���¹�.
*/
int main()
{
	char srcString1[] = "Sky is blue";		//	�Է¿� �ǰ��� �޸� �Ҵ�.
	char srcString2[] = "Data,is,data";		//	,�� �и��� ���ڿ� �Ҵ�.

	char * tokenPtr1;

	char * delimiter1 = " ";


	// token ���� �и����ִ� �Լ�.
	tokenPtr1 = strtok(srcString1,delimiter1);	//	�������� �и��� tokenPtr1�� �ܾ� �Ѱ��� ����.


	while (tokenPtr1 != NULL)
	{
		printf("%s \n",tokenPtr1);
		tokenPtr1 = strtok(NULL, delimiter1);

	}

	return 0;
}