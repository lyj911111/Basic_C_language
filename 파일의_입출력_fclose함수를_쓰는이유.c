#include <stdio.h>

/*
	스트림(stream)의 소멸을 요청하는 fclose() 함수

	int fclose(FILE * stream) 
		-> 성공시 0을 반환, 실패시 EOF반환

	프로그램이 시작되면 자동으로 생성되는 stdin, stdout, stderr 은, 프로그램이 끝나면 자동으로 모두 종료가 된다.
	그러나 fopen후,  flose를 해야되는 이유,
	 
	 Write할때,

	1. 불필요한 메모리 낭비를 막음. (필요할때 stream을 생성하면 되는데, 계속해서 생성하면 resource가 낭비됨)
	2. 출력 버퍼에 남아있는 상황에서 전원이 나가버리면, 모든 데이타는 날라가버림. (안전성의 측면)

	 Read할때는
	* 정전이 되도, 데이터가 사라질 염려도 없음 저장된 파일을 읽기만 하는 것이므로, 일부 프로그래머는 fopen("file.txt",rt) 하고 끝까지 냅두는 경우도 있음.

	*습관화 하자!
	fopen() 을 5번 하면, fclose도 5번 하자 !!!!!!!!!!!!!!


*/

int main()
{



	return 0;
}