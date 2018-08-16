#include <stdio.h>

/*
출력 스트림의 생성. 요청.

(파일 이름, 스트림 종류)

FILE * fp = fopen("data.txt", "wt");

뜻: "파일 data.txt 와 stream을 형성하되, wt모드로 stream을 형성하라!"
wt: Write (쓰기위한 스트림) , Text (text 데이터를 쓰는)
※ wt를 쓰면, 운영체제가 알아서 파일을 만들어줌, 대신 기존의 이름과 같은 파일의 data는 모두 날라가버림.
새롭게 만든다고 생각하면 됨 !!

FILE * fp = fopen("data.txt", "rt");

뜻: "파일 data.txt 와 stream을 형성하되, rt모드로 stream을 형성하라!"
rt: Read (읽기 위한 스트림) , Text (Text 데이터를 쓰는)


*/


// 예제.
int main()
{
	FILE * fp = fopen("data.txt", "wt");	// 'data.txt'를 만들어 쓰겠다.

											// 이제 fp는 'data.txt' 파일을 가리키는 지시자가 된다.
	if (fp == NULL)	//	파일이 없으면?
	{
		puts("파일 오픈 실패!");
		return -1;		//	비정상 종료를 의미 -1
	}

	// 기존에 fputc('A',stdout); <= 모니터 콘솔에 쓸때, 이렇게 사용 했었음.
	fputc('A', fp);		//	"fp"가 가리키는 파일에 문자 'A'가 저장해다.
	fputc('B', fp);
	fputc('C', fp);

	fclose(fp);			//	스트림을 없애라. 즉, 연결다리를 짤라라. 파일을 없앤다는 것이 아님.

	return 0;
}

/*

		** 파일을 실행하면, 현재 디렉터리(Directory) 에 파일이 저장됨.
		  즉, 실행파일.exe 가 있는 디렉터리에 저장됨!!

		  그러나, 현재 디렉터리는 다르게 생성될수도 있다. 확실한 것은, 탐색기로 생성된 파일 위치를 확인해야함.

		  FILE * fp = fopen("C:\\Project\\data.txt", "wt");    <= 이런 방법으로 내가 위치를 정할 수 있다.
																(\\ 2개인 이유?, 문자열에서 \\가 \으로 인식되기 때문)

*/