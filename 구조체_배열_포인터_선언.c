#include <stdio.h>
/*
	����ü �迭, ������ �����ϱ�


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
	// struct person ar[3];		//	����ü �迭 �����ϱ�
	// struct person * ptr;		//	����ü ������ �����ϱ�

	struct point arr[3];		//	����ü �迭 ����
	for (int i = 0; i < 3; i++)
	{
		printf("��ǥ �Է�: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("[%d %d]", arr[i].xpos, arr[i].ypos);
	}


	return 0;
}
