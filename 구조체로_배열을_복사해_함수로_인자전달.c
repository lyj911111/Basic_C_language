#include <stdio.h>
/*
typedef struct point
{
	int xpos;
	int ypos;
}Point;

void Showposition(Point position)
{
	printf("[%d %d]\n", position.xpos, position.ypos);
}

Point GetCurrentPosition(void)
{
	Point cen;
	printf("현재 위치를 입력하시오:\n");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main()
{
	Point curpos = GetCurrentPosition();	// 이 과정에서, getCurren~()함수의 값 2개가 똑같이 그데로 반환이 된다.
	Showposition(curpos);		//	두개의 값을 받은 함수가 그데로 전달됨. 맴버 대 맴버로 복사가 된다!!

	return 0;
}
*/


//두번째 예제.

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void ShowPersonInfo(Person man)
{
	printf("name : %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age  : %d \n", man.age);
}


Person ReadPersonalInfo(void)
{
	Person man;			//	구조체 변수 선언

	printf("name? ");
	scanf("%s", &man.name);	

	printf("phone? ");
	scanf("%s", &man.phoneNum);

	printf("age? ");
	scanf("%d", &man.age);

	return man;			//	구조체 맴버에 대입한 값을 return
}

int main()
{
	Person man = ReadPersonalInfo();
	ShowPersonInfo(man);
	return 0;
}

// 배열은 원래 매개변수 선언으로 올 수 가 없었다.
// 그래서 함수에 인자를 전달 할 때 주소값을 인자로 했었다.
// 구조체의 맴버로 배열이 존재하면, 배열을 통체로 전달할 수 있다 *********
// 즉, 배열의 주소값을 조작하는것이 아니라 "복사"가 가능하다 구조체를 이용하여 !!