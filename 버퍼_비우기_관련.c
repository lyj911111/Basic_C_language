#include <stdio.h>

void ClearLineFromReadBuffer(void);

int main()
{
	char perID[7];							//	ex) 911105'\0' 총 7개 배열 필요.
	char name[10];

	fputs("주민번호 앞 6자리: ", stdout);	//	모니터에 출력
	fgets(perID, sizeof(perID), stdin);		//	최대 크기 7 byte를 키보드로 부터 입력 받음.

	/************/
	ClearLineFromReadBuffer();				//	입력 버퍼를 비우기. 그냥 읽어들임. 반환없이.
	/************/

	fputs("이름 입력: ", stdout);			//	모니터에 출력
	fgets(name, sizeof(name), stdin);		//	최대 크기 10 byte를 키보드로 부터 입력 받음.

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);

	return 0;
}

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');		//	문자열의 끝 '엔터키'가 들어올때까지 계속 Read가 되어짐. 즉, 버퍼의 값을 사용하지 않고 그냥 버려짐.
}