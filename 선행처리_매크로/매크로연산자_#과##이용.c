#include <stdio.h>

/*
매크로 연산자. (매크로를 기반으로한 연산)
1.	#
2.	##

예제.
*/

#define number 2	//	예제문제 선택.

#define STR(ABC)		#ABC	//	인자 ABC를 -> "ABC"의 문자열로 치환하라.

// 예제1. #연산자.
#if number == 1

#define STRING_JOB(A,B)	#A "의 직업은 " #B "입니다."
int main()
{
	printf("%s \n", STRING_JOB(이동춘, 나무꾼));
	printf("%s \n", STRING_JOB(한상순, 사냥꾼));

	return 0;
}

#endif
// 예제2. ##연산자.
#if number == 2
/*
	만약 입학년도,학과코드,고유번호를 받아서 최종학번을 출력하고자 할때,
	ex) 10 65 175  =>   1065175
	##을 모를때 최선의 방법은,
	-> #define STNUM(Y,S,P) ((Y)*100000+(S)*1000+(P))  일것이다.

	그러나, 만약 STNUM(10,65,075)를 실행하면, 075는 8진법이기 때문에 엉뚱한 값이 나와버린다.

	## 연산자, 2개를 그냥 붙여버리는 것.
*/
#define CON(UPP,LOW)  UPP ## 00 ## LOW  // UPP값 뒤에 00을 붙이고 뒤에 LOW값을 붙여버림.


int main()
{
	int num = CON(22, 77);  // => 22뒤에 00뒤에 77, 220077
	printf("%d\n", num);

	return 0;
}

#endif

