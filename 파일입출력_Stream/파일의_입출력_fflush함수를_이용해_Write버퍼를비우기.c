#include <stdio.h>

/*
	파일의 입출력에서 fflush() 함수.

	※ fflush 함수는 Write에서만 가능, 즉, 출력버퍼를 비울때 사용가능하다.
		int fflush(FILE * stream);
	** 출력버퍼를 비운다:  출력버퍼에 저장된 모든 데이터를 '목적지로 전송한다'
	* 입력버퍼를 비운다:  입력버퍼 데이터를 소멸시킴, 그러나 fflush() 함수에서는 호출할 수 없다!  -> ( getchar() 로 읽고 활용하지 않고 소멸 )


*/

int main()
{
	FILE * fp = fopen("data.txt", "wt");

	fflush(fp);			//	이렇게 fclose() 함수를 호출하지 않고, 중간에 fflush()함수를 이용해서 버퍼를 비울수도 있다.

	// 하지만, 버퍼를 비운다 해도 fopen이 열리면 반드시 fclose를 하는 습관을 갖자.
	fclose(fp);

	return 0;
}