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
	// ����ü�� �����ͷ� ���
	ptrPerson = &person;

	// ����ü�� �׳� ���
	person.name = "Lee Won Jae";
	person.gender = "Male";
	person.age = 28;

	printf("%s \n", person.name);
	printf("%s \n", person.gender);
	printf("%d \n", person.age);
	printf("\n");

	////////////////////////////////////////////////

	// �����ͷ� �����ؼ� ����ϱ�
	ptrPerson->name;
	ptrPerson->gender;
	ptrPerson->age;

	printf("%s \n", ptrPerson->name);
	printf("%s \n", ptrPerson->gender);
	printf("%d \n", ptrPerson->age);
	printf("\n");

	/////////////////////////////////////////////////
	// ��ȣ���� �ʴ� ���. �׷��� �̷��� �� ���� �ִ�.

	printf("%s \n", (*ptrPerson).name);
	printf("%s \n", (*ptrPerson).gender);
	printf("%d \n", (*ptrPerson).age);
	printf("\n");

	return 0;
}