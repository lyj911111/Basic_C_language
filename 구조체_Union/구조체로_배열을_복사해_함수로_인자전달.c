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
	printf("���� ��ġ�� �Է��Ͻÿ�:\n");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main()
{
	Point curpos = GetCurrentPosition();	// �� ��������, getCurren~()�Լ��� �� 2���� �Ȱ��� �׵��� ��ȯ�� �ȴ�.
	Showposition(curpos);		//	�ΰ��� ���� ���� �Լ��� �׵��� ���޵�. �ɹ� �� �ɹ��� ���簡 �ȴ�!!

	return 0;
}
*/


//�ι�° ����.

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
	Person man;			//	����ü ���� ����

	printf("name? ");
	scanf("%s", &man.name);	

	printf("phone? ");
	scanf("%s", &man.phoneNum);

	printf("age? ");
	scanf("%d", &man.age);

	return man;			//	����ü �ɹ��� ������ ���� return
}

int main()
{
	Person man = ReadPersonalInfo();
	ShowPersonInfo(man);
	return 0;
}

// �迭�� ���� �Ű����� �������� �� �� �� ������.
// �׷��� �Լ��� ���ڸ� ���� �� �� �ּҰ��� ���ڷ� �߾���.
// ����ü�� �ɹ��� �迭�� �����ϸ�, �迭�� ��ü�� ������ �� �ִ� *********
// ��, �迭�� �ּҰ��� �����ϴ°��� �ƴ϶� "����"�� �����ϴ� ����ü�� �̿��Ͽ� !!