#include <stdio.h>

/*
	공용체란?

	말 그데로 동일한 메모리 공간을 공용, 공유 한다.
	공용체와 구조체의 차이.

*/

//정의 방법은 struct랑 같다. (typedef를 이용.)
typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
}UBox;

typedef struct sbox	//	union과 비교하기 위해 선언.
{
	int mem1;
	int mem2;
	double mem3;
}SBox;

/*
int main()
{
	SBox sbx;
	UBox ubx;

	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);	//	주소값이 int는 4씩, double은 8로 증가.
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);	//	주소값이 모두 같음!!!
	printf("%d %d \n", sizeof(SBox), sizeof(UBox));			//	union은 내부 자료형을 살펴보고, 가장큰 메모리(여기서 double형)를 할당함.

	return 0;
}*/

// 예제.  union의 메모리 실험.
int main()
{
	UBox ubx;
	ubx.mem1 = 20;		//	int형 저장
	printf("%d \n", ubx.mem2);	//	mem1 에 값을 넣었는데 mem2에 같은 값이 나온다!!  같은 주소값을 가지기 때문, 자료형 일치해서 출력 가능.

	ubx.mem3 = 7.12;	//	double형 저장.
	printf("%d \n", ubx.mem1);	//	자료형이 맞지 않기 때문에 쓰레기 값이 출력
	printf("%d \n", ubx.mem2);	//	자료형이 맞지 않기 때문에 쓰레기 값이 출력
	printf("%g \n", ubx.mem3);	//	double형 값 출력

	return 0;
}