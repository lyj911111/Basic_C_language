#include <stdio.h>

/*
	파일로부터 데이터를 읽어보기 예제.
*/

int main()
{
	int ch, i;
	FILE * fp = fopen("data.txt", "rt");	//	data.txt 와 read 스트림을 형성 요청
	if (fp == NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}

	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);			//	fp에서 값을 읽어 ch에 저장하라
		printf("%c \n", ch);	//	ch에 저장된 값을 출력하라
	}
	fclose(fp);		//	fopen()하면, fclose() 해서 반드시 스트림을 막아주자.

	return 0;
}