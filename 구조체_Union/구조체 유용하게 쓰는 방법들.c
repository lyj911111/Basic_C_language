#include <stdio.h>

/*
1.
구조체를 유용하게 쓰는 방법의 예제.
ex) 학생들의 많은 배열의 정보를 저장하고 이를 활용하는 예제.

2. 중첩 구조체 정의 변수 선언.

*/

//예제 2.  중첩된 구조체 정의, 변수 선언.
typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct circle
{
	Point cen;
	double rad;
}Circle;

void ShowCircleInfo(Circle * cptr)
{
	printf("[%d %d] \n", (cptr->cen).xpos , (cptr->cen).ypos);
	printf("radius: %g \n \n", cptr->rad);
}

int main()
{
	Circle c1 = { {1,2}, 3.5 };		// Circle 구조체의 초기값 지정. cen의 내부에 있는 xpos, ypos값 지정, rad값 지정
	Circle c2 = { 2 , 4 ,3.9 };
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);
}

//예제 1.
/*
typedef struct student
{
	char name[20];		//	학생 이름, 번호, 학교, 전공, 학년 에 대한 구조체 정보 선언.
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}Student;

void ShowStudentInfo(Student * sptr)
{
	printf("학생 이름: %s \n", sptr->name);
	printf("학생 번호: %s \n", sptr->stdnum);
	printf("학교 이름: %s \n", sptr->school);
	printf("선택 전공: %s \n", sptr->major);
	printf("학년: %d \n", sptr->year);
}

int main()
{
	Student arr[7];		//	학생 정보를 지닌 하나의 배열을 선언.
						//	** 하나의 배열 선언으로 종류가 다른 여러 배열 데이터를 한데 저장 가능.
	int i;

	for (i = 0; i<7; i++)		//	7명의 정보를 이곳에서 저장.
	{
		printf("이름:");	scanf("%s", arr[i].name);
		printf("번호:");	scanf("%s", arr[i].stdnum);
		printf("학교:");	scanf("%s", arr[i].school);
		printf("전공:");	scanf("%s", arr[i].major);
		printf("학년:");	scanf("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++)
	{
		ShowStudentInfo(&arr[i]);
	}

	return 0;
}*/