#include <stdio.h>

/*
	주제: 포인터 문자열과 배열문자열의 차이 명확히 구분하기


  배열에 대하여...

	char str[20] = "abcd";
	여기서 str(배열)의 문자열 내용을 바꾸고 싶을때는
	#include <string.h> 를 하고, 그 내부의 함수를 이용하는 방법도 있다.

	배열 내부의 값은 하나씩 접근하여 바꾸는 수 밖에 없다.
	ex) str[0] = 'F', str[1] = 'X'  이런 식으로......

	배열의 이름 상수형태의 포인터 이므로 무언가를 대입해서 바꿀 수 없다.
	※ 즉, 배열의 이름은 대입연산자의 왼쪽에 올 수 없다 !!!!
	   ex)  str = "cdef"; 이것이 불가능 하다 !! 왼쪽에서 대입받을 수가 없다는 것이다.


*/

int main()
{
	// 배열과 포인터 문자열 차이점.
	char str1[20] = "abcd";		//	[20]의 메모리 공간을 미리 마련해 놓고 "abcd"
	char * str2 = "efgh";		//	임의 메모리 공간에 "efgh"자동으로 저장이 되고, 그 위치주소값이 str2으로 반환이 되는 것이다. 즉, 'e'가 저장된 주소값 자리

 // str1 = "damn";  <= 이렇게 배열에 문자열을 넣는 것은 불가능. 한개씩 접근해야함. 
	str1[0] = 'd';	//	즉, 이런식으로 바꿔줘야함.
	str1[1] = 'a';
	str1[2] = 'm';
	str1[3] = 'n';
	printf("%s \n", str1);


	char * string = "my string";	//	메모리 공간에 자동으로 할당된 문자열을 가리킴. 첫번째 m을 가리킴.
	printf("%s \n", string);

	string = "your string";			//	가리키는 대상을 y의 주소값으로 바꿈. ("your string"도 메모리 공간에 자동생성)
	printf("%s \n", string);

 // string[0] = 'X';    이런식으로 포인터로 선언된 문자열의 배열 값을 바꾸는 것은 표준이 아니므로 (컴파일에 따라 되는게 있고 안되는게 있다, 그러나 표준이 아니므로 하지 않도록 한다)
 
	

	return 0;
}