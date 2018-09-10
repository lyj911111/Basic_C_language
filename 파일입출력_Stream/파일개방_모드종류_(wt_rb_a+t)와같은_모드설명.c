#include <stdio.h>

/*
	파일의 개방 모드 
	즉, stream을 어떻게 생성하는가에 대한 방법. fopen(  , "wt" 또는 "rt" ) write와 read 이 외 모드.

	a.txt data는 사람이 볼수 있는 파일,  a.bin 메모장으로 읽을 수 없는 이진수로 된 파일. (음원, 영상 등 소프트웨어에 의해 해석이 되는 데이터)

	"wt" : write text		// text 사람이 읽을 수 있음.
	"wb" : write binary
	"rt" : read text		// binary 지정된 소프트웨어가 읽음.
	"rb" : read binary

	스트림의 구분 기준.
	1. 읽기 위한 스트림인가? 쓰기 위한 스트림인가?
	2. Text 데이터를 위한 스트림인가?  Binary를 위한 데이터 스트림인가?

	[모드(mode)]	  [스트림의성격]		[파일 없으면]
	  r				    읽기가능				에러
	  w					쓰기가능				생성
	  a			   파일끝 덧붙여 쓰기가능		생성
	  r+			  읽기/쓰기 가능			에러
	  w+			  읽기/쓰기 가능			생성
	  a+		   읽기/덧붙여 쓰기 가능		생성

	그러나 +모드들은 잘 사용하지 않음.
	모드 r w a 를 주로 사용함.


	특징: r은 없으면 에러발생, a는 파일없으면 생성.
		  w는 덮어쓰지만, a는 그 뒤에 덮어씀.

*/

int main()
{
	// 사용 예제. 이와 같이 모드를 사용함.
	fopen("file.txt", "rb");	// read binary
	fopen("file.txt", "wt");	//	write text
	fopen("file.txt", "a+t");	//	a+ text


	return 0;
}