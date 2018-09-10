#include <stdio.h>

/*

	포인터의 포인터에 대한 이해.
	변수의 주소값을 저장하기 위해서 * 을 추가 하기만 하면 된다.

*/

int main()
{
	double num = 3.14;
	double * ptr = &num;
	double* * dptr = &ptr;
 //	포인터변수 * dptr에 (double*)타입을 담을 수 있다.
	double* * *tptr = &dptr;
	double * ptr2 = NULL; // 포인터 선언시 초기값을 아무것도 안쓰는 거 보다. NULL을 쓰면 안전하다.

/*
	위에 포인터의 정의를 통해, (참조관계)
	tptr -> dptr -> ptr -> num  이런식으로 포인터가 가리키고 있다.
*/
	printf("%9p %9p %9p %9p \n", num, ptr, *dptr, **tptr); // * 이 있기때문에 가리키고 있는 대상의 주소가 나옴, 모두 같은곳을 가리키고 있으므로 같은 주소가 출력
	printf("%9g %9g \n", num, ***tptr);

	ptr2 = **tptr;	//	tptr은 dptr주소를 갖고, dptr은 ptr주소값을 같는다.
					//	(*tptr = dptr), (*dptr = ptr), (ptr의 자료형은 double * 이므로 ptr2에 담을 수 있다.)

	ptr2 = *dptr;	//	dptr에 *을 붙임으로써 ptr이 된다. 즉, (*dptr = ptr이란 뜻. dptr이 ptr의 주소값을 가지고 있으므로. *dptr = ptr 이란 뜻) 
	

	*ptr2 = 13.22;	// *ptr2가 가리키는 대상에 접근해서 값을 대입.

	printf("%g %g %g \n", num, **dptr, ***tptr);


	return 0;
}