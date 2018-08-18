#include <stdio.h>
#include <stdlib.h>		//	malloc�Լ� ����.
/*
	�޸��� �����Ҵ�.
	�Լ� -> "malloc()" , "free()" �� ���� ����.
	��������, �������� �������θ� �ذ��� �Ұ��� �� ��,


	�Լ� ����:

	void * malloc(size_t size);		 // Heap ���������� �޸� ���� �Ҵ�.
	void free(void * ptr);			 // Heap ������ �Ҵ�� �޸� ���� ����

	-> �Լ� ������ �Ҵ�� �޸� �ּҰ�, ���н� NULL��ȯ

*/

/*	�����Ҵ��� �ʿ��� ��,

char * ReadUserName(void)	//	����ڷκ��� name�� �Է¹޾� char * �ּҰ��� ��ȯ�ϴ� �Լ�
{
	char name[30];					//	�޸� ���� �Ҵ�
	printf("what is your name? ");
	gets(name);						//	����ڷκ��� ���� �޾� �޸𸮿� ����
	return name;					//	�ּҰ����� ��ȯ (�迭�̸��� �ּ��̹Ƿ�)
}

//	�޸𸮴� ����, ���� �������� �ʰ�, ����� ����Ǿ� �Ҹ�Ǿ��ٰ� �νĵ� ���� �����Ⱚ���� �νĵǰ�, ������ ���� ����.

int main(void)
{
	char * name1;					//	name1, name2 �ּҰ����� ����
	char * name2;

	name1 = ReadUserName();			
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name1: %s \n", name2);	//	�� ���������� �� ���, name1 ���� ��ȯ�� ���� �Լ��� ������ ���� �Ҹ�ǰ� ����.

	return 0;
}

*/

int main()
{
	void * ptr1 = malloc(4);	//	4����Ʈ�� �� ������ �Ҵ�
	void * ptr2 = malloc(12);	//	12����Ʈ�� �� ������ �Ҵ�

	free(ptr1);					//	ptr1 �� ����Ű�� 4����Ʈ�� �޸� ���� ����
	free(ptr2);					//	ptr2 �� ����Ű�� 4����Ʈ�� �޸� ���� ����

	// <void * ptr1> �� <void *> �� ��� �ּҰ��� ���� �� �ִ� ���� ����. �׷��� <*ptr1> �� ������ �Ұ���.
	// �׷���  < int * ptr = (int *)ptr1 = malloc(4); > ���� ���� �� ��ȯ ������.


	return 0;
}

/*
	malloc �Լ��� ��ȯ���� void �������� ����?
	
	��> malloc �Լ��� ���ڷ� �����ϳ� ���޸� ����, �޸��� �뵵�� �� ���� ����. ����, �޸��� ���������� �������� ����.
		���� ������ ���� �� ��ȯ�� ���ľ� ��. (�Ʒ�)

	
		�������� �Լ� ����                                    ���� �ǹ�
	void * ptr1 = malloc(sizeof(int));			->	void * ptr1 = malloc(4)
	void * ptr2 = malloc(sizeof(double));		->  void * ptr2 = malloc(8)
	void * ptr3 = malloc(sizeof(int)*7);		->	void * ptr3 = malloc(28)	//	int�� ���� 7��, ��, �迭�� �ǹ���.
	void * ptr4 = malloc(sizeof(double)*9);		->	void * ptr4 = malloc(72)	//	double�� ���� 9��,

	malloc�Լ��� ���� �޸� ũ�⸸ �Ҵ����ְ�, � �ڷ������� ������ ���� ����.
	�׷��� �ּҰ��� ��ȯ�ϰ�, ���� �ڷ����� ���α׷��Ӱ� ���ؼ� ������ �Ѵ�.

*/
#ifdef malloc �Լ��� ���� ������� ȣ�� ����.

void   * ptr1 = (int *)malloc(sizeof(int));
double * ptr2 = (double *)malloc(sizeof(double));
int    * ptr3 = (int *)malloc(sizeof(int) * 7);
double * ptr4 = (double *)malloc(sizeof(double) * 9);
#endif

