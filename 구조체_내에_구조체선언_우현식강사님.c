#include <stdio.h>

typedef struct worldinformation
{
	char * nation;
	char * region;
}worldInformation;
// 이 이름을 구조체로 사용. typedef 선언

typedef struct personinformation
{
	char * name;
	char * gender;
	int age;
	worldInformation world;	//	구조체 내에 구조체 선언.
}personInformation;


int main()
{
	personInformation 개인정보;

	개인정보.name = "won jae";
	개인정보.gender = "남자";
	개인정보.age = 28;
	개인정보.world.nation = "한국";
	개인정보.world.region = "서울";

	printf("%s \n", 개인정보.name);
	printf("%s \n", 개인정보.gender);
	printf("%d \n", 개인정보.age);
	printf("%s \n", 개인정보.world.nation);
	printf("%s \n", 개인정보.world.region);

	return 0;
}