#include <stdio.h>

/*
1.
����ü�� �����ϰ� ���� ����� ����.
ex) �л����� ���� �迭�� ������ �����ϰ� �̸� Ȱ���ϴ� ����.

2. ��ø ����ü ���� ���� ����.

*/

//���� 2.  ��ø�� ����ü ����, ���� ����.
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
	Circle c1 = { {1,2}, 3.5 };		// Circle ����ü�� �ʱⰪ ����. cen�� ���ο� �ִ� xpos, ypos�� ����, rad�� ����
	Circle c2 = { 2 , 4 ,3.9 };
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);
}

//���� 1.
/*
typedef struct student
{
	char name[20];		//	�л� �̸�, ��ȣ, �б�, ����, �г� �� ���� ����ü ���� ����.
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}Student;

void ShowStudentInfo(Student * sptr)
{
	printf("�л� �̸�: %s \n", sptr->name);
	printf("�л� ��ȣ: %s \n", sptr->stdnum);
	printf("�б� �̸�: %s \n", sptr->school);
	printf("���� ����: %s \n", sptr->major);
	printf("�г�: %d \n", sptr->year);
}

int main()
{
	Student arr[7];		//	�л� ������ ���� �ϳ��� �迭�� ����.
						//	** �ϳ��� �迭 �������� ������ �ٸ� ���� �迭 �����͸� �ѵ� ���� ����.
	int i;

	for (i = 0; i<7; i++)		//	7���� ������ �̰����� ����.
	{
		printf("�̸�:");	scanf("%s", arr[i].name);
		printf("��ȣ:");	scanf("%s", arr[i].stdnum);
		printf("�б�:");	scanf("%s", arr[i].school);
		printf("����:");	scanf("%s", arr[i].major);
		printf("�г�:");	scanf("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++)
	{
		ShowStudentInfo(&arr[i]);
	}

	return 0;
}*/