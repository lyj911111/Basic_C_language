#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	����ü�� ������ �ǹ������� ����ϴ� ���.
	�޸��� �����ο� �̿�.

*/

typedef struct person
{
	char * name;
	char * gender;
	int age;
}Person;

// �Լ� ���� ���ڷ� ����ü�� ����, Dynamic allocation �̿�.
void informationPerson(Person * ptrStruct, const char * pName, const * pGender, int age)
{
	ptrStruct->name = (char *)malloc(strlen(pName)+1);			// Heap������ pName�� ����+1 ('/0'�� �� ������ ���� +1) �� �Ҵ��ϰ�, ptrStruct->name �� ����Ŵ.
	strcpy(ptrStruct->name, pName);

	ptrStruct->gender = (char *)malloc(strlen(pGender) + 1);
	strcpy(ptrStruct->gender, pGender);

	ptrStruct->age = age;
}

int main()
{
	Person person_Variable;

	informationPerson(&person_Variable, "Jay Lee", "male", 28);	// ��������

	printf("%s \n",person_Variable.name);
	printf("%s \n", person_Variable.gender);
	printf("%d \n", person_Variable.age);

	free(person_Variable.name);
	free(person_Variable.gender);

	return 0;
}