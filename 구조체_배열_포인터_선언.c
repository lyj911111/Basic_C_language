#include <stdio.h>
/*
	구조체 배열, 포인터 선언하기


*/

struct person
{
	char name[20];
	int age;
};

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	// struct person ar[3];		//	구조체 배열 선언하기
	// struct person * ptr;		//	구조체 포인터 선언하기

	struct point arr[3];		//	구조체 배열 선언
	for (int i = 0; i < 3; i++)
	{
		printf("좌표 입력: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("[%d %d]", arr[i].xpos, arr[i].ypos);
	}


	return 0;
}
