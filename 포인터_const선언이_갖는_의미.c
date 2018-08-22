#include <stdio.h>
/*
	포인터 변수의 const선언.


	case 1.
		const * int ptr 에 대해서.
	case 2.
		int * const ptr 에 대해서.

*/

#define case 3		//	내가 볼 문제를 선택.

#if case == 1
int main()
{
	int num = 20;
	const int * ptr = &num;	//	ptr은 계속 num을 가리키게됨.
							//	※ 의미: ptr에 저장된 값의 변경을 허용하지 않겠다는 의미.
							//	ptr의 관점으로 바라봤을때, num은 이제 상수이고 즉, 값을 변경할 수 없다. 로 인식.
//	*ptr = 30;   컴파일 에러. ptr이 가리키는 대상은 상수라 인지하므로, 변경이 불가능하다고 함.

	num = 40; // 컴파일 가능.  즉, *ptr으로 접근하는 것은 안되지만, num 으로 변경은 가능

	return 0;
}
#endif

#if case == 2
int main()
{
	int num1 = 20;
	int num2 = 30;

	// ptr이 가리키는 대상은 num1 으로 고정하겠다고 선언.
	int * const ptr = &num1;

//	ptr = &num2;	컴파일 에러! 왜? ptr은 num1만을 가리키는 포인터로 고정했으므로.
	*ptr = 40;	//	ptr이 num1을 가리키고있고, 주소에 접근해서 변경은 할 수 있다.

	return 0;
}
#endif

#if case == 3
int main()
{
	int num = 1;
	
	// 두 const선언을 동시에 하는 방법.
	const int * const ptr = &num;
	// 즉, ptr은 영원히 num을 가리키고 있고, num의 값을 아무도 변경할 수 없고 참조만 가능하다...

}
#endif