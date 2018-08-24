#include <stdio.h>

/*
C언어 printf (표준출력) 에 대해.

*/

int main()
{
	int a = 100;
	int A = 123;
	float b = 0.12;
	double B = 0.1234;
	char c = 'c';
	char * C = "hello world";
	double d = 0.123442123541231;
	double D = 10230.4938593804985;
	float num1 = 0.123123;
	double num2 = 0.321321;
	float * ptr1 = &num1;
	double * ptr2 = &num2;


	printf("%d, %i \n", a, a);	//	[%d , %i] : int형식을 decimal 십진수 출력
	printf("%ld %lld \n", a, a);//	[%ld, %lld] : int값중 엄청 큰값을 출력
	printf("%o \n", a);			//	[%o] : Octal 8진수 출력
	printf("%x \n", A);			//	[%x] : hexadicimal 16진수 출력
	printf("%X \n", A);			//	[%X] : 16진수 대문자 출력
	printf("%u \n", a);			//	[%u] : unsigned int형 10진수 출력

	printf("%f \n", b);			//	[%f] : float, double 실수 출력, 소수점 6째짜리까지 디폴트로 출력
	printf("%F \n", B);			//	[%F]
	printf("%lf \n", B);		//	[%lf]
	printf("%g \n", b);			//	[%g] : 실수형태를 소수점자리 까지 알아서 잘라서 표현. (%f 와 %e 값의 표현이 귀찮을?, 자동으로 표현하고자 할? 사용)
	printf("%G \n", B);			//	[%G] : 실수형태를 소수점자리 까지 알아서 잘라서 표현.
	printf("%.3f \n", 123.456789);	// [%.3f] : 부동 소수점 3자리 이후 부터 출력

	printf("%e \n", d);			//	[%e] : 10자승 수학연산, 유효숫자 소수점 6자리 이후 10의 자승으로 표현.
	printf("%E \n", D);			//	[%E] : (E 알파벳 대문자 표현)

	printf("%c \n", c);			//	[%c] : character 문자 표현 (아스키코드)
	printf("%s \n", C);			//	[%s] : String 문자열 표현

	printf("%p \n", ptr1);		//	[%p] : void 포인터 표현, 메모리주소를 16진수로 표현
	printf("%p \n", *ptr1);
	printf("%p \n", num1);

	printf("================flag====================\n");
	// % 공백 d 출력, (즉 왼쪽부터 공백을 넣을때) 
	printf(" %8d \n", 1);			// 출력:        1 
	printf(" %8d \n", 1234);		// 출력:     1234
	printf(" %8d \n", 43214321);	// 출력: 43214321

	printf("2. flag에 -를 지정하여 10진수로 출력	: %-8d \n", 123123);	// - 는 출력필드를 왼쪽배치함. (Default는 오른쪽)
	printf("3. flag에 +를 지정하여 10진수로 출력	: %+d\n", 123);			// + 는 언제나 부호필드를 출력
	printf("4. flag 지정하지 않고 8진수로 출력	: %o\n", 123);			//	출려값: 173
	printf("5. flag에 #을 지정하여 8진수로 출력	: %#o\n", 123);			//	출력값: 0173
	printf("6. flag 지정하지 않고 16진수로 출력	: %X\n", 123);			//	출력값: 7B
	printf("7. flag에 #을 지정하여 16진수로 출력	: %#X\n", 123);			//	출력값: 0X7B

	printf("1.flag #을 지정하여 16진수로 출력(소문자)				: %#x \n", 0x123456);		//	출력값: 0x123456
	printf("2.flag #, modifier h를 지정하여 16진수로 출력(대문자)	: %#hX \n", 0x123456);		//	출력값: 0X3456
	printf("3.flag #, width 12 지정하여 16진수로 출력(대문자)		: %#12X \n", 0x123456);		//  출력값: 0X123456
	printf("4.flag #, width 012 지정하여 16진수로 출력(대문자)		: %#012X \n", 0x123456);	//	출력값: 0X0000123456

	//	백스페이스 /b 사용
	printf(" \b  \n");	

	// 특수 문자 출력
	printf("30%% \n", a);		//	%%	:  %(퍼센트)를 출력.
	printf(" \"  \n");			//  \"	:  "(큰따옴표)를 출력
	printf(" \'  \n");			//	\'	:  '(작은따옴표)를 출력
	printf(" \?  \n");			//	\?  :  ?(물음표) 출력
	printf(" \\  \n");			//	\\	:  \(역슬레쉬) 또는 원화표시 출력
	printf(" \n ");				//	개행
	printf(" \r ");				//	캐리지 리턴
	printf("1234\b\b  \n");		//	백스페이스, 
	printf("\a");				//	경고음. 


	return 0;
}