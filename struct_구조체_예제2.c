#include <stdio.h>
#include <string.h>
#include <math.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age ;
};

int main()
{
	struct person man1, man2;				//	man1 �� man2 ���� ����.
	strcpy(man1.name, "Jay Lee");			//	man1 �� ������ �ο�
	strcpy(man1.phoneNum, "010-1234-5678");
	man1.age = 23;

	printf("�̸� �Է�: ");			// man2�� ���� ������ �Է�
	scanf("%s", man2.name);
	printf("��ȣ �Է�: ");
	scanf("%s", man2.phoneNum);
	printf("���� �Է�: ");
	scanf("%d", &(man2.age));

	printf("ù��° ��� �̸�: %s \n", man1.name);
	printf("ù��° ��� ��ȣ: %s \n", man1.phoneNum);
	printf("ù��° ��� ����: %d \n", man1.age);

	printf("�ι�° ��� �̸�: %s \n", man2.name);
	printf("�ι�° ��� ��ȣ: %s \n", man2.phoneNum);
	printf("�ι�° ��� ����: %d \n", man2.age);

	return 0;
}