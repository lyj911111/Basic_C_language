

#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

// 초기화 방식이 배열과 유사함.
// 초기화 할 데이터들을 중괄호 안에 순서대로 나열하면 된다.

int main()
{
	struct point pos = { 10, 20 };
	struct person man = { "이승기", "010-1234-5678", 21 };

	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);

	return 0;
}