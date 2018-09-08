#include <stdio.h>

/*


*/

struct Person
{
	char * name;
	char * gender;
	int age;
}person, *ptrPerson;

int main()
{
	// 구조체를 포인터로 담기
	ptrPerson = &person;

	// 구조체를 그냥 출력
	person.name = "Lee Won Jae";
	person.gender = "Male";
	person.age = 28;

	printf("%s \n", person.name);
	printf("%s \n", person.gender);
	printf("%d \n", person.age);
	printf("\n");

	////////////////////////////////////////////////

	// 포인터로 접근해서 출력하기
	ptrPerson->name;
	ptrPerson->gender;
	ptrPerson->age;

	printf("%s \n", ptrPerson->name);
	printf("%s \n", ptrPerson->gender);
	printf("%d \n", ptrPerson->age);
	printf("\n");

	/////////////////////////////////////////////////
	// 선호하지 않는 방법. 그러나 이렇게 쓸 수도 있다.

	printf("%s \n", (*ptrPerson).name);
	printf("%s \n", (*ptrPerson).gender);
	printf("%d \n", (*ptrPerson).age);
	printf("\n");

	return 0;
}