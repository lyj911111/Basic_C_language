#include <stdio.h>

/*
	열거형 선언하기.
	enumerate : enum

	enum 으로 선언된 값은, 상수형태로 저장되어 어디에서든 사용할 수 있다.
	목적은, 프로그램의 가독성을 높이는데 있다.

	열거형 예제.
*/

enum  // ga의 값만 정해도 뒤부터는 1씩 증가함.
{
	ga=1, na, da, ra, ma, ba, sa
};

						// typedef를 이용.
						// 굳이 typedef를 쓸 필요가 없다. 오히려 다수의 상수를 한번에 표현하는 것이 더 의의가 있다.
typedef enum syllable	// 다수의 상수가 동시에 선언. 도레미파솔라시
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7	//	이렇게 열거하며 값을 넣을 수 있다.
}Syllable;

void Sound(int sy)
{
	switch (sy)
	{
	case Do:
		puts("도는 하얀 도라지~");
		return;
	case Re:
		puts("레는 하얀 도라지~");
		return;
	case Mi:
		puts("미는 하얀 도라지~");
		return;
	case Fa:
		puts("파는 하얀 도라지~");
		return;
	case So:
		puts("솔는 하얀 도라지~");
		return;
	case La:
		puts("라는 하얀 도라지~");
		return;
	case Ti:
		puts("시는 하얀 도라지~");
		return;
	}
	puts("다 함께 노래부르세");
}

int main()
{
	int tone;
	for (tone = Do ; tone <= Ti ; tone+=1 )	//	다시말해 for(tone = 1; tone <= 7 ; tone += 1) 과 같다. 상수이기 때문에.
	{
		Sound(tone);
	}

	printf("%d, %d, %d, %d, %d, %d, %d \n", ga, na, da, ra, ma, ba, sa);

	return 0;
}