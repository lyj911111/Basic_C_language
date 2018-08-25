#include <stdio.h>

/*
	��� �ּҰ��� ������ �� �ִ� void ������, (type���� �ʿ����, ���� �ּҸ� ����)
	type(�ڷ���) �� �������� �ʱ� ������,  *������ �Ұ����ϴ�.
	
	������: void * ptr;

	*ptr = 3.14 ; �̷��� ������ �Ұ����ϴ�. �ֳ��ϸ�, �ڷ����� �𸣱� �����̴�.
	ptr++;		  �̷��� ���굵 �Ұ����ϴ�. �ڷ����� ����.
*/

void func(void)
{
	return 0;
}

int main()
{
	int num = 20;
	void * ptr;				// void ������ ����.
	void(*funcptr) (void);	// �Լ������� ����.

	ptr = &num;				// ptr�����Ϳ� num�� �ּҰ��� ���� (�׷��� int�� type�� ������´�)
	printf("%p \n", ptr);	// ptr�� ����Ű�� �ּҰ� ���
	printf("%p \n", &num);	// num�� �ּҰ� ���   (ptr�� ����Ű�� �ּҰ� = num�ּҰ�)

	printf("%p \n", &ptr);	//	ptr��ü�� �ּҰ�.

	// void �����Ϳ� �Լ������͵� ������ �����ϴ�!!!!!
	ptr = funcptr;

	return 0;
}