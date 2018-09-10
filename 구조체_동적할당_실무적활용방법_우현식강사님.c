#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	구조체와 포인터 실무적으로 사용하는 방법.
	메모리의 자유로운 이용.

*/

typedef struct person
{
	char * name;
	char * gender;
	int age;
}Person;

// 함수 선언 인자로 구조체를 전달, Dynamic allocation 이용.
void informationPerson(Person * ptrStruct, const char * pName, const * pGender, int age)
{
	ptrStruct->name = (char *)malloc(strlen(pName)+1);			// Heap영역에 pName의 길이+1 ('/0'이 들어갈 공간을 위해 +1) 를 할당하고, ptrStruct->name 을 가리킴.
	strcpy(ptrStruct->name, pName);

	ptrStruct->gender = (char *)malloc(strlen(pGender) + 1);
	strcpy(ptrStruct->gender, pGender);

	ptrStruct->age = age;
}

int main()
{
	Person person_Variable;

	informationPerson(&person_Variable, "Jay Lee", "male", 28);	// 인자전달

	printf("%s \n",person_Variable.name);
	printf("%s \n", person_Variable.gender);
	printf("%d \n", person_Variable.age);

	free(person_Variable.name);
	free(person_Variable.gender);

	return 0;
}