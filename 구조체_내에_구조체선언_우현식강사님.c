#include <stdio.h>

typedef struct worldinformation
{
	char * nation;
	char * region;
}worldInformation;
// �� �̸��� ����ü�� ���. typedef ����

typedef struct personinformation
{
	char * name;
	char * gender;
	int age;
	worldInformation world;	//	����ü ���� ����ü ����.
}personInformation;


int main()
{
	personInformation ��������;

	��������.name = "won jae";
	��������.gender = "����";
	��������.age = 28;
	��������.world.nation = "�ѱ�";
	��������.world.region = "����";

	printf("%s \n", ��������.name);
	printf("%s \n", ��������.gender);
	printf("%d \n", ��������.age);
	printf("%s \n", ��������.world.nation);
	printf("%s \n", ��������.world.region);

	return 0;
}