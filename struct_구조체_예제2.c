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
	struct person man1, man2;				//	man1 과 man2 변수 선언.
	strcpy(man1.name, "Jay Lee");			//	man1 의 데이터 부여
	strcpy(man1.phoneNum, "010-1234-5678");
	man1.age = 23;

	printf("이름 입력: ");			// man2에 대한 데이터 입력
	scanf("%s", man2.name);
	printf("번호 입력: ");
	scanf("%s", man2.phoneNum);
	printf("나이 입력: ");
	scanf("%d", &(man2.age));

	printf("첫번째 사람 이름: %s \n", man1.name);
	printf("첫번째 사람 번호: %s \n", man1.phoneNum);
	printf("첫번째 사람 나이: %d \n", man1.age);

	printf("두번째 사람 이름: %s \n", man2.name);
	printf("두번째 사람 번호: %s \n", man2.phoneNum);
	printf("두번째 사람 나이: %d \n", man2.age);

	return 0;
}